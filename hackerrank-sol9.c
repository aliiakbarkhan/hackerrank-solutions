//by ali akbar khan
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[100],i,n;
    //  printf("enter size of arry:");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        //  printf("enter value of a[%d]",i);
        scanf("%d",&a[i]);
    }
    //  printf("\narry in reverse order:\n");
    for ( i = n-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
