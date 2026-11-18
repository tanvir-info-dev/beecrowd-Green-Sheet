#include <stdio.h>
int main()
{
    int a[20];
    for(int i=0 ; i<20 ; i++){
        scanf("%d",&a[i]);
    }
    if(a[1]==a[0]+1){
        for(int i=1 ; ; i++){
            if(a[i+1]=='\0'){
                printf("C\n");
                break;
            }
            else if(a[i+1]<a[i]){
                printf("N\n");
                break;
            }
        }
    }
    else if(a[1]==a[0]-1){
        for(int i=1 ; ; i++){
            if(a[i+1]=='\0'){
                printf("D\n");
                break;
            }
            else if(a[i+1]>a[i]){
                printf("N\n");
                break;
            }   
        }
    }

    return 0;
}