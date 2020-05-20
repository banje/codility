#include <stdio.h>
int solution(int A, int B, int K) {
    int a;
    a=(B/K-A/K);
    if(A%K==0){
        a=a+1;
    }
    return a;
}
int main(){
}
//test 1:https://app.codility.com/demo/results/training7X3PZV-AGS/ 87%
//test 2:https://app.codility.com/demo/results/trainingP7KDU7-FDZ/ 100%