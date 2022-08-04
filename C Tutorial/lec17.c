#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Product is %d",product(n));
    printf("\nfact is %d",fact(n));
    printf("\n%d",even(n));
    printf("\n%d",square(n));
    printf("\nbinary number will be: %d",binary(n));
    getchar();
}
int product(int n){
    if(n==1)
    return 1;
    return n*product(n-1);

}

int fact(int n){
    if(n==1||n==0)
    return 1;
    return n*fact(n-1);
}

//sum of first even natural no.
int even(int n){
    if(n==1)
    return 2;
    return 2*n+even(n-1);
}


//sum of squares of 1st natural no.
int square(int n){
    if(n==1)
    return 1;
    return n*n+square(n-1);
}


//binary equivalent of a decimal number 
int binary(int n){
    if(n==0)
    return 0;
    return n%2+10*binary(n/2);
}