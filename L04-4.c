#include <stdio.h>
int solution(int A[], int N) {
    int a[100001]={0},z;
    for(z=0;z<N;z=z+1){
        if(A[z]>N){
            return 0;
        }
        a[A[z]]=1;
    }
    for(z=1;z<=N;z=z+1){
        if(a[z]==0){
            return 0;
        }
    }
    return 1;
}
int main(){
}
//test 1:https://app.codility.com/demo/results/trainingTK349V-9ES/ 100%