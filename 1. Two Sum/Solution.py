class Solution:
	def twoSum(self, nums: list[int], target: int) -> list[int]:
		hash = dict();
		for i in range(len(nums)):
			if hash.get(target - nums[i]) != None:
				return [i, hash[target - nums[i]]]
			hash[nums[i]] = i



if __name__ == '__main__':
	sl = Solution()
	nums = [2, 7, 11, 15]
	res = sl.twoSum(nums, 9)
	print(res)