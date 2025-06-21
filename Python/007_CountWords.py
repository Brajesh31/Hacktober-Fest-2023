"""
Count Words in a String:
Write a function that takes a sentence as input and returns the count of each word in the sentence.
"""

sentence = input("Enter a sentence: ")


def count_words(sentence):
    word_counts = {}
    words = sentence.split()

    for word in words:
        word = word.lower()
        # Increment the word count by 1 or set it to 1 if it's the first occurrence
        word_counts[word] = word_counts.get(word, 0) + 1
    return word_counts


result = count_words(sentence)
print(result)
