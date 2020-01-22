﻿给定一个二叉树和一个目标和，找到所有从根节点到叶子节点路径总和等于给定目标和的路径。

说明 : 叶子节点是指没有子节点的节点。

 示例 :
给定如下二叉树，以及目标和 sum = 22，

5
/ \
4   8
/ / \
11  13  4
/ \ / \
7    2  5   1
返回:

[
	[5, 4, 11, 2],
	[5, 8, 4, 5]
]

class Solution {
	vector<int> path;
	vector<vector<int>> res;
public:
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		backtrack(root, sum);
		return res;
	}
	void backtrack(TreeNode* root, int sum) {
		if (!root) return;
		path.push_back(root->val);
		sum -= root->val;
		if (!root->left && !root->right && !sum) res.push_back(path);
		else backtrack(root->left, sum), backtrack(root->right, sum);
		path.pop_back();
		sum += root->val;
	}
};