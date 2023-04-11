def maxSubArray(nums):
    maxx = nums[0]
    sum = 0
    for i in range(len(nums)):
        sum = sum + nums[i]
        
        if (sum >= maxx):
            maxx = sum
    
        if (sum < 0):
            sum = 0

    return maxx




nums = [-3,-1,-1]

print(maxSubArray(nums))
