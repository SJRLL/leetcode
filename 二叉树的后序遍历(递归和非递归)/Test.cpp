
//递归版本实现
//此解法比较简单，解释先访问 root 结点，然后用同样的方法去访问 root 结点的 left 结点然后是 root 结点的 right 结点
//，将他们放入容器vector中。注意这里使用了 == 递归的方法, 递归越深，内存开销越大 == ：
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

//非递归版本实现
//大致思路和前序遍历一模一样，就是最后把前序遍历倒过来输出就好了。
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