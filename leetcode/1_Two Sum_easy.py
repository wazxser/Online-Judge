nums = [2, 7, 1, 6]
target = 9

for i in range(len(nums)):
    if target-nums[i] in nums[i+1:]:
        print([i, nums.index(target-nums[i], i+1)])

for i in xrange(len(nums)):
    for j in xrange(i+1, len(nums)):
        if nums[i]+nums[j] == target:
            print([i, j])
