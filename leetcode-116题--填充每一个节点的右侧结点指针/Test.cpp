给定一个完美二叉树，其所有叶子节点都在同一层，每个父节点都有两个子节点。二叉树定义如下：

struct Node {
	int val;
	Node *left;
	Node *right;
	Node *next;
}
填充它的每个 next 指针，让这个指针指向其下一个右侧节点。如果找不到下一个右侧节点，则将 next 指针设置为 NULL。

初始状态下，所有 next 指针都被设置为 NULL。


class Solution {
public:
	int flag = 1;
	Node* connect(Node* root) {
		if (!root)return nullptr;
		if (flag){  // 将根节点next置为null
			root->next = nullptr;
			flag = 0;
		}
		if (!root->left) return root;
		root->left->next = root->right;
		if (root->next)root->right->next = root->next->left;
		else root->right->next = nullptr;
		connect(root->left);
		connect(root->right);
		return root;
	}
};
