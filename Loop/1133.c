#include <stdio.h>
int main()
{
    int X,Y,min,max;
    scanf("%d%d",&X,&Y);
    if(X<=Y){
        min=X;
        max=Y;
    }
    else{
        min=Y;
        max=X;
    }
    for(int i=min+1 ; i<max ; i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }

    return 0;
}