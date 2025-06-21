"""
Factorial:
Write a function to calculate the factorial of a non-negative integer entered by the user.
"""

num = int(input("Enter a number: "))

def factorial(num):
    if num < 0:
        return "Wrong Input"
    elif num == 0:
        return 1
    else:
        fact = 1
        for i in range(1, num+1):
            fact = fact * i
        return fact

print(factorial(num))