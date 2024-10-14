#include <stdio.h>
#include <stdlib.h>
typedef struct polynomial
{
    int data;
    int expo;
    struct polynomial *next;
}pp;
void enq(pp**,pp**);
void disp(pp*,pp*);
int main()
{
    pp*f1=NULL,*r1=NULL,*f2=NULL,*r2=NULL;
    int ch;
    do{
        printf("1.ENQ\n2.DISPLAY\n");
        printf("\nENTER YOUR CHOICE\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enq(&f1,&r1);
                enq(&f2,&r2);
                break;
            case 2:
                disp(f1,f2);
                break;
            case 3:
                printf("INVALID CHOICE");
                exit(0);
        }
    }while(ch<=3);
}
void enq(pp**f,pp**r)
{
    int x,y;
    printf("ENTER THE VALUE OF DATA AND EXPONENT");
    scanf("%d%d",&x,&y);
    pp*p=NULL;
    p=(pp*)malloc(sizeof(pp));
    if(p!=NULL)
    {
        p->data=x;
        p->expo=y;
        if((*f)==NULL && (*r)==NULL)
        {
            (*f)=(*r)=p;
        }
        else
        {
            (*r)->next=p;
            (*r)=p;
        }
    }
}
void disp(pp*f1,pp*f2)
{
    pp*p1=f1,*p2=f2;
    int res;
    while(p1!=NULL || p2!=NULL)
    {
        if((p1!=NULL && p2!=NULL) && (p1->expo==p2->expo))
        {
            res=(p1->data)+(p2->data);
            printf("%d x ^ %d",res,p1->expo);
            p1=p1->next;
            p2=p2->next;
        }
        else if(p1!=NULL  && (p2==NULL || (p1->expo>p2->expo)))
        {
            res=(p1->data)+0;
            printf("%d x ^ %d",res,p1->expo);
            p1=p1->next;
        }
        else if((p2!=NULL) && (p1==NULL || (p1->expo<p2->expo)))
        {
            res=(p2->data)+0;
            printf("    %d x ^ %d   ",res,p2->expo);
            p2=p2->next;
        }
    }
}
