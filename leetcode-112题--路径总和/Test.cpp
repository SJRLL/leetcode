����һ����������һ��Ŀ��ͣ��жϸ������Ƿ���ڸ��ڵ㵽Ҷ�ӽڵ��·��������·�������нڵ�ֵ��ӵ���Ŀ��͡�

˵�� : Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣

 ʾ�� :
�������¶��������Լ�Ŀ��� sum = 22��

5
/ \
4   8
/ / \
11  13  4
/ \      \
7    2      1
���� true, ��Ϊ����Ŀ���Ϊ 22 �ĸ��ڵ㵽Ҷ�ӽڵ��·�� 5->4->11->2��


class Solution {
public:
	bool DFS(TreeNode* root, int sum){
		if (root == NULL){
			return false;
		}
		if (!root->left &&!root->right){
			if (root->val == sum){
				return true;
			}
		}
		return (DFS(root->left, sum - root->val) || DFS(root->right, sum - root->val));
	}
	bool hasPathSum(TreeNode* root, int sum) {
		return DFS(root, sum);
	}
};