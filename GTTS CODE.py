from gtts import gTTS 
import os 

mytext = input("ENTER THE TEXT \n")
language = 'en'
myobj = gTTS(text=mytext, lang=language, slow=False) 
myobj.save(input("ENTER THE FILE NAME TO BE SAVED IN .mp3 \n")) 
