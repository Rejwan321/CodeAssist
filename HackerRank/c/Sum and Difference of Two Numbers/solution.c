#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,s1,d1;
  float x,y,s2,d2;
  scanf("%d  %d",&a,&b);
  scanf("%f  %f",&x,&y);
  s1 = a + b;
  s2 = x + y;
  d1 = a - b;
  d2 = x - y;
  printf("%d %d\n",s1,d1);
  printf("%0.1f %0.1f",s2,d2);
  return 0;
}
