class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = 1
        for i in range(1,len(nums)):
            if(nums[i]!=nums[i-1]):
                nums[ans] = nums[i]
                ans+=1
        return ans
