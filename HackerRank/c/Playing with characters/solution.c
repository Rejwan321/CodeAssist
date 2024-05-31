#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char Char;
    char s[100], sen[100];
    
    scanf("%c",&Char);
    scanf("%s", s);
    scanf("\n%[^\n]%*c", sen);
    
    printf("%c\n%s\n%s",Char,s,sen);
        
    return 0;
}
