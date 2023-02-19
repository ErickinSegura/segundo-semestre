from modules.talk import Talker
from modules.listen import Listener
import speech_recognition as sr

r = sr.Recognizer()

def main():
    talker=Talker()
    listener=Listener()
    try:
        response=listener.listen()
        talker.talk(response)
    except Exception as e:
        print(f"Lo siento, no te entiendo debido a: {e}")

    
main()   
