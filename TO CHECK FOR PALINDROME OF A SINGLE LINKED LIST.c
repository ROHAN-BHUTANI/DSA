#include <stdio.h>
#include <stdlib.h>
typedef struct linked_list{
	int data;
	struct linked_list *next;
}ll;
ll* enq(ll *,ll*);
void disp(ll *);
int main()
{
	ll *f=NULL,*r=NULL;
	int ch;
	do{
	printf("1.ENQUEUE\n2.DISPLAY\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
			r=enq(r,f);
			if (f==NULL)
				f=r;
			break;
		case 2:
			disp(f);
			exit(0);
	}}while(ch<=2);
	return 0;
}
ll* enq(ll*r,ll*f)
{
	ll *p=NULL;
	int x;
	p=(ll*)malloc(sizeof(ll));
	printf("ENTER THE DATA VALUE");
	scanf("%d",&x);
	if (p!=NULL)
	{
		if(r==NULL)
		{
			p->data=x;
			r=p;
			r->next=NULL;
		}
		else
		{
			p->data=x;
			r->next=p;
			r=p;
		}
	}
	return r;
}
void disp(ll* f)
{
	ll*p=f,*r=f;
	int n=0,i,t=0,x,y;
	while(r!=NULL)
	{
	    n++;
	    r=r->next;
	}
	x=n/2;
    while(x!=0)
    {
        r=f;
        y=n-1;
        while((y)!=0)
        {
            r=r->next;
            y--;
        }
        if(p->data!=r->data)
            {
                t=1;
            }
        n--;
        x--;
        p=p->next;
    }
    if(t!=0)
        printf("\nNOT A PALINDROME\n");
    else
        printf("\nA PALINDROME\n");
}
