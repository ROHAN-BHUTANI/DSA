#include <stdio.h>
#define max 20
int main()
{
    int a[max],i,n,*p=NULL,j,k;
    p=a;
    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT");
        scanf("%d",p+i);
    }
    int c=0,rc=0;
    for(i=0;i<n;i++)
    {
        k=*(p+i);
        for(j=i+1;j<n;j++)
        {
           if(k==*(p+j))
           {
               c++;
           }
        }
        if(c>0)
            rc++;
        if(rc==4)
        {
            printf("THE FOURTH REPEATING ELEMENT IS %d",*(p+i));
            break;
        }
    c=0;
    }
}
