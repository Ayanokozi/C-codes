//write a recursive function to calculate sum of digit of a given number 
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Sum = %d",sumD(n));
    printf("\nAnswer will be: %lf",pow(4,2));
}
int sumD(int n){
    if(n==0)
    return 0;
    return n%10+sumD(n/10);
}

//recursive function to calculate x^y
double pow(double x,double y){
    if(y==0){
        return 1;
    }
    if(y>0){
        return x*pow(x,y-1);
    }
    if(y<0){
        return 1/x *pow(x,y-1);          //1/x m int hoga to 0 aaega isliye double lgaya
    }

}
