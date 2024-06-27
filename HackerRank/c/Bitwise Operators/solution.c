#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int max(int n,int n1){
    if(n>n1)
    return n;
    else {
    return n1;
    }
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);; 
    int ma=0,mb=0,mc=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int a,b,c;
            a=i&j;
            b=i|j;
            c=i^j;
            if(a<k)
                ma=max(ma,a);
            if(b<k)
                mb=max(mb,b);
            if(c<k)
                mc=max(mc,c);
        }
    }
    printf("%d\n%d\n%d",ma,mb,mc);
}
