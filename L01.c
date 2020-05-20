#include <stdio.h>
int solution(int N){
    unsigned int a=1073741824,b=0,c=0;
    for(;;){
        if(a&N){
            break;
        }
        a=a/2;
    }
    for(;;){
        if(a==1){
            break;
        }
        a=a/2;
        if(!(a&N)){
            b=b+1;
        }
        else{
            if(b>c){
                c=b;
            }
            b=0;
        }
    }
    return c;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",solution(a));
}
//test 1:https://app.codility.com/demo/results/trainingJNBWRJ-HZ7/ 100%