#include <stdio.h>
int solution(int X, int Y, int D){
    if(X==Y){
        return 0;
    }
    return (Y-1-X)/D+1;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",solution(a,b,c));
}
//test 1:https://app.codility.com/demo/results/training4R2KX8-JJ3/ 100%