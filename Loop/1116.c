#include <stdio.h>
int main()
{
    int N;
    double X,Y;
    scanf("%d",&N);
    for(int i=1 ; i<=N ; i++){
        scanf("%lf%lf",&X,&Y);
        if(Y==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1lf\n",X/Y);
        }
    }

    return 0;
}