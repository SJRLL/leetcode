//递归版本
//此解法跟前序遍历一样，先递归访问 root 结点的left节点，然后去访问 root 结点，
//最后是 递归root 结点的 right 结点，将他们放入容器vector中。注意这里使用了 == 递归的方法, 递归越深，内存开销越大 == ：
class Solution {
public:
	vector<int> v;
	vector<int> inorderTraversal(TreeNode* root) {
		_inorderTraversal(root);
		return v;
	}

	void _inorderTraversal(TreeNode* root)
	{
		if (root)
		{
			_inorderTraversal(root->left);
			v.push_back(root->val);
			_inorderTraversal(root->right);
		}
	}
};

//非递归版本

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> v;
		if (root == NULL)
		{
			return v;
		}
		stack<TreeNode*> st;
		TreeNode* tmp = root;

		while (tmp || st.size())
		{
			while (tmp)//一直找到最左边的节点，将所有左路节点，全部放入栈中
			{
				st.push(tmp);
				tmp = tmp->left;
			}
			tmp = st.top();
			st.pop();
			v.push_back(tmp->val);
			tmp = tmp->right;
		}
		return v;
	}
};