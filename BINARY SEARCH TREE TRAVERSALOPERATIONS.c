#include <stdio.h>
#include<stdlib.h>
#define max 10
typedef struct binary_search
{
	struct binary_search * left;
	int data;#include <stdio.h>
#include<stdlib.h>
#define max 10
typedef struct binary_search
{
	struct binary_search * left;
	int data;
	struct binary_search * right;
}tree;
void insert(tree**,int);
void preorder(tree*);
void inorder(tree*);
void postorder(tree*);
int main()
{
	tree*root=NULL;
	int ch,num;
	do{
		printf("1.INSERT\n2.PREORDER\n3.INORDER\n4.POSTORDER");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("ENTER A NUMBER");
				scanf("%d",&num);
				insert(&root,num);
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
		}}while(ch<=4);
	return 0;
}
void insert(tree **root,int num)
{
	tree *p=NULL;
	if(*root==NULL)
	{
		p=(tree*)malloc(sizeof(tree));
		p->data=num;
		p->left=NULL;
		p->right=NULL;
		(*root)=p;
		return;
	}
	else
	{
		if((*root)->data>num)
		{
			insert((&(*root)->left),num);
		}
		else
		{
			insert(&((*root)->right),num);
		}
	}
}
void preorder(tree*root)
{
	if(root!=NULL)
	{
		printf(" %d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(tree*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf(" %d ",root->data);
		inorder(root->right);
	}
}
void postorder(tree*root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf(" %d ",root->data);
	}
}

		
			
	struct binary_search * right;
}tree;
void insert(tree**,int);
void preorder(tree*);
void inorder(tree*);
void postorder(tree*);
int main()
{
	tree*root=NULL;
	int ch,num;
	do{
		printf("1.INSERT\n2.PREORDER\n3.INORDER\n4.POSTORDER");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("ENTER A NUMBER");
				scanf("%d",&num);
				insert(&root,num);
				break;
			case 2:
				preorder(root);
				break;
			case 3:
				inorder(root);
				break;
			case 4:
				postorder(root);
				break;
		}}while(ch<=4);
	return 0;
}
void insert(tree **root,int num)
{
	tree *p=NULL;
	if(*root==NULL)
	{
		p=(tree*)malloc(sizeof(tree));
		p->data=num;
		p->left=NULL;
		p->right=NULL;
		(*root)=p;
		return;
	}
	else
	{
		if((*root)->data>num)
		{
			insert((&(*root)->left),num);
		}
		else
		{
			insert(&((*root)->right),num);
		}
	}
}
void preorder(tree*root)
{
	if(root!=NULL)
	{
		printf(" %d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(tree*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf(" %d ",root->data);
		inorder(root->right);
	}
}
void postorder(tree*root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf(" %d ",root->data);
	}
}

		
			
