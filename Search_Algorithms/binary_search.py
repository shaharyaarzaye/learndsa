arr = [1, 3, 3, 4, 5, 6, 7, 8]

# # Python implementation of Binary Search
# def binarySearch(arr, target):
#     L, R = 0, len(arr) - 1

#     while L <= R:
#         mid = (L + R) // 2

#         if target > arr[mid]:
#             L = mid + 1
#         elif target < arr[mid]:
#             R = mid - 1
#         else:
#             return mid
#     return -1


def binarySearch(arr , target):
    Left , Right = 0 , len(arr) -1

    while Left <= Right:
        mid = (Left + Right) // 2

        if target > arr[mid]:
            Left = mid + 1
        elif target < arr[mid]:
            Right = mid - 1
        else:
            return mid
    return -1

print(binarySearch(arr , 11)
)