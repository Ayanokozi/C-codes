//program to write a function; to calculate sum of two numbers (takes nothing return nothing)
//for returns nothing we use void because it returns nothing 
// takes nothing means () ye khali rhenge 
// program m main function read hota hai uska hi check hoga kya kya hai isme 
#include<stdio.h>
// void sum(){
//     int a,b,c;
//     printf("Enter any two numbers: ");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("sum is %d",c);
// }
// int main(){
//     sum();


//sum of two numbers (Takes something return nothing)
    //paranthesis () <- ye khali nhi rhenge 
    // () yha pr input variables lenge 
    //iski value main function se mil jaegi
// void sum(int a,int b){
//     int c;
//     c=a+b;
//     printf("sum is %d",c);
// }
// int main(){
//     sum(3,4);

// this time (takes nothing return something)
//() -> ye khali rhenge or retrn something m kuch aaega 
// int sum(){
//     int a,b,c;
//     printf("Enter any two numbers: ");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     return c;              // result ko print nhi kraenge result ko return krrenge  
// }                          // koi bhi function return keyword ki help se 1 hi value return kr skta hai kisi bhhi trh ki 
//                            // return; ye bhi shi hai but garbage value return hogi, hm yha return a+b; ye bhi likh skte hai  
// int main(){                
//     int s;                        
//     s=sum();                       // return c krenge to vo value sidha sum(); m aajaegi hm us value ko dusre variable m store kralenge
//     printf("Sum is %d",s);         // yha hm c nhi likh skte b/c c variable main function m nhi bna hai vo sum function m bna hai vo ek local variable hai
//      }                             // isko aise bhi likh skte hai printf("sum is %d",sum());



//(Takes Something Returns Something)
// int sum(int a, int b){                // function define krate hue jo () m hota hai usse formal argument khte hai
//     return a+b;
// }
// int main(){
//     int x,y;
//     printf("Enter any number: ");
//     scanf("%d%d",&x,&y);                //sum(x,y);  function call krate vakt paran..() m jo likhte hai unhe khte hai actual argument  
//     printf("Sum is %d",sum(x,y));
//     getchar();
//     // agar hme 1 se jada value return krani hai to pointers ya structure ki help se kr skte hai    
// }


//program of function to calculate area of a circle (Take something return something)
// float area(int r){
//     float c;
//     c= 3.14*r*r;
//     return c;
// }
// int main(){
//     int x;
//     printf("Enter the radius of a circle: ");
//     scanf("%d",&x);
//     printf("Area of a circle is %f",area(x));
//     getchar();
// }



// function to check number is even or odd function will return 1 if number is even and retrn 0 if number is odd (TSRS)
// int num(int x){
//     if(x%2==0){
//         return 1; 
//     } 
//     else{            //if we replace else here even then it can also works 
//         return 0;
//     }
// }
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printf("Number is %d",num(n));

// }


// int num(int x){
//     return x%2==0;      //ye true hoga to return hoga 1 agr false hoga to return hoga 0
//     }         
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     if(num(n))              // agr num(n) ki vlaue 1 return hoti hai to true hai vrna else m jaega 
//     printf("Even");
//     else
//     printf("Odd");
//     getchar();
// }

//function for factorial of a number(TSRS)
// int fact(int x){
//     int i=1;
//     for(;x;x--)
//     i=i*x;
//     return i; 
// }
// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     printf("factorial is %d",fact(n));

//     getchar();
// }


//function to find number of +ve combinations can be made out of n items, r selected at a time, permutation and combination ka saval hai 
 int fact(int x){
    int i=1;
    for(;x;x--)
    i=i*x;
    return i; 
}
int combi(int n,int r){
    return fact(n)/fact(n-4)/fact(r);
}
int main(){
    int c,y;
    printf("Enter any number: ");
    scanf("%d%d",&c,&y);
    printf("combination is %d",combi(c,y));

    getchar();
}
