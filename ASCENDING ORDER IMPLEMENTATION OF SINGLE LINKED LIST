#include <stdio.h>
#include<stdlib.h>
typedef struct ll
{
	int data;
	struct ll*next;
}ll;
void insert(ll**,ll**);
void disp(ll*);
int main()
{
	ll *f=NULL,*r=NULL;
	int ch;
	do{
	printf("1.INSERT\n2.DISPLAY\n");
	printf("ENTER YOUR CHOICE");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insert(&f,&r);
			break;
		case 2:
			disp(f);
			break;
	}}
	while(ch<=2);
	return 0;
}
void insert(ll**f,ll**r)
{
	ll *p=NULL,*m=*f;
	int x;
	printf("ENTER ELEMENT");
	scanf("%d",&x);
	p=(ll*)malloc(sizeof(ll));
	p->data=x;
	if ((*f)==NULL && (*r)==NULL)
	{
		(*f)=(*r)=(p);
		(*r)->next=NULL;
	}
	else
	{
		if((*r)->data<p->data)
		{
		(*r)->next=p;
		(*r)=p;
		(*r)->next=NULL;
		}
		else if((*f)->data>p->data)
		{
			p->next=(*f);
			(*f)=p;
		}
		else
		{
			while(m->next->data < p->data)
				{
					m=m->next;
				}
				p->next=m->next;
				m->next=p;		
		}
}}
void disp(ll*f)
{
	do
	{
		printf("%d->",(f)->data);
		f=f->next;
	}while(f!=NULL);
}
	
