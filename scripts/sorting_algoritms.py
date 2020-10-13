"""
    Sorting algorithm of bubble sort
"""

import random


def bubble_sort(l):
    for i in range(len(l)):
        changes = None
        for j in range(len(l) - 1):
            if l[j] > l[j + 1]:
                l[j], l[j + 1] = l[j + 1], l[j]
                changes = 0
        if changes is None:
            break
    return l


def insertion_sort(l):
    for i in range(1, len(l)):
        key = l[i]
        # print(key)
        j = i - 1
        while j >= 0 and key < l[j]:
            l[j + 1] = l[j]
            j -= 1
        l[j + 1] = key
    return l


def selection_sort(l):
    for i in range(len(l)):
        mini = i
        for j in range(i+1, len(l)):
            if l[j] < l[mini]:
                mini = j
        l[i], l[mini] = l[mini], l[i]
    return l


def main():
    n = int(input("Give me a number for your length list: "))
    l = [random.randint(1, 100) for _ in range(n)]
    print(l)
    # l_order_bubble = bubble_sort(l)
    # l_order_insertion = insertion_sort(l)
    # print(l_order_bubble)
    # print(l_order_insertion)
    l_order_selection = selection_sort(l)
    print(l_order_selection)


if __name__ == "__main__":
    main()
