"""
Fibonacci Series:
Write a function to generate the Fibonacci series up to a specified number 'n'.

0 1 1 2 3 5 8 13 21 34
"""

def fibonacci(n):
    a, b = 0, 1
    series = []
    while a <= n:
        series.append(a)
        a, b = b, a + b
    return series

n = int(input("Enter Limit of Fibonacci Series: "))

fib_series = fibonacci(n)
print(fib_series)
