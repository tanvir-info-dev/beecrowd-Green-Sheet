#include <stdio.h>
#include <limits.h>
int main()
{
    int T;
    double n,min=INT_MAX;
    scanf("%d",&T);
    for(int i=1 ; i<=T ; i++){
        scanf("%lf",&n);
        if(n<=min){
            min=n;
        }
    }
    printf("%.2lf\n",min);

    return 0;
}