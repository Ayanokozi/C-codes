#include<stdio.h>
void main(){
    int x=5;
    char c;
    int y=6;
    printf("\"Hello World\"");
    //Any string can be printed in above form with " "
    printf("\n Value of x is %d",x);
    printf("\n sum of %d and %d is %d",x,y,x+y);
    printf("\n x and y is %d %d",x,y);
    printf("\nEnter any charcter ");
    c=getchar();
    printf("\n%c is %d",c,c);
    getchar();
}
