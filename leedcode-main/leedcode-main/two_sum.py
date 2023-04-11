def twosum(arr , target ):
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if target-arr[i]==arr[j]:
                return [i,j]
             
    return None 


arr = [2,7,11,15]
target = 26
print(twosum(arr,target))