
# dividir nuestro dataset
# necesitamos un punto pivotal
# Recursivamente ordenar cada mitad del array
import random
from sorting_algoritms import bubble_sort


def partition(l, low, high):
    i = (low - 1)
    pivot = l[high]

    for j in range(low, high):
        if l[j] <= pivot:
            i += 1
            l[i], l[j] = l[j], l[i]

    l[i+1], l[high] = l[high], l[i+1]
    return i + 1


def quick_sort(l, low, high):
    if low < high:
        pivot = partition(l, low, high)
        # first half
        quick_sort(l, low, pivot - 1)
        # second half
        quick_sort(l, pivot + 1, high)


if __name__ == "__main__":
    l = [random.randint(-10000000, 1000000) for _ in range(10000)]
    # print(l)
    print("Init")
    quick_sort(l, 0, len(l) - 1)
    print("stop")
    l = [random.randint(-10000000, 1000000) for _ in range(10000)]
    print("Init")
    bubble_sort(l)
    print("Stop")
