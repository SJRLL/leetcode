//����һ��
//���� �����Ƚ��ȳ��Ĺ����ڱ�����������ʱ�򣬽�ÿһ������нڵ��������У�
//Ȼ����Ӽ��ɣ�����ͬʱ������һ��Ľڵ�Ҳpush���˶����У�ֱ�����������нڵ㡣
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

//��������
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