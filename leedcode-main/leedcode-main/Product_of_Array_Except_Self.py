def Product_of_Array_Except(nums):
    left_product = []
    for i in range(0, len(nums)):
        if i == 0:
            left_product.append(nums[i])
        else:
            left_product.append(left_product[i-1]*nums[i])

    right_product = []
    j = 0
    for i in range(len(nums)-1, -1, -1):
        if i == len(nums)-1:
            right_product.append(nums[i])
        else:
            right_product.append(right_product[j-1]*nums[i])
        j += 1
        right_product = right_product[:: -1]

    result = []
    for i in range(0, len(nums)):
        if i == 0:
            result.append(1*right_product[i+1])
        elif i == len(nums)-1:
            result.append(left_product[i-1]*1)

        else:
            result.append(left_product[i-1]*right_product[i+1])

    return result


nums = [1, 2, 3, 4]
print(Product_of_Array_Except(nums))
