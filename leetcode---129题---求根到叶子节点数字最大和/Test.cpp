//
//����:
//   [4, 9, 0, 5, 1]
//	    4
//	   / \
//	  9   0
//   / \
//	5   1
//���: 1026
//���� :
//   �Ӹ���Ҷ�ӽڵ�·�� 4->9->5 �������� 495.
//   �Ӹ���Ҷ�ӽڵ�·�� 4->9->1 �������� 491.
//   �Ӹ���Ҷ�ӽڵ�·�� 4->0 �������� 40.
//   ��ˣ������ܺ� = 495 + 491 + 40 = 1026.


//����˼·�����õݹ�ķ������ҵ�ÿһ֧·����·�ڵ㣬ÿ��ȥһ�㣬�ͳ���10��Ȼ��Ѹýڵ�valֵ���ϣ�Ȼ����ȥѰ������·�ڵ�
class Solution {
public:
	int sumNumbers(TreeNode* root) {
		int res = 0;
		DFS(root, 0, res);
		return res;
	}

	void  DFS(TreeNode* root, int p, int &res)
	{
		if (root == NULL)
		{
			return;
		}
		p = p * 10 + root->val;
		if (root->left == NULL && root->right == NULL)
		{
			res += p;
			return;
		}

		DFS(root->left, p, res);
		DFS(root->right, p, res);
	}
};