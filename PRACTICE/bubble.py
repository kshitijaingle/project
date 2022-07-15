'''
arr=[10,15,4,23,0]
print("Unsorted array",arr)
for i in range(len(arr)-1):
    for j in range(len(arr)-1-i):
        if(arr[j]>arr[j+1]):
            arr[j],arr[j+1]=arr[j+1],arr[j]
print("Sorted array",arr)
'''

def bubblesort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-1-i):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
arr=[5,3,2,7,9]
print("Unsorted array",arr)
bubblesort(arr)
print("sorted array",arr)
