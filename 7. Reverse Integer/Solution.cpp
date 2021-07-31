#include <iostream>
#include <cmath>

// class Solution {
// 	public:
// 		int reverse(int x) {
// 			int ret = 0;

// 			if (x == -2147483648) {
// 				return 0;
// 			}

// 			bool minus = x < 0;

// 			if (minus) {
// 				x = -x;
// 			}

// 			while(x / 10 > 0) {
// 				ret *= 10;
// 				ret += x % 10;
// 				x /= 10;
// 			}

// 			if (ret == 214748364) {
// 				if (x % 10 > 7) {
// 					if (minus) {
// 						if (x % 10 == 8) {
// 							ret *= 10;
// 							ret += x % 10;
// 							return -ret;
// 						}
// 					}
// 					return 0;
// 				}
// 			}

// 			if (ret <= 214748364) {
// 				ret *= 10;
// 				ret += x % 10;
// 				if (minus) {
// 					ret = -ret;
// 				}
// 				return ret;
// 			}

// 			return 0;
			
// 		}
// };

// The above is very slow


class Solution {
	public:
		int reverse(int x) {
			long int a = abs(x);
			return a;
		}
};


int main() {
	std :: cout << (int) std :: pow(2, 31) - 1 << std :: endl;
	std :: cout << Solution().reverse(-123) << std :: endl;
	std :: cout << Solution().reverse(1147483649) << std :: endl;
	std :: cout << Solution().reverse(-2147483648) << std :: endl;
	return 0;
}


