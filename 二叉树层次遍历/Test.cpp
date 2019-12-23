//方法一：
//利用 队列先进先出的规则，在遍历二叉树的时候，将每一层的所有节点放入队列中，
//然后出队即可，在这同时，将下一层的节点也push进了队列中，直至遍历完所有节点。
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> res;
		if (root == NULL)
		{
			return res;
		}

		queue<TreeNode*> q;
		TreeNode* tmp;
		q.push(root);
		while (!q.empty())
		{
			vector<int> a;
			int len = q.size();
			for (int i = 0; i<len; ++i)
			{
				tmp = q.front();
				a.push_back(tmp->val);
				q.pop();
				if (tmp->left)
				{
					q.push(tmp->left);
				}
				if (tmp->right)
				{
					q.push(tmp->right);
				}
			}
			res.push_back(a);
		}
		return res;
	}
};

//方法二：
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> vv;
		levelOrder(root, 0, vv);
		return vv;
	}

	void levelOrder(TreeNode* node, int level, vector<vector<int>>& vv)
	{
		if (node == NULL)
			return;
		if (vv.size() == level)
			vv.push_back({});
		vv[level].push_back(node->val);
		if (node->left)
		{
			levelOrder(node->left, level + 1, vv);
		}
		if (node->right)
		{
			levelOrder(node->right, level + 1, vv);
		}
	}
};