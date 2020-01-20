给定一个二叉树，找出其最小深度。

最小深度是从根节点到最近叶子节点的最短路径上的节点数量。

说明 : 叶子节点是指没有子节点的节点。

 示例 :

给定二叉树 [3, 9, 20, null, null, 15, 7],

3
/ \
9  20
/ \
15   7
返回它的最小深度  2.


class Solution {
public:
	int minDepth(TreeNode* root) {
		if (root == NULL) return 0;
		TreeNode* node;
		queue<TreeNode*> que;
		int depth = 1;
		que.push(root);
		while (!que.empty()){
			int num = que.size();
			while (num-->0){
				node = que.front();
				que.pop();
				if (node->left == NULL&&node->right == NULL) return depth;
				if (node->left != NULL) que.push(node->left);
				if (node->right != NULL) que.push(node->right);
			}
			depth++;
		}
		return depth;
	}
};
