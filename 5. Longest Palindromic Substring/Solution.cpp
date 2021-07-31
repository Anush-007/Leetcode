#include <iostream>
#include <string>
// #include <vector>

// class Solution {
// 	public:
// 	std :: string longestPalindrome(const std :: string & s) {
// 		// std :: vector <std :: vector <bool>> memoize(1000, std :: vector <bool> (1000, 0));
// 		int memoize[1000][1000]; // This was faster on leetcode
// 		int size = s.size();
// 		int k, ret = 0,index;
// 		for (int i = 0; i < size; i++) {
// 			for (int j = 0; j + i < size; j++) {
// 				k = i + j;
// 				if (i == 0) memoize[j][j] = true;
// 				else if (i == 1) memoize[j][j + 1] = s[j] == s[j + 1];
// 				else {
// 					memoize[j][k] = (s[j] == s[k] && memoize[j + 1][k - 1]);
// 				}
// 				if (memoize[j][k] && ret < i + 1) {
// 					ret = i + 1;
// 					index = j;
// 				}
// 			}
// 		}

// 		return s.substr(index, ret);
// 	}
// };


// class Solution {
// 	public:
// 	std :: string longestPalindrome(const std :: string & s) {
// 		// std :: vector <std :: vector <bool>> memoize(1000, std :: vector <bool> (1000, 0));
// 		int memoize[1000][1000]; // This was faster on leetcode
// 		int size = s.size();
// 		int k, ret = 0,index;
// 		for (int i = 0; i < size; i++) {
// 			for (int j = 0; j + i < size; j++) {
// 				k = i + j;
// 				if (i == 0) {
// 					memoize[j][j] = true;
// 					goto Check;
// 				}
// 				if (i == 1) {
// 					memoize[j][j + 1] = s[j] == s[j + 1];
// 					goto Check;
// 				}
// 				memoize[j][k] = (s[j] == s[k] && memoize[j + 1][k - 1]);

// 				Check:{
// 					if (memoize[j][k] && ret < i + 1) {
// 					ret = i + 1;
// 					index = j;
// 					}
// 				}
// 			}
// 		}

// 		return s.substr(index, ret);
// 	}
// };


// O(N²) Time Complexity
// class Solution {
// public:

// 	// int expandAroundCenter(std :: string & str, int i) {
// 	// 	int ret = 0;
// 	// 	while(i - ret > -1 && i + ret < str.size() && str[i - ret] == str[i + ret]) {
// 	// 		ret++;
// 	// 	}
// 	// 	return ret;
// 	// }

// 	std :: string longestPalindrome(std :: string s) {
// 		// Making the string with dummy characters here '#' is used
// 		std :: string str(2 * s.size() + 1, '#');
// 		for (int i = 0; i < s.size(); i++) {
// 			str[2 * i + 1] = s[i];
// 		}

// 		// int pall[str.size()];
// 		// int temp;
// 		int center, radius = 0, ret,size = str.size();

// 		for (int i = 0; i < size; i++) {
// 			// pall[i] = expandAroundCenter(str, i);

// 			// temp = expandAroundCenter(str, i) - 1;

// 			ret = 0;
// 			while(i - ret > -1 && i + ret < size && str[i - ret] == str[i + ret]) {
// 				ret++;
// 			}

// 			if (radius < ret - 1) {
// 				radius = ret - 1;
// 				center = i;
// 			}
// 		}

// 		// int index,len;

// 		// if (str[center] == '#') {
// 		// 	// index = (center - radius) / 2;
// 		// 	// len = radius;
// 		// 	return s.substr((center - radius) / 2, radius);
// 		// }


// 		return s.substr((center - radius) / 2, radius);
// 	}
// };


// Neater version of the above program
// class Solution {
// public:
// 	std :: string longestPalindrome(std :: string s) {
// 		// Making the string with dummy characters here '#' is used
// 		std :: string str(2 * s.size() + 1, '#');
// 		for (int i = 0; i < s.size(); i++) {
// 			str[2 * i + 1] = s[i];
// 		}

// 		int center, radius = 0, ret, size = str.size();

// 		for (int i = 0; i < size; i++) {
// 			ret = 0;
// 			while(i - ret > -1 && i + ret < size && str[i - ret] == str[i + ret]) {
// 				ret++;
// 			}

// 			if (radius < ret - 1) {
// 				radius = ret - 1;
// 				center = i;
// 			}
// 		}

// 		std :: cout << radius << std :: endl;
		

// 		return s.substr((center - radius) / 2, radius);
// 	}
// };



// class Solution {
// public:
// 	std :: string longestPalindrome(std :: string s) {
		
// 		int size = 0, start;
// 		for (int i = 0; i < s.size(); i++) {
// 			int len1 = 1, len2 = 0;

// 			int ret = 1;
// 			while(i - ret > -1 && i + ret < s.size() && s[i - ret] == s[i + ret]) {
// 				len1 += 2;
// 				ret++;
// 			}

// 			ret = 0;
// 			while(i - ret > -1 && i + ret < s.size() && s[i - ret] == s[i + ret + 1]) {
// 				len2 += 2;
// 				ret++;
// 			}

// 			int len = std :: max(len1, len2);

// 			if (len > size) {
// 				size = len;
// 				start = i - (len - 1) / 2;
// 			}
// 		}
// 		return s.substr(start, size);
// 	}
// };


// By manacher's algorithm

class Solution {
	public:
		// int expandAroundCenter(int center, std :: string & str, int arr[]);

		std :: string longestPalindrome(std :: string s) {
			// Making the new string with additional characters
			std :: string str(2 * s.size() + 1, '#');
			for (int i = 0; i < s.size(); i++) {
				str[2 * i + 1] = s[i];
			}

			int pal[str.size()];
			pal[0] = 0;
			int left = 0, right = 0, center = 0;
			for (int i = 0; i < str.size(); i++) {
				if (i < left && i > center) {
					int mirror_i = 2 * center - i;
				}
				int ret = pal[i];
				while (i - ret > -1 && i + ret < str.size() && str[i - ret] == str[i + ret]) {
					ret++;
				}
				pal[i] = --ret;
				center = i;
				left = center - ret;
				right = center + right;
			}
		}
};


int main() {
	std :: cout << Solution().longestPalindrome("babad") << std :: endl;
	return 0;
}