//write a function to calculate length of a string
// #include<stdio.h>        //string m null character ka index hi string ki length hoti hai jaise 'Hello'iska index 4 p khatam ho rha hai pr null character 5 p to iska length 5 hoga
// int main(){              // null character = '\0'               
// char s[]="MySirg";
// printf("%d",length(s));
// }
// int length(char s[]){
//     int i;
//     for(i=0;s[i]!='\0';i++);
//     return i;
// }


//Write a Function to reverse a string
#include<stdio.h>
char* upper(char s[]);
char* reverse(char s[]);
int main(){
    char*str;
    str=upper("computer");
    printf("%s", str);
    getchar();
}
// char* reverse(char s[]){
// //     char temp[20];
// //     int l,i,j;
// //     for(l=0;s[l]!=0;i++);
// //     for(i=l-1;i>=0;i--){
// //         temp[j]=s[i];
// //     }
// //     for(i=0;s[i];i++){
// //         s[i]=temp[i];
// //     }
// //     return s;

// int i,l;
// char t;
// for(l=0;s[l]!=0;i++);
// for(i=0;i<l/2;i++){
//     t=s[i];
//     s[i]=s[l-1-i];
//     s[l-1-i]=t;
// }
// return s;

// }

// write a function to convert string into upper case
// 'a'=97, 'A'=65 , diff= 32
char* upper(char s[]){
    int i;
    for(i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
    }
    return s;
}