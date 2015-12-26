#ifndef _BST_H
#define _BST_H

class BTree {

	private:
		struct TreeNode {
			int val;
			TreeNode* left;
			TreeNode* right;	

			TreeNode(int x):val(x),left(NULL),right(NULL) {}
		};

		TreeNode* root;
		void insert(TreeNode* node, int x);
		void display(TreeNode* ptr);
		bool isBalanced(TreeNode* root);
		int getHeight(TreeNode* root);
		bool isSameTreePrivate(TreeNode* p, TreeNode* q);
		bool hasPathSum(TreeNode* node, int sum);
	
	public:
		BTree();
		void insert(int x);
		void display();
		int getHeight();
		bool isBalanced();
		bool isSameTree(BTree* tree1, BTree* tree2);
		void printLevelByLevel();
		bool hasPathSum(int sum);

};

#endif