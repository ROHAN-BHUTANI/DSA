#include <stdio.h>
#include <math.h>
#define max 100
void push(int[],int *,int);
int pop(int [],int*);
int main()
{
    char stack[max]={'6','3','*','5','2','+','2','2','^','/','-','\0'};
    int a[max],res=0,i=0,top=-1,A,B;
    while(stack[i]!='\0')
    {
        if(stack[i]>=48 && stack[i]<=57)
        {
            stack[i]=stack[i]-'0';
            push(a,&top,stack[i]);
        }
        else if(stack[i]== '^' || stack[i]== '/' ||stack[i]== '-'||stack[i]== '+'||stack[i]== '*')
        {
             A=pop(a,&top);
             B=pop(a,&top);
        switch(stack[i])
        {
            
            case '^':
                res=pow(B,A);
                break;
            case '/':
                res=(B/A);
                break;
            case '-':
                res=(B-A);
                break;
            case '+':
                res=(A+B);
                break;
            case '*':
                res=(A*B);
                break;
        }
            push(a,&top,res);
        }
        i++;
    }
    printf("THE RESULT IS %d",a[top]);
}
void push(int a[],int *top,int l)
{
        a[++*top]=l;
}
int pop(int a[],int *top)
{
    if(*top==-1)
    {
        printf("UNDERFLOW");
        return 0;
    }
    else{
        int x;
        x=a[*top];
        (*top)--;
        return x;
    }
}
