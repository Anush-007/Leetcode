#include <vector>
#include <unordered_map>
#include <bitset>
#include <iostream>

// range of number in nums -10^9 to 10^9

// class Solution {
// public:
//     std :: vector<int> twoSum(std :: vector<int>& nums, int target) {
//         std :: unordered_map<int , int> hash;
// 		hash[nums[0]] = 0;
// 		for (int i = 1; i < nums.size(); i++) {
// 			auto res = hash.find(target - nums[i]);
// 			if (res != hash.end()) {
// 				return std :: vector<int> ({i, res -> second});
// 			} else {
// 				hash[nums[i]] = i;
// 			}
// 		}
// 		return std :: vector<int> (0);
//     }
// };


class Solution {
public:
    std :: vector<int> twoSum(std :: vector<int>& nums, int target) {
        std :: unordered_map<int , int> hash;
		hash[nums[0]] = 0;
		for (int i = 1; i < nums.size(); i++) {
			int temp = target - nums[i];
			if (hash.count(temp)) {
				return std :: vector<int> ({i, hash[temp]});
			}
			hash.insert({nums[i], i});
		}
		return std :: vector<int> (0);
    }
};


// 4294967295
// 2000000001

// class Solution {
// 	public :
// 		std :: vector<int> twoSum(std :: vector<int> & nums, int target) {
// 			std :: bitset<2000000001> * bits;
// 			bits = (std :: bitset<2000000001> *) malloc(sizeof(std :: bitset<2000000001>));

// 			bits -> reset();

// 			for (int i = 0; i < )


// 		}
// };


int main() {

	Solution sl;

	std :: vector <int> n = {2, 7, 11, 15};

	auto res = sl.twoSum(n, 9);

	for (int i = 0; i < res.size(); i++) {
		std :: cout << res[i] << std :: endl;
	}

	return 0;
}