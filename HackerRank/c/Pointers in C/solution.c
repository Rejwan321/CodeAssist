#include <stdio.h>
#include <math.h>

void update(int* a,int* b) {
    int x=*a,y=*b,s,d;
    s = x+y;
    d = abs(x-y);
    *a = s;
    *b = d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
