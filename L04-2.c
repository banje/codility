#include <stdio.h>
#include <stdlib.h>
struct Results {
    int * C;
    int L; // Length of the array
};
struct Results solution(int N, int A[], int M) {
    struct Results result;
    int a=0,*b,c=0,d=0,y,z;
    b=(int *)malloc(sizeof(int)*N);
    for(z=0;z<N;z=z+1){
        b[z]=0;
    }
    for(z=0;z<M;z=z+1){
        if(A[z]==N+1){
            for(y=c;y<z;y=y+1){
                b[A[y]-1]=0;
            }
            c=z+1;
            d=d+a;
            a=0;
        }
        else{
            b[A[z]-1]=b[A[z]-1]+1;
            if(b[A[z]-1]>a){
                a=b[A[z]-1];
            }
        }
    }
    for(z=0;z<N;z=z+1){
        b[z]=b[z]+d;
    }
    result.C = b;
    result.L = N;
    return result;
}
int main(){
    int a[7]={3,4,4,6,1,4,4},b=5,c=7,z;
    solution(b,a,c);
    for(z=0;z<5;z=z+1){
        printf("%d",solution(b,a,c).C[z]);
    }
}
//test 1:https://app.codility.com/demo/results/trainingH3THH3-443/ 77%
//test 2:https://app.codility.com/demo/results/training8VM3DD-J4R/ 100%