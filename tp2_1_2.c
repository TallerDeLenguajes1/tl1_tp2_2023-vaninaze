#include<stdio.h>
#include<stdlib.h>
#define N 20
int main(){
    int i;
    double vt[N], * punt;
    punt = vt;
    for(i = 0;i<N; i++)
    {
        *punt = 1+rand()%100;
        printf(" %.2f ", *punt);
        punt++;
    }
    return 0;
}