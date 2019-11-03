#include <iostream>

struct Node {
	int data;
	Node*next;
};

struct Node* newNode(int d)
{
	Node*node = new Node;
	node->data = d;
	node->next = NULL;
	return node;
}
struct Node* insert(int d,Node* root)
{
	if (root == NULL)
	{
		root= newNode(d);
	}
	else
	{
		root->next=insert(d, root->next);
	}
	return root;

}

void print(struct Node* root)
{
	if (root->next == NULL)
		printf("%d -> NULL", root->data);
	else
	{
		printf("%d -> ", root->data);
		print(root->next);
	}
	printf("\n");

}

int main()
{
	struct Node* root = NULL;
	root=insert(10,root);
	insert(20,root);
	insert(30,root);
	print(root);
	
	
	return 0;

}