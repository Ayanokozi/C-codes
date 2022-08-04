//write a recursive to find nth term of the fibonacci series
// 0 1 1 2 3 5 8 13 21...
// #include<stdio.h>                     
// int main(){
// int n;
// printf("Enter any value: ");
// scanf("%d",&n);
// printf("%d",fibo(n));
// }
// int fibo(int n){                          //hme fibonacci ki nth term nikalni hai series nhi
//     if(n==1||n==2){                       // n=1 ya n=2 ko direct return kra denge 
//         return n-1;
//     }
//     return fibo(n-1)+fibo(n-2);            // small number k liye to thik hai pr bde number k liye isko bhot bar call hoga  
// }                                          // or ye 1 hi function bar bar call kra hai, iske liye hm memorise krenge array ka use krke 



// hm isme value ko array m daldenge or jb hme value chahiye to direct utha lenge vrna calculate krke array m store kra lenge
//This is called Dynamic Programming, Data structure is very helpful for this kind of code efficiency 
// #include<stdio.h>   
// int F[100];                  
// int main(){
//     int i;
//     for(i=0;i<=99;i++){                  //Array k andar hm values ko store kraenge taki unko dbara calculate na krna pde
//         F[i]=-1;                         //initially sbme vale -1 assign kr denge
//     }
// int n;
// printf("Enter any value: ");
// scanf("%d",&n);
// printf("%d",fibo(n));
// }
// int fibo(int n){                          
//     if(F[n-1]!=-1){                       //agar nth term ki value -1 mtlb array m value calculate ho gyi hai to
//         return F[n-1];                    // retur the value 
//     }
//     if(n==1||n==2){                      // n=1 or n=2 aane pr array m dado unki values ko
//         F[n-1]=n-1;
//     }
//     else{
//         F[n-1]=fibo(n-1)+fibo(n-2);         // nhi to claculate the value of nth term and store value in the array dubara jb cal hoga  
//     }                                       // to array se hi direct vlaue utha lega
//     return F[n-1];            
// }                       


//Factorial program to be solved using dynamic programming approach
#include<stdio.h>
int F[100];
int main(){
    int i,n;
    printf("Enter any value: ");
    scanf("%d",&n);
    for(i=0;i<=99;i++)
    F[i]=-1;
    printf("%d",fact(n));
    getchar();
}
int fact(int n){
    // if(n==0||n==1){
    //     return 1;
    // }
    if(F[n-1]!=-1){
        return F[n-1];
    }
    if(n==0||n==1){
        F[n-1]=1;
    }
    else{
        F[n-1]=n*fact(n-1);
    }
   return F[n-1];
    //return n*fact(n-1);
}