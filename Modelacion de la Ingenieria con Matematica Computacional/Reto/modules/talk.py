import pyttsx3

engine =  pyttsx3.init()

class Talker:
    
    def talk(self, text):
        engine.say(text)
        engine.runAndWait()


