#include<stdio.h>
//Define a Structure to store time(Hours,minutes,Seconds)
//Define a fucntion to set time 
//Take Someting return nothing
struct Time setTime(int x,int y,int z);
//void setTime(struct Time *p,int x, int y, int z);
struct Time
{
    int hr,min,sec;
    /* data */
};

// void setTime(struct Time *p,int x, int y, int z){
//     p->hr=x;
//     p->min=y;
//     p->sec=z;
// }
// int main(){
//     struct Time t1;
//     setTime(&t1,3,40,30);
//     return 0;
// }

//take something return something
int main(){
    struct Time t1;
    t1=setTime(3,40,30);
}

struct Time setTime(int x,int y,int z){
    struct Time t; 
    t.hr=x;
    t.min=y;
    t.sec=z;
    return t;
}
  