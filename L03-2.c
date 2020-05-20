#include <stdio.h>
int solution(int A[], int N){
    int b[100001]={0},z;
    for(z=N-1;z>=0;z=z-1){
        b[A[z]]=1;
    }
    for(z=N+1;z>0;z=z-1){
        if(b[z]==0){
            return z;
        }
    }
}
int main(){
}
//test 1:https://app.codility.com/demo/results/trainingXCKENW-D78/ 100%