def maxSubArray(nums):
    maxx = nums[0]
    sum = 1
    for i in range(len(nums)):
        sum = sum*nums[i]
        print(sum)
        if (sum >= maxx):
            maxx = sum
            print(maxx)
        if (sum < 0):
            sum = 1

    return maxx


nums = [-3, -1, -1]

print(maxSubArray(nums))
