//Write a recursive function to print first N natural number 
// function calling itself is called recursion
#include<stdio.h>                       //recursion ko krne ka 3 rule
int main(){
    int n;                               // phle to ye smjo ki jo function bnana hai vo phle hi bn chuka hai
    printf("Enter the number: ");        //1. num(n)-> 123456789....n      
    scanf("%d",&n);                      // kisi function ko dobara call krta pr phle simpler version k liye call krta hai   
    num(n);                              //2. num(n-1)-> isme call kra rhe bs isme n ko nhi cha rhe hai uske liye n ko alag se print kra denge
    printf("%d",num(n));                            //3. kb aisa hoga jb n ki value call nhi hogi if (n==0)  
}
// void num(int n){
//     if(n>0){
//     num(n-1);
//     printf("%d ",n);
//     }
// }

//write a recusive function to print N natural number in recursive order
// void num(int n){
//     if(n>0){
//     printf("%d ",n);
//     num(n-1);
//     }
// }


//print squares of first n no.
// void num(int n){
//     if(n>0){
//     num(n-1);
//     printf("%d ",n*n);
//     }
// } 


//print first even no.
// void num(int n){
//     if(n>0){
//     num(n-1);
//     if(n%2==0){
//         printf("%d ",n);
//     }
//     }
// }


//print first odd no.
// void num(int n){
//     if(n>0){
//     num(n-1);
//     printf("%d ",2*n-1);
//     }
// }


//print sum of first n no.
int num(int n){            // ye function take something and return something
    if(n==1)               // sum(n)= 1+2+3+....+n
    return 1;              // sum(n-1)=  1+2+3...+(n-1)
    else                   // n+sum(n-1)=  1+2+3...+(n-1)
    return n+num(n-1);     // n==1 return 1
}