#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10000],n,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    for(i=0;i<n;i++){
    s = s+a[i];
    }
    printf("%d",s);
}
