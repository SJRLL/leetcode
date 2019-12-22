/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

//递归版本1
//此解法比较简单，解释先访问 root 结点，然后用同样的方法去访问 root 结点的 left 结点
//，然后是 root 结点的 right 结点，将他们放入容器vector中。注意这里使用了递归的方法,递归越深，内存开销越大：

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
			ret.push_back(root->val);//访问其根节点
			_prerder(root->left);//递归左子树
			_prerder(root->right);//递归右子树
		}
	}
};

//递归版本改进版
//同样也是先访问 root 结点，然后用同样的方法去访问 root 结点的 left 结点
//，然后是 root 结点的 right 结点，将他们放入容器vector中。在这里我使用了一个辅助函数 PushNode(), 测方法可以减少程序使用的内存
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



//非递归实现
//此种解法需要使用一个 stack 进行辅助，首先将 root 结点 push 到 stack，然后就在一个 while 循环里去取 stack 的顶部，
//并将其保存。然后压栈 root 的right 结点，然后压栈 root 的 left 结点。注意：这里是前序遍历，所以先压栈 right 结点，
//是因为栈 LIFO 的特点。直至 stack 为空。
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

