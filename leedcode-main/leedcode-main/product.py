def productarr(nums):
    left_prod = []
    for i in range(0, len(nums)):
        if i == 0:
            left_prod.append(nums[i])
        else:
            left_prod.append(left_prod[i - 1] * nums[i])

    right_prod = []
    j = 0
    for i in range(len(nums) - 1, -1, -1):

        if i == len(nums) - 1:
            right_prod.append(nums[i])
        else:
            right_prod.append(right_prod[j - 1] * nums[i])
        j += 1
        right_product = right_prod[::-1]

    result = []
    for i in range(0, len(nums)):
        if i == 0:
            result.append(1 * right_product[i + 1])
        elif i == len(nums) - 1:
            result.append(left_prod[i - 1] * 1)
        else:
            result.append(left_prod[i - 1] * right_product[i + 1])

    return result


num = [1, 2, 3, 4]
print(productarr(num))
