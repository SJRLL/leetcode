����һ����������ԭ�ؽ���չ��Ϊ����

���磬����������

1
/ \
2   5
/ \   \
3   4   6
����չ��Ϊ��

1
\
2
\
3
\
4
\
5
\
6


class Solution {
public:
	void flatten(TreeNode* root) {
		while (root != NULL) {
			if (root->left == NULL)  root = root->right;//������һ�ڵ�
			else{
				TreeNode* pre = root->left;
				while (pre->right != NULL) pre = pre->right;// �����������ҽڵ�
				pre->right = root->right;//��ԭ�������ӵ������������ҽڵ�
				root->right = root->left;//���������嵽��������
				root->left = NULL;//��������Ϊ��
			}
		}
	}
};