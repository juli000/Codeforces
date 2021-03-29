#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int tot = 0;
    for (int i = 1; i <= 5; i++)
    { 
        for(int j = 1; j <= 5; j++){
            scanf("%d", &x);
            if(x == 1){
                tot = abs(3-i) + abs(3-j);
            }
        }
    }
    printf("%d", tot);
    
}