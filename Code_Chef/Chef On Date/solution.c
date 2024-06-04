#include <stdio.h>

int main(void) {
	int n,i,j;
	int cash[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    }
	    for(j=0;j<n;j++){
	        scanf("%d %d",&cash[i],&cash[j]);
	        if(cash[i]>=cash[j]){
	            printf("yes\n");
	        }
	        else
	        printf("no\n");
	}
	return 0;
}

