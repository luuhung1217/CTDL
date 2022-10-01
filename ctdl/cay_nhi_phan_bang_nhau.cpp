// C++ program to check if two trees have
// same structure
#include <iostream>
using namespace std;

// A binary tree node has data, pointer to left child
// and a pointer to right child
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
Node* newNode(int data)
{
	Node* node = new Node;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}
int isSameStructure(Node* a, Node* b)
{
	
	if (a==NULL && b==NULL)
		return 1;
	
	if (a!=NULL && b!=NULL)
	{
		return
		(
			isSameStructure(a->left, b->left) &&
			isSameStructure(a->right, b->right)
		);
	}
	return 0;
}
int main()
{
	Node *root1 = newNode(10);
	Node *root2 = newNode(100);
	root1->left = newNode(7);
	root1->right = newNode(15);
	root1->left->left = newNode(4);
	root1->left->right = newNode(9);
	root1->right->right = newNode(20);

	root2->left = newNode(70);
	root2->right = newNode(150);
	root2->left->left = newNode(40);
	root2->left->right = newNode(90);
	root2->right->right = newNode(200);

	if (isSameStructure(root1, root2))
		printf("Both trees have same structure");
	else
		printf("Trees do not have same structure");
	return 0;
}

