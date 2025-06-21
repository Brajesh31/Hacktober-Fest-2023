"""
FizzBuzz:
Write a program that prints the numbers from 1 to 100. 
But for multiples of three, print "Fizz" instead of the number, 
and for the multiples of five, print "Buzz." 
For numbers that are multiples of both three and five, print "FizzBuzz."
"""

num = 0 
for i in range(100):
    num = i + 1

    # For numbers that are multiples of both three and five, print "FizzBuzz.
    if(num%3 == 0) and (num%5 == 0):
        print("FizzBuzz")

    # For multiples of three, print "Fizz" instead of the number
    elif(num%3==0):
        print("Fizz")

    # For the multiples of five, print "Buzz.
    elif(num%5==0):
        print("Buzz")

    # Number
    else:
        print(num)