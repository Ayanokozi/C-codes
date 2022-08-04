//area of a circle
#include<stdio.h>
int main(){//main is a function, int is a return type which return integer value  
    int r;
    float area;
    printf("Enter radius of a circle ");
    scanf("%d",&r);
     area=3.14*r*r;
    printf("Area of a circle %f",area);
    // average of a three numbers
    int a,b,c;
    float avg;
    printf("\nEnter three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;//if integer is divided by integer then answer will always be integer
    printf("Average of the three numbers is %f",avg);//float me integer value hogi to kam nhi krega float value hi hona chahiye
    //print only last digit of a given number 
    int x,y;
    printf("\nEnter a number ");
    scanf("%d",&x);
    y= x%10;
    printf("LAst digit will be %d",y);
    return 0;// it return 0 here to the operting system
    // agar ham return 1 likhenge to matlab operating system to pta chlega ki program kuch resources ko use kr rha tha or us m kuch problen thi ab OS jane ki uska kya krna hai
    // void main mtlb OS ko kuch inform nhi krna chahte , kuch return na krane se hmare program p frk nhi pdega

}
