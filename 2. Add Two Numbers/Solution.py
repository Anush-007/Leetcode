# Definition for singly-linked list.
class ListNode(object):
	def __init__(self, val = 0, next = None):
		self.val = val
		self.next = next

class Solution(object):
	def addTwoNumbers(self, l1, l2):
		final = l1
		carry = 0
		while l1.next and l2.next:
			l1.val += l2.val + carry
			carry = l1.val / 10
			l1.val %= 10
			l1 = l1.next
			l2 = l2.next
		
		if not (l1.next or l2.next):
			if carry:
				l1.next = ListNode(1)
			return final
		
		if l2.next:
			l1.next = l2.next
		
		l1 = l1.next




