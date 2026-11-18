#include <stdio.h>
#include <limits.h>
int main()
{
    int mx=INT_MIN,x,flag;
    for(int i=1 ; i<=100 ; i++){
        scanf("%d",&x);
        if(x>=mx){
            mx=x;
            flag=i;
        }
    }
    printf("%d\n%d\n",mx,flag);

    return 0;
}