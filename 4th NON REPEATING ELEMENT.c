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
        c=0;
        k=*(p+i);
        for(j=0;j<n;j++)
        {
           if(i!=j && k==*(p+j))
           {
               c++;
               break;
           }
        }
        if(c==0)
            rc++;
        if(rc==4)
        {
            printf("THE FOURTH NON REPEATING ELEMENT IS %d",*(p+i));
            break;
        }
    }
    if(rc<4)
    printf("NO NON REPEATING ELEMENT");
}
