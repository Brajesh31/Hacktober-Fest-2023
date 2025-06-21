#Code:
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        # Last i elements are already in place, so no need to compare them
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j] # Swap the elements

my_list = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(my_list)
print("Sorted array:", my_list)

"""
Time Complexity:  O(n2).
Auxiliary Space: O(1).
"""

"""
Explanation:

Original list: [5, 2, 9, 1, 5, 6]

Step 1:
Compare the first two elements (5 and 2).
Since 5 is greater than 2, we swap them: [2, 5, 9, 1, 5, 6]

Step 2:
Compare the second and third elements (5 and 9).
Since 5 is not greater than 9, no swap is needed: [2, 5, 9, 1, 5, 6]

Step 3:
Compare the third and fourth elements (9 and 1).
Since 9 is greater than 1, we swap them: [2, 5, 1, 9, 5, 6]

Step 4:
Compare the fourth and fifth elements (9 and 5).
Since 9 is greater than 5, we swap them: [2, 5, 1, 5, 9, 6]

Step 5:
Compare the fifth and sixth elements (9 and 6).
Since 9 is greater than 6, we swap them: [2, 5, 1, 5, 6, 9]

Now, after the first pass through the list, the largest element (9) has "bubbled up" 
to the end of the list.

Since one pass is not enough to guarantee a completely sorted list, 
we repeat the process for the remaining unsorted elements.

Step 6:
Compare the first and second elements (2 and 5).
Since 2 is not greater than 5, no swap is needed: [2, 5, 1, 5, 6, 9]
The second pass is complete. Now the second largest element (5) is in its correct position.

After each pass, the largest (or smallest, depending on the sorting order) 
unsorted element "bubbles up" to its correct position at the end (or beginning) of the list. 
We continue this process until the entire list is sorted.
"""