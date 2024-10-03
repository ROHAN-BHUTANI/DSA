#include <stdio.h>
#include <stdlib.h>
typedef struct circular_queue
{
    int data;
    struct circular_queue * next;
}cq;
void cenq(cq **,cq **);
void disp(cq *);
int main()
{
    int ch;
    cq *F=NULL,*R=NULL;
    int k,N;
    printf("ENTER THE VALUE OF K");
    scanf("%d",&k);
    printf("ENTER NUMBER OF ELEMENTS");
    scanf("%d",&N);
    printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n");
    printf("\nENTER YOUR CHOICE\n");
    scanf("%d",&ch);
    for(i=0;i<N;i++)
    {
            cenq(&F,&R);
    }
    disp(F,k);
    return 0;
}
void cenq(cq **F1,cq**R1)
{
    cq *p=NULL;
    p=(cq*)malloc(sizeof(cq));
    printf("ENTER DATA");
    scanf("%d",&(p->data));
    if (p!=NULL)
    {
    if (*F1==NULL && *R1==NULL)
        *F1=*R1=p;
    else
    {
        (*R1)->next=p;
        *R1=p;
    }
    (*R1)->next=*F1;
    }
    else
        printf("MEMORY ALLOCATION FAILED");
}
void disp(cq *F,int k)
{
    int c=0;
    cq *p=F,*m=NULL;
   		while(p->next!=p)
   		if(
    		printf("PERSON NUMBER %d  IS ELIMINATED",*p);
    		
    		
    	
    
}
