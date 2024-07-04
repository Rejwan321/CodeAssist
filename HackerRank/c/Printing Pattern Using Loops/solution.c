#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j,min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            min = i<j ? i:j;
            printf("%d ",n-min);
        }
        for(j=n-2;j>=0;j--){
            min =i<j ? i:j;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    for(i=n-2;i>=0;i--){
        for(j=0;j<n;j++){
            min = i<j ? i:j;
            printf("%d ",n-min);
        }
        for(j=n-2;j>=0;j--){
            min = i<j ? i:j;
            printf("%d ",n-min);
        }
        printf("\n");
    }
}
