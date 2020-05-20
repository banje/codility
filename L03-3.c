#include <stdio.h>
int solution(int A[], int N){
    int b=0,c=0,d=1000000000,e,z;
    for(z=N-1;z>=0;z=z-1){
        b=b+A[z];
    }
    for(z=N-1;z>0;z=z-1){
        c=c+A[z];
        e=2*c-b;
        if(e<0){
            e=-e;
        }
        if(e<d){
            d=e;
        }
    }
    return d;
}
int main(){
    int a[2]={-1000,1000},b=2;
    printf("%d",solution(a,b));
}
//test 1:https://app.codility.com/demo/results/trainingC737M9-6PV/ 84%
//test 2:https://app.codility.com/demo/results/training8ER6T7-Q7T/ 100%