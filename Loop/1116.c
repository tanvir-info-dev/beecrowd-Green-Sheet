#include <stdio.h>
int main()
{
    int N;
    double X,Y;
    for(int i=1 ; i<=N ; i++){
        scanf("%lf%lf",&X,&Y);
        if(Y==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1lf",X/Y);
        }
    }

    return 0;
}