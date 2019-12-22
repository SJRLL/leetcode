/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

//�ݹ�汾1
//�˽ⷨ�Ƚϼ򵥣������ȷ��� root ��㣬Ȼ����ͬ���ķ���ȥ���� root ���� left ���
//��Ȼ���� root ���� right ��㣬�����Ƿ�������vector�С�ע������ʹ���˵ݹ�ķ���,�ݹ�Խ��ڴ濪��Խ��

class Solution {
public:
	vector<int> ret;
	vector<int> preorderTraversal(TreeNode* root) {
		_prerder(root);
		return ret;
	}

	void _prerder(TreeNode* root)
	{
		if (root)
		{
			ret.push_back(root->val);//��������ڵ�
			_prerder(root->left);//�ݹ�������
			_prerder(root->right);//�ݹ�������
		}
	}
};

//�ݹ�汾�Ľ���
//ͬ��Ҳ���ȷ��� root ��㣬Ȼ����ͬ���ķ���ȥ���� root ���� left ���
//��Ȼ���� root ���� right ��㣬�����Ƿ�������vector�С���������ʹ����һ���������� PushNode(), �ⷽ�����Լ��ٳ���ʹ�õ��ڴ�
class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> result;

		if (root) {
			PushNode(root, result);
		}

		return result;
	}

private:
	void PushNode(TreeNode* root, vector<int> & v) {
		if (root) {
			v.push_back(root->val);
			PushNode(root->left, v);
			PushNode(root->right, v);
		}
	}
};



//�ǵݹ�ʵ��
//���ֽⷨ��Ҫʹ��һ�� stack ���и��������Ƚ� root ��� push �� stack��Ȼ�����һ�� while ѭ����ȥȡ stack �Ķ�����
//�����䱣�档Ȼ��ѹջ root ��right ��㣬Ȼ��ѹջ root �� left ��㡣ע�⣺������ǰ�������������ѹջ right ��㣬
//����Ϊջ LIFO ���ص㡣ֱ�� stack Ϊ�ա�
class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> result;

		if (root == NULL) {
			return result;
		}

		stack<TreeNode*> stackTree;
		TreeNode* tmp;

		stackTree.push(root);

		while (!stackTree.empty()) {
			tmp = stackTree.top();
			result.push_back(tmp->val);
			stackTree.pop();

			if (tmp->right != NULL)
				stackTree.push(tmp->right);

			if (tmp->left != NULL)
				stackTree.push(tmp->left);
		}

		return result;
	}
};

