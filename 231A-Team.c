#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x;
    int j,k,l;
    int tot = 0;
    int btot = 0;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        scanf("%d %d %d", &j, &k, &l);
        if(j == 1){ btot++;}
        if(k == 1){ btot++;}
        if(l == 1){ btot++;}
        if(btot >= 2){ tot++;}
        btot = 0;
    }
    printf("%d", tot);
}