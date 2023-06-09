import speech_recognition as sr
import pygame

r = sr.Recognizer()
pygame.init()
pygame.mixer.init()


class Listener:
    def listen(self):   
            try:    
                with sr.Microphone() as source:
                        sonido_fondo = pygame.mixer.Sound("placeholder.wav")
                        pygame.mixer.Sound.play(sonido_fondo)
                        audio = r.listen(source)
                        audio_text = r.recognize_google(audio, language='es-ES')
                        print("Texto: {}".format(audio_text))
                        return audio_text.upper()
                                  
            except:
                print("Lo siento, no te entiendo")



