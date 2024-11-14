class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i, num_x in zip(range(len(nums)), nums):
            for j, num_y in zip(range(len(nums)), nums):
                if i != j:
                    if num_x+num_y == target:
                        result = [i, j]
                        return result
        return "No result"


if __name__ == "__main__":
    sumTest = Solution()
    testList = [1, 2, 3, 4, 5]
    testList = [3, 3]
    target = 6 
    result = sumTest.twoSum(testList, target)

    # show the result
    print(result)
        
