#include <stdio.h>
int main()
{
    int M,N,min,max,sum=0;
    for(int i=1 ; ; i++){
        scanf("%d%d",&M,&N);
        if(M<=0 || N<=0){
            break;
        }
        else{
            if(M<=N){
                min=M;
                max=N;
            }
            else{
                min=N;
                max=M;
            }
            for(int j=min ; j<=max ; j++){
                printf("%d ",j);
                sum=sum+j;
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
    }

    return 0;
}