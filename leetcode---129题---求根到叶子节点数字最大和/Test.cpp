//
//输入:
//   [4, 9, 0, 5, 1]
//	    4
//	   / \
//	  9   0
//   / \
//	5   1
//输出: 1026
//解释 :
//   从根到叶子节点路径 4->9->5 代表数字 495.
//   从根到叶子节点路径 4->9->1 代表数字 491.
//   从根到叶子节点路径 4->0 代表数字 40.
//   因此，数字总和 = 495 + 491 + 40 = 1026.


//解题思路：利用递归的方法，找到每一支路最左路节点，每下去一层，就乘以10，然后把该节点val值加上，然后又去寻找最右路节点
class Solution {
public:
	int sumNumbers(TreeNode* root) {
		int res = 0;
		DFS(root, 0, res);
		return res;
	}

	void  DFS(TreeNode* root, int p, int &res)
	{
		if (root == NULL)
		{
			return;
		}
		p = p * 10 + root->val;
		if (root->left == NULL && root->right == NULL)
		{
			res += p;
			return;
		}

		DFS(root->left, p, res);
		DFS(root->right, p, res);
	}
};