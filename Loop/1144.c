#include <stdio.h>
int main()
{
    int N,c1=1,c2,c3,count=0;
    scanf("%d",&N);
    for(int i=1 ; i<=N*2 ; i++){
        for(int j=1 ; j<=1 ; j++){
            if(i%2==0){
                c2=c1*c1+1;
                if(i!=2){
                    c3=c2*c1-count;
                }
                else{
                    c3=c2*c1;
                }
                printf("%d %d %d\n",c1,c2,c3);
                count++;
            }
            else{
                c2=c1*c1;
                c3=c2*c1;
                printf("%d %d %d\n",c1,c2,c3);
            }
        }
        if(i%2==0){
            c1++;
        }
    }

    return 0;
}