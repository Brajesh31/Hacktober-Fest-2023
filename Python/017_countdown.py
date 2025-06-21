import time
import os
import winsound
os.system('cls')
t=int(input("Enter Seconds: "))
i=0
while(i<t):
    os.system('cls')
    print("Time Left:",t-i)
    time.sleep(1)
    i+=1
os.system('cls')
while(1):
    print("Time Up!")
    winsound.PlaySound("beep.wav", winsound.SND_FILENAME)
    time.sleep(0.15)
    os.system('cls')