"""
Prime Number Check:
Write a function to check if a given number is a prime number.

def main():
    num = int(input("Enter a Number: "))
    if isPrime(num):
        print("Prime Number")
    else:
        print("Not Prime Number")
def isPrime(n):
    count = 0
    for i in range(1, n+1):
        if n % i == 0:
            count += 1
    if count == 2:
        return True
    else:
        return False
main()
"""

def main():
    try:
        num = int(input("Enter a Number: "))
        if num <= 0:
            raise ValueError("Please enter a positive integer greater than 0.")
        if is_prime(num):
            print("Prime Number")
        else:
            print("Not Prime Number")
    except ValueError as ve:
        print(ve)

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

main()
