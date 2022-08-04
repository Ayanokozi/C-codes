//loop building with c language 
//three steps rule -> 1. understand problem, 2. Test cases, 3. Dry run 
// program to print first 10 naturaal numbers
#include<stdio.h>
int main(){
    // int i;                 // hmne i ka variable lia  
    // for(i=1;i<=10;i++){    // for loop lgaya i ko 1 initialize kia fir condition check ki fir body m gye 
    //     printf("%d",i);    // isme hmne i ki jo value hai use hi print kra dia  
    // }                      // ab dobara for k pass jaega , but it will first increment i++ the check condition and then goes into the body
    
    
   // int i=1;
    // while(i<=10){           // while loop ko kabhi bhi variable k nam se print nhi krate isko variable ki value se condition ko pdte hai 
    //     printf("%d",i);     // same i ko print ka denge 
    //     i++;                // ab  previous i m increment krenge 
    // }                       // ab while k pas vapas jaenge or condition check krenge

// program for printing 10 natural numbers in reverse order

// int i=10;             // 10 ko initiale kia
// while(i<=10){            // condition check kri i<=10 
//     printf("%d ",i);    // print i
//     i--;               // i decrement
//     if(i==0){          // i used here if condition because while condition is showing that every number less than 10 is going to print 
//         break;         // it creates infinite loop to break that infinite loop I used break here to break the code or stop it
//     }

    // int i=10;         
    // while(i>=1){          // isme condition lgai ki i=10 ki value 1 ya 1 se bdi hogi
    // printf("%d ",i);      // ab hm i print kraenge 
    // i--;                  // i m decrement krenge
    // }

    //  int i=1;           //  i ki vlue 1 li
    // while(i<=10){            // i ki value 10 ya 10 se choti ho
    // printf("%d ",11-i);      // printf("%d",i=11-i); isme ye problem hori thi ki i=10 m value bnri thi jo next step m increment hoke 11 
    // i++;                     // ho jaega or while ki condition false ho jaegi, but hme iski jaroorat hi nhi hai hme value store hi nhi krani
    // }                       // direct logic ko chlne do
      
// program for first n odd natural number  

    //  int a=1,n;
    //  printf("Enter no. of odd natural number");
    //  scanf("%d",&n);
    //  while(a<=2*n){          //odd bhi or even bhi hai pr hme sirf odd print krne hai
    //      if (a%2!=0)          // if ki condition lgai 
    //      {                   
    //          printf("%d ",a);   
    //          /* code */
    //      }
    //      a++;}

    //  while(a<=n){                     // bina if ka use kre or 2*n kre
    //          printf("%d ",2*a-1);        //   a=1, 2*1-1=1 , 2*2-2=3 like this it will print the whole series 
    //      a++;
    //  }
   
 
     }

