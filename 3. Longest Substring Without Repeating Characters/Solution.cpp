#include <iostream>
#include <unordered_set>
#include <vector>

// int max(int a, int b) {
// 	if (a > b) {
// 		return a;
// 	}
// 	return b;
// }

// class Solution {
// public:
// 	int lengthOfLongestSubstring(std :: string s) {
// 		int left = 0, right = 0, len = 0;
// 		char ch, l;
// 		std :: unordered_set<char> unique;
// 		while (right < s.length()) {
// 			ch = s[right];
// 			if (unique.count(ch)) {
// 				len = std :: max(right - left, len);
// 				while (true) {
// 					l = s[left];
// 					unique.erase(l);
// 					left ++;
// 					if (l == ch) {
// 						break;
// 					}
// 				}
// 			}
// 			unique.insert(ch);
// 			right ++;
// 		}
// 		len = std :: max(right - left, len);

// 		return len;
// 	}
// };


// The above is too slow , Don't know why



class Solution {
public:
	int lengthOfLongestSubstring(std :: string s) {
		int left = 0, right = 0, len = 0;
		char ch, l;
		std :: vector <char> cset(128);
		while (right < s.length()) {
			ch = s[right];
			cset[ch] ++;
			while (cset[ch] > 1) {
				cset[s[left]] --;
				left++;
			}

			len = std :: max(len, right - left + 1);
			right ++ ;
		}
		return len;
	}
};


int main() {

	std :: cout << Solution().lengthOfLongestSubstring("pwwkew") << std :: endl;

	return 0;
}