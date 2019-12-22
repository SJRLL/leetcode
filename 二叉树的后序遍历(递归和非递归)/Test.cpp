
//�ݹ�汾ʵ��
//�˽ⷨ�Ƚϼ򵥣������ȷ��� root ��㣬Ȼ����ͬ���ķ���ȥ���� root ���� left ���Ȼ���� root ���� right ���
//�������Ƿ�������vector�С�ע������ʹ���� == �ݹ�ķ���, �ݹ�Խ��ڴ濪��Խ�� == ��
class Solution {
public:vector<int> v;
	   vector<int> postorderTraversal(TreeNode* root) {
		   _postorderTraversal(root);
		   return v;
	   }
	   
	   void _postorderTraversal(TreeNode* root)
	   {
		   if (root)
		   {
			   _postorderTraversal(root->left);
			   _postorderTraversal(root->right);
			   v.push_back(root->val);
		   }
	   }
};

//�ǵݹ�汾ʵ��
//����˼·��ǰ�����һģһ������������ǰ���������������ͺ��ˡ�
class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> v, res;
		if (root == NULL)
		{
			return v;
		}

		stack<TreeNode*> st;
		TreeNode* tmp;

		st.push(root);

		while (!st.empty())
		{
			tmp = st.top();
			v.push_back(tmp->val);
			st.pop();
			if (tmp->left != NULL)
			{
				st.push(tmp->left);
			}
			if (tmp->right != NULL)
			{
				st.push(tmp->right);
			}
		}
		for (int i = v.size() - 1; i >= 0; --i)
		{
			res.push_back(v[i]);
		}
		return res;
	}
};