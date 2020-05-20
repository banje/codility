#include <stdio.h>
int solution(int A[], int N) {
    int a[1000001]={0},z;
    for(z=0;z<N;z=z+1){
        if(A[z]>0){
            a[A[z]]=1;
        }
    }
    z=1;
    for(;;){
        if(a[z]==0){
            return z;
        }
        z=z+1;
    }
}
int main(){
}
//test 1:https://app.codility.com/demo/results/training2DF7HV-MTK/ 66%
//test 2:https://app.codility.com/demo/results/trainingN9MMFK-6Y9/ 100%