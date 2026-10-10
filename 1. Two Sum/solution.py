class Solution(object):
    def twoSum(self, nums, target):
        hashdict = {}

        for i in range(len(nums)):
            needed = target - nums[i]
            if needed in hashdict:
                return [hashdict[needed], i]
            else:
                hashdict[nums[i]] = i