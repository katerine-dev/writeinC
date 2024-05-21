#include<stdio.h>
#include<stdlib.h>


void intercala(int p, int q, int r, int*v){
    int i, j, k;
    int* w;
    w = malloc((r - p)* sizeof(int));

    for(k = p,i = 0;k < q;k++, i++){
        w[i] = v[k];
    }

    /* k  == q */
    for(j = r - 1;k < r;k++, j--){
        w[j] = v[k];
    }
    k = p;
    i = 0;
    j = r - p - 1;
    while(k < r){
        if(w[i] < w[j]){
            v[k] = w[i];
            i++;
        }
        else{
            v[k] = w[j];
            j--;
        }
    }
    free(w);
}

int main(){
    int v[] = {22, 33, 55, 77, 11, 44, 66, 88, 99};
    int p = 0, q = 4, r = 9;
    intercala(p, q, r, v);
    for(int x = 0; x < 9; x++){
        printf("%d ", v[x]);
    }
    return 0;
}