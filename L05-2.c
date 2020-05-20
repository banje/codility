#include <stdio.h>
struct Results {
    int * A;
    int M; // Length of the array
};
struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    int a[100001][3]={0},b[50001],z=1;
    printf("%d",7);
    for(;;){
        if(S[z-1]==0){
            break;
        }
        a[z][0]=a[z-1][0];
        a[z][1]=a[z-1][1];
        a[z][2]=a[z-1][2];
        switch(S[z-1]){
            case 'A':
                a[z][0]=a[z][0]+1;
                break;
            case 'C':
                a[z][1]=a[z][1]+1;
                break;
            case 'G':
                a[z][2]=a[z][2]+1;
                break;
        }
        z=z+1;
    }
    for(z=0;z<M;z=z+1){
        if(a[Q[z]+1][0]-a[P[z]][0]!=0){
            b[z]=1;
        }
        else if(a[Q[z]+1][1]-a[P[z]][1]!=0){
            b[z]=2;
        }
        else if(a[Q[z]+1][2]-a[P[z]][2]!=0){
            b[z]=3;
        }
        else{
            b[z]=4;
        }
    }
    result.A=b;
    result.M=M;
    return result;
}
int main(){
    int a[]={2,5,0},b[]={4,5,6},z;
    struct Results c;
    c=solution("CAGCCTA",a,b,3);
    for(z=0;z<3;z=z+1){
        printf("%d",c.A[z]);
    }
}
//test 1:https://app.codility.com/demo/results/training2GXPG9-46T/ 100%
//But runtime error occurs when 'printf("%d",z);' doesn't exist.
//Maybe it's compiler's problem. Variable b is local variable.