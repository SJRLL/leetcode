/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> res;
		levelOrderBottom(root, 0, res);
		reverse(res.begin(), res.end());
		return res;
	}

	void levelOrderBottom(TreeNode* node, int level, vector<vector<int>> & res)
	{
		if (node == NULL)
			return;
		if (res.size() == level)
		{
			res.push_back({});
		}
		res[level].push_back(node->val);
		if (node->left)
		{
			levelOrderBottom(node->left, level + 1, res);
		}
		if (node->right)
		{
			levelOrderBottom(node->right, level + 1, res);
		}
	}
};