#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x;
    char s[4];
    int tot = 0;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        scanf("%s", s);
        if(s[1] == '+'){
            tot++;
       }else{
           tot--;
       }
    }
    printf("%d", tot);
}