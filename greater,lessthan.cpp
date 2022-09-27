#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    if(a<=b){
        if(a<b){
            for(i=a;i<=b;i++)
            {
                for(j=a;j<i;j++)
                {
                    if(i%j==0)
                    {
                        printf("%d ",i);
                        break;
                    }
                }
            }
        }
        else{
            printf("a is equal to b");
        }
    }
    else
        printf("a is greater than b");

    return 0;
}
