#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    int k;
    scanf("%d%d", &n, &k);
    int  * m;
    int tot = 0;
    m = calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &m[i]);
    }
    for (int i = 0; i < k; i++)
    {
        if(m[i] > 0){
            tot++;
        }
        else{
            break;
        }

    }
    if(tot == k){
    for (int i = k-1; i < n-1; i++)
    {
        if(m[i] > m[i+1]){
            break;
        }
        else{
            tot++;
        }
    }
    }
    printf("%d", tot);
    free(m);
}