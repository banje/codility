#include <stdio.h>
int solution(int X, int A[], int N) {
    int a[100001]={0},b=0,z;
    for(z=0;z<N;z=z+1){
        if(A[z]<=X){
            if(a[A[z]]==0){
                a[A[z]]=1;
                b=b+1;
            }
        }
        if(b==X){
            return z;
        }
    }
    return -1;
}
int main(){
}
//test 1:https://app.codility.com/demo/results/trainingRT8NDJ-6UQ/ 100%