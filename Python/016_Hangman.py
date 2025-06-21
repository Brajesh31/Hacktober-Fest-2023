import random
import os
someWords = """apple banana mango strawberry
orange grape pineapple apricot lemon coconut watermelon
cherry papaya berry peach lichi muskmelon"""
someWords=someWords.split()
word=random.choice(someWords)
os.system('cls')
print("Let's Play Hangman!")
blanks="_"*len(word)
print(blanks)
turns=len(word)
count=0
while(turns>-2 and count!=len(word)):
    guess=input("Take a Guess: ")
    if guess.isalpha() == False:
        print("Enter an Alphabet!")
        turns+=1
    elif len(guess)>1:
        print("Enter only Single Alphabet!")
        turns+=1
    else:
        flag=0
        for i in range(len(word)):
            if word[i]==guess:
                    blanks=blanks[:i]+word[i]+blanks[i+1:]
                    flag=1
                    count+=1
        os.system('cls')
        if flag==0:
            print("Wrong Guess!")
        print(blanks)
        turns-=1
if count==len(word):
    print("Yay! You Won!")
elif turns<=-2:
    os.system('cls')
    print("You ran out of Chances! Try Again!")
    print(f'Correct Answer was "{word}"')
