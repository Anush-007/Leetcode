import java.util.HashMap;

public class Solution {
	public int [] twoSum(int [] nums, int target) {
		int [] ret = new int [2];
		HashMap<Integer, Integer> hash = new HashMap<>();
		for (int i = 0; i < nums.length; i++) {
			if (hash.get(target - nums[i]) != null) {
				ret[0] = i;
				ret[1] = hash.get(target - nums[i]);
				return ret;
			} 
			hash.put(nums[i], i);
		}
		return ret;
	}
}