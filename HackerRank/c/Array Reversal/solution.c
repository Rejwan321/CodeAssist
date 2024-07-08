#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, val=0;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d",&val);
        arr[num-i-1] = val;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
