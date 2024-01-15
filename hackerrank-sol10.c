//by ali akbar khan
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[1000],i,n;
        int sum = 0;
    //  printf("enter size of arry:");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        //  printf("enter value of a[%d]",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("%d",sum);



    
    return 0;
}
