"""
Palindrome Check:
Write a function that checks if a given string is a palindrome 
(reads the same backward as forward). 
Ignore spaces, punctuation, and capitalization.
"""

word = input("Enter a string to check Palindrome: ")


def palindrome(word):
    word = word.lower()
    l = len(word)

    if l < 2:
        return True
    elif word[0] == word[l - 1]:
        return palindrome(word[1 : l - 1])
    else:
        return False


output = palindrome(word)

if output:
    print("Palindrome")
else:
    print("Not Palindrome")
