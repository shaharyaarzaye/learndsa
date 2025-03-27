
arr = [ 5 ,3 , 2,5 ,7, 8]
grr = [4 ,3 ,5, 3, 5,4]
def Insertion_Sort(arr):
    for i in range(0 , len(arr)):
        for j in range ( 0 , i ):
            if arr[i] < arr[j]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp

Insertion_Sort(grr)
print(grr)