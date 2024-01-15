//by ali akbar khan
#include <stdio.h>
void update(int *a, int *b){
int add,sub;
add = *a + *b;
sub = *a - *b;
if (sub<0)
{
    sub = -sub;
}

*a = add;
*b = sub;

}
int main() {
    int a2, b2;
    int *pa = &a2, *pb = &b2;
    scanf("%d %d", &a2, &b2);
    update(pa, pb);
    printf("%d\n%d", a2,b2 );

    return 0;
}
