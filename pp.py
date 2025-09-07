def quick(arr):
    if len(arr)<2:
        return arr

    pivot=arr[0]

    less=[i for i in arr[1:] if i<=pivot]

    great=[i for i in arr[1:] if i>=pivot]

    return quick(less) + [pivot]+quick(great)

print(quick([10,5,2,3]))
