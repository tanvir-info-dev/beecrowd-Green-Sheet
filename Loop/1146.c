#include <stdio.h>
int main()
{
    int N;
    for(int i=1 ; ; i++){
        scanf("%d",&N);
        if(N==0){
            break;
        }
        else{
            for(int j=1 ; j<N ; j++){
                printf("%d ",j);
            }
            printf("%d",N);
        }
        printf("\n");
    }

    return 0;
}