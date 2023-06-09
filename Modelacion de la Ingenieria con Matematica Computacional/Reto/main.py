from modules.talk import Talker
from modules.listen import Listener
import datetime
from tkinter import * 
import pywhatkit
import openai



openai.api_key = ""
prompt_setup = "Simula ser un asistente de voz que se llama Pez. "

talker = Talker()
listener = Listener()

# Funcion principal

def run():
    try:
            response = listener.listen()
            if ('REPRODUCE' in response):
                play_music(response)
            elif ('BUSCA' in response):
                 search_on_google(response)
            elif ('QUÉ HORA ES' in response):
                hora()
            elif ('QUÉ DÍA ES HOY' in response):
                fecha()
            elif ('HASTA LUEGO' in response):
                quit()
            elif ('TEST' in response):
                talker.talk("Este es un Test")
            else:
                chat(response)
    except Exception as e:
            print(f"Error: {e}")

# Funciones del Asistente
def play_music(res):
    music = res.replace('REPRODUCE', '')
    print("Reproduciendo" + music.lower())
    talker.talk("Reproduciendo " + music)
    pywhatkit.playonyt(music)

def search_on_google(res):
    pywhatkit.search(res)

def chat(res):
    completionChoices = completion = openai.ChatCompletion.create(
  model="gpt-3.5-turbo", 
  messages=[{"role": "user", "content": prompt_setup+res}]
).choices[0]
    completion=completionChoices['message']
    print(completion['content'])
    talker.talk(completion['content'])

def hora():
    hora = datetime.datetime.now().strftime("%H:%M")
    print("Son las " + hora)
    talker.talk("Son las " + hora)

def fecha():
    fecha = datetime.datetime.now().strftime("%d/%m/%Y")
    print("Hoy es " + fecha)
    talker.talk("Hoy es " + fecha)

# Funciones Extra


# GUI
root = Tk()
root.title("Pez")
root.geometry("700x800")
root.resizable(0,0)
root.configure(bg="#343140")
#root.attributes('-fullscreen', True) #Fullscreen, desactivar o activar segun conveniencia

# Titulo

label = Label(root, text="Pez", font=("Consolas", 70), bg="#343140", fg="white")
label.pack()


# Imagen de Pez
framesNum = 20 # Numero de frames que tiene el gif, si no lo conoces ir haciendo tentativos.
archivo = "pez.gif"

# Lista de todas las imagenes del gif
frames = [PhotoImage(file=archivo, format='gif -index %i' %(i)) for i in range(framesNum)]

def update(ind):
    """ Actualiza la imagen gif """
    frame = frames[ind]
    ind += 1
    if ind == framesNum:
        ind = 0
    canvas.create_image(0, 0, image=frame, anchor=NW)
    root.after(100, update, ind) # Numero que regula la velocidad del gif

canvas = Canvas(width=600, height=338, bg='#343140', highlightthickness=0) # Modificar segun el tamaño de la imagen
canvas.pack(pady=100)
root.after(0, update, 0)

# Escuchar
btnRun=Button(root,text="Escuchar", font=("Consolas", 30), bg='#f77e06', command=run)
btnRun.pack()

# Run
root.mainloop()
#run()