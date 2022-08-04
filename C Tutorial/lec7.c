//write a program to print english alphabets in lower case
#include<stdio.h>
void main(){
//     char k='a';       // ek character lia k usko 'a' initialize kia 
//     while(k<='z'){       // while loop m 'a' ko z se chota ho ya equal ho condition aply  
//     printf("%c ",k);
//     k++;
// }

// program to calculate sum of first n natural number 
int i,n,a=0;
printf("Enter any number: ");
scanf("%d",&n);
//printf("%d",n*(n-1)/2);
//with loop
// for ( i = 1; i <= n; i++)        // for(i=1,a=0;i<=n;a=a+i,i++)
// {                                //  printf("sum is %d",a)
//     a=a+i;                       // it will also work in this form as for loop includes "2;" and in this we includes it as well if  
//     /* code */                   // it is in one statement it can be written as above
// }
// printf("%d",a);


// program to print first n terms of the series:
// like this: 1 3 6 10 15.... 
int x=0;                         // ye series print krane k liye loop m hi print krao values ko  
printf("Series will be: ");
for(i=1;i<=n;i++){                // sum of first n natural number ko print kra rhe or kuch nhi  
    //x=x+i;    // 1,3,6,10,15..
      x=i*i+1;     // 2,5,10,17,26,37... isko 1,2,3,4,.. inka square krke 1 add krdo mtlb logic simple use krne hai 
    printf("%d ",x);
}

}