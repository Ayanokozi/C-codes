//write a function to to check whether a given number is prime or not. (TSRS)

// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     if(n=0){
//         printf("Prime no.");
//     }
//     else
//     printf("Not prime");  
// } 
// int Isprime(n){
//     int i;
//     for(i=2;i<n-1;i++);
//     {
//         if(n%i==0){
//             n=0;
//             return n;
//             }   
//     }
//     n=1;
//     return n;
// }


// int main(){
//     if(isprime(10)){
//         printf("Prime no.");
//     }
//     else
//     printf("Not prime");  
//     return 0;
// } 
// int isprime(int n){
//     int i;
//     for(i=2;i<n;i++);
//     {
//         if(n%i==0){
//             return 0;
//             }   
//     }
//     return 1;
// }


//write a fumction to print all prime number from a to b, where values of a and b are taken as argument

// #include<stdio.h>
// int main(){
//     // int a,b;
//     // printf("Enter numbers: ");
//     // scanf("%d %d",&a,&b);
//     printPrime(10,20);
//     return 0;
// }
// void printPrime(int a,int b){                   // ye kuch bhi return nhi karra hai ye print krra hai isliye void bmaenge
// int x;                           // hmne jo function bna lia hai usko bar bar use kr skte hai yhi isi khoobsurti hai prime check ka
// for(x=a;x<=b;x++)                // course bnana nhi hai use use krna hai     
//     if(isPrime(x))
//     printf("%d ",x);
// }
// int isPrime(int n){
//     int i;
//     for(i=2;i<n;i++)
//         if(n%i==0)
//             return 0;
//     return 1;
// }



//write a function to find next Prime of a given number
// #include<stdio.h>
// int main(){
//     printf("%d",nextPrime(45));
//     return 0;
// } 
// int nextPrime(int n)           //next prime number print krana hai to 
// {
//     while(!isPrime(++n));      // function k andar isPrime ko call kraya or pre increment kia n me , ab hme chahiye ki ye tb tk 
//     return n;                  // increment ho jb tak next prime na mil jae isliye loop lgaya or loop ko end krne k liye not lgaya 
// }                              // condition m fir jo n ki value bni use return kra dia 
//     int isPrime(int n){
//     int i;
//     for(i=2;i<n;i++)
//         if(n%i==0)
//             return 0;
//     return 1;
// }
