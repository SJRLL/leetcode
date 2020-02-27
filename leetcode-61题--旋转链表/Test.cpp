给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。

示例 1 :

输入 : 1->2->3->4->5->NULL, k = 2
输出 : 4->5->1->2->3->NULL
 解释 :
向右旋转 1 步 : 5->1->2->3->4->NULL
向右旋转 2 步 : 4->5->1->2->3->NULL


思路：把链表的尾部和头部连一起，方便查找
然后根据位置的关系找出来新的尾部，新的尾部的下一个就是新的头部

class Solution {
public:
	ListNode* rotateRight(ListNode* head, int k) {
		if (!head) return head;
		auto h = head, tail = head;
		int len = 0;
		while (tail->next)
		{
			tail = tail->next;
			len++;
		}
		len++;


		k = k % len;
		if (k == 0) return head;

		tail->next = h;
		int move = len - k - 1;//向前移动idx找tail
		tail = h;
		while (move--)
			tail = tail->next;
		h = tail->next;
		tail->next = nullptr;
		return h;

	}
};

