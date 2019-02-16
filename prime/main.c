#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j , count,n,len;
    printf("enter any number  : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)

            {
                count++;
            }
        }
        if (count==2)
        {
            printf("%d\n",i);


        }

    }

    return 0;
}
