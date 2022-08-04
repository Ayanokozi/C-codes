//Write a function to check whether a given string contains a given pattern or not
#include<stdio.h>
#include<string.h>
//int findPattern(char str[],char p[]);
int compare(char s[],char t[]);
int main(){
    //printf("%d",findPattern("aabbabaabaaabab","aaa"));
    printf("%d",compare("computer","comp"));
    getchar();
}
// int findPattern(char str[],char p[]){
//     int i,j,k;
//     for(i=0;i<=strlen(str)-strlen(p);i++){
//         for(j=i,k=0;p[k];j++,k++){
//             if(p[k]!=str[j]){
//                 break;
//             }
//             }
//             if(k==3){
//                 return i;
//             }
//     }
//     return -1;
// }

//write a function to compare to string
int compare(char s[],char t[]){
    int i=0;
while(s[i]!='\0'&&t[0]!='\0'){    
    if(s[i]==t[i])
        i++;
    else if(s[i]>t[i])
        return 1;
    else
        return -1;
    }
    if(s[i]==0&&t[i]==0)
        return 0;
    if(s[i]==0)
        return -1;
    if(t[i]==0)
        return 1;
}