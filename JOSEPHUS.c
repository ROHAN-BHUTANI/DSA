#include <stdio.h>
#include <stdlib.h>
typedef struct circular_queue
{
    int data;
    struct circular_queue * next;
}cq;
void cenq(cq **,cq **);
void disp(cq *,int );
int main()
{
    cq *F=NULL,*R=NULL;
    int k,N,i;
    printf("ENTER THE VALUE OF K");
    scanf("%d",&k);
    printf("ENTER NUMBER OF ELEMENTS");
    scanf("%d",&N);
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
    int c=1;
    cq *p=F,*m=NULL;
    while(p->next!=p)
    {
    	if((c+1)%(k)==0)
    	{
    		m=p->next;
    		printf("\nPERSON NUMBER %d  IS ELIMINATED\n",m->data);
    		p->next=m->next;
    		free(m);
      		p=p->next;
      		c=1;
   	}
   	else
   	{
   		p=p->next;
   		c++;
   	}
   }
   printf("\nTHE SURVIVOR IS ->%d\n",p->data);
   return ;
}
    		
    		
    	
    
