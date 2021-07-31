/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <iostream>


struct ListNode {
	int val;
	ListNode * next;
	ListNode () : val(0), next(nullptr) {}
	ListNode (int x) : val(x), next(nullptr) {}
	ListNode (int x, ListNode * next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode * fin = l1;
        int carry = 0;
		// while (l1 != nullptr && l2 != nullptr) {
		// 	l1 -> val += l2 -> val + carry;
		// 	carry = l1 -> val / 10;
		// 	l1 -> val %= 10;
		// 	l1 = l1 -> next;
		// 	l2 = l2 -> next;
		// }

		while (l1 -> next != nullptr && l2 -> next != nullptr) {
			l1 -> val += l2 -> val + carry;
			carry = l1 -> val / 10;
			l1 -> val %= 10;
			l1 = l1 -> next;
			l2 = l2 -> next;
		}

		l1 -> val += l2 -> val + carry;
		carry = l1 -> val / 10;
		l1 -> val %= 10;

		if (l1 -> next == nullptr && l2 -> next == nullptr) {
			if (carry) {
				l1 -> next = new ListNode(1);
			}
			return fin;
		}

		if (l1 -> next == nullptr) {
			l1 -> next = l2 -> next;
		}

		l1 = l1 -> next;

		while (l1 -> next != nullptr) {
			l1 -> val += carry;
			carry = l1 -> val / 10;
			l1 -> val %= 10;
			l1 = l1 -> next;
		}

		l1 -> val += carry;
		carry = l1 -> val / 10;
		l1 -> val %= 10;

		if (carry) {
			l1 -> next = new ListNode(1);
		}
		return fin;
    }
};


int main() {
	ListNode * l1 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9,new ListNode(9, new ListNode(9)))))));
	ListNode * l2 = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));

	// ListNode * l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
	// ListNode * l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

	// auto l1 = new ListNode (5);
	// auto l2 = new ListNode(5);


	auto res = Solution().addTwoNumbers(l1, l2);

	while (res) {
		std :: cout << res -> val << " ";
		res = res -> next;
	}



	return 0;
}