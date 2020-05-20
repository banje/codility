#include <stdio.h>
struct Results {
    int * A;
    int N;
};
struct Results solution(int A[], int N, int K){
    struct Results a;
    int b,z;

    for(;K>0;K=K-1){
        b=A[N-1];
        for(z=N-1;z>0;z=z-1){
            A[z]=A[z-1];
        }
        A[0]=b;
    }
    a.A=A;
    a.N=N;
    return a;
}
int main(){
    int a[5];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    printf("%d",solution(a,5,3).A[0]);
}
//test 1:https://app.codility.com/demo/results/training48S8US-4T8/ 100%