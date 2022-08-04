//pointers 
#include<stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
    printf("Enter two numners: ");
    scanf("%d%d",&a,&b);           //hme apne variable m changes krvane hai user se to usko(pointer ko) address dena hoga in variable ka
    printf("a=%d b=%d",a,b);
    swap(&a,&b);                 //pointers ka use hoga kyuki function m jo kam hoga uska frk yha nhi pdega isliye a,b ko
    printf("\na=%d b=%d",a,b);   //adress bna dia 
    return 0;
}
void swap(int *x,int *y){      //pointers ko * k jriye represent krte hai iska mtlb x variable a ka adress stroe krke rkhega
    int t;                     //kisi bhi variable k aage * lga denge to ye vo variable bn jaega jis variable ko ye point krra hoga
    t=*x;                      
    *x=*y;
    *y=t;
}

