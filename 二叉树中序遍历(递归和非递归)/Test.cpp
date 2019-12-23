//�ݹ�汾
//�˽ⷨ��ǰ�����һ�����ȵݹ���� root ����left�ڵ㣬Ȼ��ȥ���� root ��㣬
//����� �ݹ�root ���� right ��㣬�����Ƿ�������vector�С�ע������ʹ���� == �ݹ�ķ���, �ݹ�Խ��ڴ濪��Խ�� == ��
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

//�ǵݹ�汾

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
			while (tmp)//һֱ�ҵ�����ߵĽڵ㣬��������·�ڵ㣬ȫ������ջ��
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