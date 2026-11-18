// #include <stdio.h>
// int main()
// {
//     int V,rema,remb;
//     scanf("%d",&V);
//     for(int i=1 ; V!=0 ; i++){
//         rema=V%16;
//         if(i==1){
//             remb=rema;
//             continue;
//         }
//         int temp;
//         temp= rema;
//         rema=remb;
//         remb=temp;
//         printf("%d",remb);
//         remb=rema;
//         V=V/16;
//         if(rem>9){
//             if(rem==10){
//                 printf("A");
//             }
//             else if(rem==11){
//                 printf("B");
//             }
//             else if(rem==12){
//                 printf("C");
//             }
//             else if(rem==13){
//                 printf("D");
//             }
//             else if(rem==14){
//                 printf("E");
//             }
//             else if(rem==15){
//                 printf("F");
//             }
//         }
//         else{
//             printf("%d",rem);
//         }
//     }

//     return 0;
// }