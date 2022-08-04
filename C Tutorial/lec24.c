//write a function to count the number of vowels
#define true 1
#define false 0
typedef int bool;
#include<stdio.h>
int vowels(char s[]);
bool AlphaNumeric(char s[]);
int main(){
    printf("%d",AlphaNumeric("abc1234"));
    getchar();
}
// int vowels(char s[]){
// //     int i,count;
// //     for(i=0,count=0;s[i];i++){
// //         if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
// //         count++;
// //     }
//        int i,j,count;
//        char v[]="aeiouAEIOU";
//        for(i=0,count=0;s[i];i++){
//            for(j=0;v[j];j++){
//                if(s[i]==v[j]){
//                count++;
//                break;}
//            }
//        }
//        return count;
// }
bool AlphaNumeric(char s[]){
    int i;
    bool alpha=false, digit=false;
    for(i=0;s[i];i++){
        if(s[i]>='0'&& s[i]<='9'){
            digit=true;
        }
        if(s[i]>='a'&&s[i]<='z'|| s[i]>='A'&&s[i]<='Z'){
            alpha=true;
        }}
        if(digit&&alpha)
            return true;
        return false;
}
