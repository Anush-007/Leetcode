#include <iostream>
#include <vector>


// class Solution {
// public:
    
//     double median(std :: vector<int> & nums) {
//         int size = nums.size();
//         int index = size / 2;
//         if (size % 2) {
//             return nums[index]; 
//         }
//         return (nums[index - 1] + nums[index]) / 2.0;
//     }
//     double findMedianSortedArrays(std :: vector<int>& nums1, std :: vector<int>& nums2) {
//         int n = nums1.size();
//         int m = nums2.size();
        
//         if (n != 0 && m != 0) {
//             int l = n + m;
//         std :: vector<int> merged;
// 		merged.reserve(l);
        
//         int i = 0, j = 0;
        
//         while (i < n && j < m) {
//             if (nums1[i] < nums2[j]) {
//                 merged.push_back(nums1[i]);
//                 i++;
//                 continue;
//             }
            
//             merged.push_back(nums2[j]);
//             j++;
//         }
        
//         while (i < n) {
//             merged.push_back(nums1[i]);
//             i++;
//         }
        
//         while (j < m) {
//             merged.push_back(nums2[j]);
//             j++;
//         }
        
//             return median(merged);
//         }
        
//         if (!n) {
//             return median(nums2);
//         }
        
//         return median(nums1);
        
//     }
// };

// The above is the bruteforce solution

class Solution {
	public:
	float findMedianSortedArrays(std :: vector<int> & nums1, std :: vector<int> & nums2) {
		// std :: cout << "This is finding Median" << std :: endl;

		int n = nums1.size();
		int m = nums2.size();

		int left = n / 2 + m / 2;
		
		return 0;
	}
};

int main() {
	std :: vector<int> a({1, 2});
	std :: vector<int> b({3, 4});

	std :: cout << Solution().findMedianSortedArrays(a, b) << std :: endl;
	return 0;
}