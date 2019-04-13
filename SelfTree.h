

#include<iostream>


namespace SelfTree {
	using namespace std;

	//template <class T>//类模板 
		struct BinaryTreeNode {
			char  element;//二叉树结点数据域 
			BinaryTreeNode* leftChild;
			BinaryTreeNode* rightChild;
			//BinaryTreeNode<T>* leftChild;
			//BinaryTreeNode<T>* rightChild;

		};

		class BinaryTree {
		    public:
			   BinaryTree() { root = NULL; } //先创建一颗空树
			   void CreatTree(istream & in, BinaryTreeNode * & m);
			   BinaryTreeNode* & get_address()  { return root; }
			   void preTraverse(BinaryTreeNode * & m);   //前序遍历二叉树并打印
			   void midTraverse(BinaryTreeNode * & m);   //中序遍历二叉树并打印
			   void postTraverse(BinaryTreeNode * & m);   //后序遍历二叉树并打印

		    private:
				BinaryTreeNode * root; //起名叫root其实跟创建时其为下子节点提供根有关系
		};










    /*
	template <class T>//类模板
	class BinaryTree {
		public:
			BinaryTree(root = NULL);//构造函数
			~BinaryTree() { DeleteBinaryTree(root); }; //析构函数

			bool isEmpty() const;//判定二叉树是否为空树
			
			BinaryTreeNode<T>* Root() { return root; };//返回二叉树根结点
			
			BinaryTreeNode<T>* Parent(BinaryTreeNode<T>* current);//返回current结点的父结点
			
			BinaryTreeNode<T>* LeftSibling(BinaryTreeNode<T>* current);//返回current结点的左兄弟
			
			BinaryTreeNode<T>* RightSibling(BinaryTreeNode<T>* current);//返回current结点的右兄弟

			//以elem作为根结点，leftTree作为树的左子树, rightTree作为树的右子树，构造一棵新的二叉树
			void CreateTree(const BinaryTreeNode<T>& elem,BinaryTree<T>& leftTree, BinaryTree<T>& rightTree);
            void DeleteBinaryTree(BinaryTreeNode<T>* root);	//删除二叉树或其子树



	    private:
			BinaryTreeNode<T>*  root;//二叉树根结点指针
			BinaryTreeNode<T>*  GetParent(BinaryTreeNode<T>* root, BinaryTreeNode<T>* current);//从二叉树的root结点开始，查找current结点的父结点


	};
	*/
}