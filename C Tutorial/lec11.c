#include<stdio.h>
#include<math.h>
int main(){
    // int a,b;
    // for ( a = 1; a <=5 ; a++)
    // {
    //     for ( b = 1; b <=2*a-1 ; b++)
    //     {
    //         printf("%d",b);
    //         /* code */
    //     }
    //     printf("\n");
    //     /* code */
    // }

//program for prime number
// int n,x,i,k=1;
// printf("Enter any number: ");
// scanf("%d",&n);
//if(n==1){
// printf("enter number is prime")
//}
// for(i=2;i<n;i++){
//      x=n%i;
//      if(x==0){
//          k=x;
//          i>n;
//      }
//      }
//      if(k!=0){
//          printf("Number is prime");
//      }else{
//          printf("numner is not prime");
//     }    


// int n,i;
// printf("Enter any number: ");
// scanf("%d",&n);
// for(i=2;i<n;i++){
//     if(n%i==0){
//         printf("Number is not prime");
//         break;
//     }
//     }
//     if(i==n){
//         printf("Number is prime");
//     }
     
//     int n,i;
// printf("Enter any number: ");
// scanf("%d",&n);
// for(i=2;i<=n/2;i++){
//     if(n%i==0){
//         printf("Number is not prime");
//         break;
//     }
//     }
//     if(i==n/2+1){
//         printf("Number is prime");
//     }
   

   int n,i,s;
printf("Enter any number: ");
scanf("%d",&n);
s=sqrt(n);
for(i=2;i<=s;i++){
    if(n%i==0){
        printf("Number is not prime");
        break;
    }
    }
    if(i==s+1){
        printf("Number is prime");
    }
}