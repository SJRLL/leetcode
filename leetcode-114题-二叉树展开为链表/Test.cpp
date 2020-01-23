给定一个二叉树，原地将它展开为链表。

例如，给定二叉树

1
/ \
2   5
/ \   \
3   4   6
将其展开为：

1
\
2
\
3
\
4
\
5
\
6


class Solution {
public:
	void flatten(TreeNode* root) {
		while (root != NULL) {
			if (root->left == NULL)  root = root->right;//考虑下一节点
			else{
				TreeNode* pre = root->left;
				while (pre->right != NULL) pre = pre->right;// 找左子树最右节点
				pre->right = root->right;//将原右子树接到左子树的最右节点
				root->right = root->left;//将左子树插到右子树处
				root->left = NULL;//令左子树为空
			}
		}
	}
};