#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char s[101];
    char h[101];
    scanf("%s", s);
    scanf("%s", h);
    if(strcasecmp(s,h) != 0){
        printf("%d", strcasecmp(s,h));
    }
    else{
        printf("0");
        }
    
}