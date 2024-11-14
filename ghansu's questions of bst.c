#include <stdio.h>
#include<stdlib.h>
#define max 10
typedef struct binary_search
{
	struct binary_search * left;
	int data;
	struct binary_search * right;
}tree;
void insert(tree**,int);
void count(tree*,int*);
void countp(tree*,int*);
int main()
{
	tree*root=NULL;
	int c=0,cp=0;
	int ch,num;
	do{
		printf("1.INSERT\n2.LEAF NODES\n3.PARENTS WITH SINGLE CHILD\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("ENTER A NUMBER");
				scanf("%d",&num);
				insert(&root,num);
				break;
			case 2:
				count(root,&c);
				printf("THE TOTAL NUMBERE OF LEAF NODES ARE:%d",c);
				break;
			case 3:
				countp(root,&cp);
				printf("THE TOTAL NUMBER OF SINGLE CHILD PARENTS ARE: %d",cp);
				break;
			default:
				printf("INVALID CHOICE");
				exit(0);
		}}while(ch<=3);
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
void count(tree* root,int *c)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		if(root->left==NULL && root->right==NULL)
			(*c)=(*c)+1;
			count(root->left,c);
			count(root->right,c);
	}
}
void countp(tree* root,int *cp)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		if((root->left==NULL && root->right!=NULL ) || (root->left!=NULL && root->right ==NULL))
			(*cp)=(*cp)+1;
		countp(root->left,cp);
		countp(root->right,cp);
	}
}

		


		
			
