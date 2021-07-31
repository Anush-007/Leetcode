#include <iostream>
#include <string>

// class Solution {
// 	public:
// 	std :: string convert (std :: string str, int nums) {
// 		int size = str.size();
// 		char ret[size];
// 		// std :: string ret(size);
// 		int inc = 2 * (nums - 1);
// 		int count = 0;
// 		for (int j = 0; j < size; j += inc) {
// 			ret[count++] = str[j];
// 		}
		
// 		for (int i = 1; i < nums - 1; i++) {
// 			int j = i;
// 			for (int k = inc - i; k < size; j += inc, k += inc) {
// 				ret [count++] = str[j];
// 				ret [count++] = str[k];
// 			}

// 			if (j < size) {
// 				ret[count++] = str[j];
// 			}
// 		}

// 		for (int j = nums - 1; j < size; j += inc) {
// 			ret[count++] = str[j];
// 		}
// 		return ret;
// 	} 
// };


class Solution {
	public:
	std :: string convert (std :: string str, int nums) {
		if (nums == 1) {
			return str;
		}
		int size = str.size();
		char ret[1000];
        // string ret(size);
		int inc = 2 * (nums - 1);
		int count = 0;


		for (int j = 0; j < size; j += inc) {
			ret[count++] = str[j];
		}
		
		for (int i = 1; i < nums - 1; i++) {
			int j = i;
			for (int k = inc - i; k < size; j += inc, k += inc) {
				ret [count++] = str[j];
				ret [count++] = str[k];
			}

			if (j < size) {
				ret[count++] = str[j];
			}
		}


        for (int j = nums - 1; j < size; j += inc) {
			ret[count++] = str[j];
		}

        
        ret[count] = '\0';
		return ret;
	} 
};

int main() {
	std :: cout << Solution().convert("A", 1) << std :: endl;
	return 0;
}



