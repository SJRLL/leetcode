//输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//输出：7 -> 0 -> 8
//原因：342 + 465 = 807



/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* Head = new ListNode(0);
		ListNode *p = l1, *q = l2;
		ListNode* cur = Head;
		int array = 0;
		while (q != NULL || p != NULL)
		{
			int x = (p != NULL) ? p->val : 0;
			int y = (q != NULL) ? q->val : 0;
			int sum = array + x + y;
			array = sum / 10;
			cur->next = new ListNode(sum % 10);
			cur = cur->next;
			if (p != NULL)
			{
				p = p->next;
			}
			if (q != NULL)
			{
				q = q->next;
			}
		}
		if (array>0)
		{
			cur->next = new ListNode(array);
		}
		return Head->next;
	}
};