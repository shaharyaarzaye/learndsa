# def quickSort(arr , s , e):
#     if s-e+1 <= 1:
#         return 
    
#     left = arr[s]
#     piviot = e

#     for i in (s , e):
#         if arr[i] < piviot:
#             temp = arr[left]
#             arr[left] = arr[i]
#             arr[i] = temp
#             left = left + 1
    
    
#     arr[e] = arr[left]
#     arr[left] = pivot

#     # Quick sort left side
#     quickSort(arr, s, left - 1)

#     # Quick sort right side
#     quickSort(arr, left + 1, e)

#     return arr

# Implementation of QuickSort
def quickSort(arr, s, e):
    if e - s + 1 <= 1:
        return

    pivot = arr[e]
    left = s # pointer for left side

    # Partition: elements smaller than pivot on left side
    for i in range(s, e):
        if arr[i] < pivot:
            tmp = arr[left]
            arr[left] = arr[i]
            arr[i] = tmp
            left += 1

    # Move pivot in-between left & right sides
    arr[e] = arr[left]
    arr[left] = pivot
    
    # Quick sort left side
    quickSort(arr, s, left - 1)

    # Quick sort right side
    quickSort(arr, left + 1, e)

    return arr
    


arr = [3 ,5 ,3, 2, 5,7, 4]

print(arr)

quickSort(arr , 0 , 6)
print(arr)