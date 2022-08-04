//decision control problems
#include<stdio.h>
int main(){
    int x;
    printf("Enter any number: \n");
    scanf("%d",&x);
    if(x>=0){
        printf("Number is positive");
    }
    else{
        printf("Number is Non-positive");
    }
    // if ka kam khtm hote hi else shuru hoga agr nhi hota hai to error hogi
    //if(3!=2); mtlb if ka block empty hai and if khtm hogya or null statement nhikh skte hai


    //program to check number is even or odd
    if(x%2==0){//x ko 2 se divide krenge to remainder 0 aaega
    //if(x%2){ printf("number is odd") } -> x%2 agr zero hoga to false hojaega
    //every non zero number is true
    //zero is false
        printf("\nNumber is even");
    } 
    else{
        printf("\nNumber is odd");
    }
    // next method
    if(x/2 *2==x){ // if x/2 = integer and it is multiplied by 2 it gives x
        printf("\nNumber is even");
    }
    else{
        printf("\nNumber is odd");
    }
    //next method using bitwise operator
    if(x&1){// and gate ka use krenge 1&1=1 hoga or 0&1= 0 hoga 
        printf("\nNumber is odd");
    }
    else{
        printf("\nNumber is even");
    }

    return 0;
}