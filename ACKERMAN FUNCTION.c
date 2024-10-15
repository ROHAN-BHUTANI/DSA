#include <stdio.h>
int ack(int,int);
int main()
{
    int m,n,res;
    printf("ENTER THE VALUES OF m and n");
    scanf("%d%d",&m,&n);
    res=ack(m,n);
    printf("THE RESULT IS %d",res);
    return 0;
}
int ack(int m,int n)
{
    if(m==0)
    {
        return(n+1);
    }
    else if(m>0 && n==0)
    {   
        (ack(m-1,1));
    }
    else if(m>0 && n>0)
    {
        (ack(m-1,ack(m,n-1)));
    }
}
