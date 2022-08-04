//swapping of values of two int type variables
//This question can't be solved if you made it first time
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("\nSwapped numbers: %d %d",b,a);// -> ye glt trika hai mind develop nhi hoga
    //printing on the screen is not the target
    // a=b;
    // b=a;
    // printf("Swapped numbers: %d %d",a,b); -> yha p "a" m to b dal dia pr a ki value nhi rhi usme b ki value aa gyi 
    //ye bhi glt trika hai
    int c;
    c=a;// isme hmne a ko tisre variable m store kraya taki a ko use krske tisre variable k through
    a=b;
    b=c;
    printf("\nSwapped numbers: %d %d",a,b);
    //swapped without third variable
    int x=10,y=20;
    x=x+y;// x k andar hm dono ka sum dalre, x =20+10= 30;
    y=x-y;// y k andar jo sum tha usme se y nikal denge mtlb y m x aa jaega, y= 30-20 = 10; 
    x=x-y;// ab x m hm sum - subtraction krdenge mtlb x m y ki value aa jaegi, x=30-10 = 20;
    printf("\nswapped numbers: %d %d",x,y); 
    // without using + - operators
    x=x*y;
    y=x/y;
    x=x/y;
    printf("\nSwapped numbers: %d %d",x,y);
    //without using * / operators
    // using bitwise operators
    //xor= ^
    //0^0=0; 0^1=1; 1^0=1; 1^1=0;
    x=x^y;// x = x^y -> 10^20=30;
    y=x^y;// y = x^y -> 30^20=10;
    x=x^y;// x = x^y -> 30^10=20;
    printf("\nSwapped numbers: %d %d",x,y);
    // logic should be written in one line
    y=(x+y)-(x=y);// isme x m hmne y daldia fir x+y sove hua or 20 m se subtract hua -> y= 30-(x=y) 
    printf("\nSwapped numbers: %d %d",x,y);
    getchar();

} 