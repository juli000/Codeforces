#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x;
    char s[100];
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        scanf("%s", s);
        if(strlen(s) <= 10){
            printf("%s\n", s);
        }else{
            printf("%c%d%c\n" ,s[0],strlen(s) - 2,s[strlen(s)-1]);
        }
    }
}