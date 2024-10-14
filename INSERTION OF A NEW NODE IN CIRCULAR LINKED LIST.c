#include <stdio.h>
#include <stdlib.h>
typedef struct cll{
    int data;
    struct cll*next;
}ll;
ll* enq(ll*,ll*);
ll* deq(ll*,ll*);
void disp(ll*);
int main()
{
    int ch;
    ll*f=NULL,*r=NULL;
    do{
        printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n");
        printf("\nENTER CHOICE \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                r=enq(f,r);
                if(f==NULL)
                    f=r;
                break;
            case 2:
                f=deq(f,r);
                if(f==r)
                    f=r=NULL;
                break;
            case 3:
                disp(f);
                break;
            case 4:
                break;
        }
    }while(ch!=4);
    return 0;
}
ll* enq(ll*f,ll*r)
{
    ll*p=NULL;
    int x;
    printf("ENTER DATA");
    scanf("%d",&x);
    p=(ll*)malloc(sizeof(ll));
    if(p!=NULL)
    {
        p->data=x;
        if(f==NULL&&r==NULL)
        {
           f=r=p;
           r->next=f;
        }
        else
        {
            r->next=p;
            r=p;
            r->next=f;
        }
    }
    else
        printf("MEMORY ALLOCATION FAILED");
    return r;
}
ll* deq(ll*f,ll*r)
{
    ll*p=NULL;
    if(f==NULL)
    {
        printf("UNDERFLOW");
    }
    else
    {
        p=f;
        printf("THE DATA TO BE DEQUED IS %d",p->data);
        if(f==r)
        {
            f=r=NULL;
            free(p);
        }
        else
        {
        f=f->next;
        r->next=f;
        free(p);
        }
    }
    return f;
}
void disp(ll*f)
{
    int y;
    printf("ENTER THE NODE's VALUE YOU WANT TO INSERT");
    scanf("%d",&y);
    ll*z=NULL;
    z=(ll*)malloc(sizeof(ll));
    z->data=y;
    ll*m=f;
    while(m->next!=f)
    {
        m=m->next;
    }
    z->next=f;
    m->next=z;
    if(f==NULL){
        printf("EMPTY LINKED LIST");
        return;}
    else
    {
        ll*p=f;
        do{
            printf("%d->",p->data);
            p=p->next;
        }while(f!=p);
    }
   
    
}
