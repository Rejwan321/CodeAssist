#include <stdio.h>

int main(void) {
int n;
scanf("%d",&n);
while(n--)
{
    int t;
    int flag;
    scanf("%d",&t);
        int a[t];
        for(int i=0;i<t;i++)
        scanf("%d",&a[i]);
        int freq[1000] = {0};
        for(int i=0;i<t;i++)
        {
            freq[a[i]]++;
        }
            flag=1;
        for(int i=0;i<t;i++){
                if(freq[a[i]]%2!=0){
                    flag = 0;
                    break;
                }
        }
    if(flag)
     printf("YES\n");
    else
     printf("NO\n");

}
	return 0;
}

