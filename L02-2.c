#include <stdio.h>
int solution(int A[], int N){
    int b=0;
    for(;N!=0;N=N-1){
        b=b^A[N-1];
    }
    return b;
}
int main(){
    int a[]={9,3,9,3,9,7,9},b=7;
    printf("%d",solution(a,b));
}
//test 1:https://app.codility.com/demo/results/trainingWZ4WWJ-KPV/ 100%