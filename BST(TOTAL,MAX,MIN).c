#include <stdio.h>
#include <stdlib.h>
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
int total(tree*);
int max(tree*);
int min(tree*);
int main()
{
	tree*root=NULL;
	int ch,num;
	do{
		printf("\n\n1.INSERT\n2.PREORDER\n3.INORDER\n4.POSTORDER\n5.TOTAL NODES\n6.MAXIMUM NODE\n7.MINIMUM NODE\n\n");
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
			case 5:
				printf("\nTOTAL NUMBER OF NODES=%d",total(root));
				break;
			case 6:
				printf("\nMAXIMUM NODE=%d",max(root));
				break;
			case 7:
				printf("\nMINIMUM NODE=%d",min(root));
				break;
		}}while(ch<=7);
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
int total(tree*root)
{
	if(root==NULL)
	{
		return 0;
	}
	return 1+total(root->left)+total(root->right);
}
int min(tree*root)
{
	if(root->left==NULL)
	{
		return(root->data);
	}
	min(root->left);
}
int max(tree*root)
{
	if(root->right==NULL)
	{
		return(root->data);
	}
	min(root->right);
}
	
			
