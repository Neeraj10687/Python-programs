def smalle(arr):
    smal=arr[0]
    sma_ind=0
    for i in range(1,len(arr)):
        if arr[i]<smal:
            smal=arr[i]
            sma_ind=i

    return sma_ind

def selc(arr):
    newarr=[]
    copiedarr =list(arr)
    for i in range(len(copiedarr)):
        smallest=smalle(copiedarr)
        newarr.append(copiedarr.pop(smallest))
    return newarr

print(selc([5,3,6,2]))

