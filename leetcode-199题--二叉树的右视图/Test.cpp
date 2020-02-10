
����һ�ö������������Լ�վ�������Ҳ࣬���մӶ������ײ���˳�򣬷��ش��Ҳ����ܿ����Ľڵ�ֵ��

ʾ�� :

���� : [1, 2, 3, null, 5, null, 4]
��� : [1, 3, 4]
 ���� :

	   1            <-- -
	  / \
	 2    3         <-- -
	  \   \
	  5    4       <-- -


//�ⷨһ���ݹ鷽���Ƿֱ����һ���ڵ���ҽڵ����ڵ㣬��Ϊ�Ǵ��ұ߿�������
//����������Ҫ���ȱ����ҽڵ㡣�����и����ʣ���������ڵ�ʱ����ô�ж����ұ�û�������ڵ����أ�
//���������õ�һ������level������ͬһ��Ľڵ㣬���res����Ĵ�С�Ѿ�����level�ˣ�
//˵���ұ��Ѿ��нڵ���������ˣ��ýڵ�Ͳ����ٱ��档һֱ�ݹ���ȥ�Ϳ��Եõ������

class Solution {
public:
	vector<int> rightSideView(TreeNode* root) {
		vector<int> res;
		helper(root, 0, res);
		return res;
	}

	void helper(TreeNode* root, int level, vector<int>& res)
	{
		if (root == NULL)
			return;
		if (res.size() == level)
		{
			res.push_back(root->val);
		}
		helper(root->right, level + 1, res);
		helper(root->left, level + 1, res);

	}
};

//�ⷨ�����ǵݹ�ķ����������Ҫ�����Ǵ�ӡ��������ÿһ�����ұߵ�һ�����֣�
//ʵ����������������������һ�ֱ��Σ�����ֻ��Ҫ����ÿһ�����ұߵ����ּ��ɣ�������Ҫ�õ����ݽṹ����queue��
//����ÿ��Ľڵ�ʱ������һ��Ľڵ㶼���뵽queue�У�ÿ����ʼ��һ��ڵ�ı���֮ǰ���Ȱ���һ�����һ���ڵ�ֵ�浽����У�

class Solution {
public:
	vector<int> rightSideView(TreeNode* root) {
		vector<int> res;
		if (!root) return res;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty()){
			res.push_back(q.back()->val);
			int size = q.size();
			for (int i = 0; i<size; ++i){
				TreeNode* t = q.front(); q.pop();
				if (t->left) q.push(t->left);
				if (t->right) q.push(t->right);
			}
		}
		return res;
	}
};
