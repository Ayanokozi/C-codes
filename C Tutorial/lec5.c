//program to print greatest number among 3 numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    // if(a>b>c){             -> isme result is trh se aaega ki a or b solve hoga fir jo result aaega vo c se solve hoga
    //     printf("%d",a);       is trh se operators ka istmal nhi kia jana chahiye 
    // }                         ye 3 alag alag if hai apas m connected bhi nhi hai
    // if(b>a>c){                 
    //     printf("%d",b);
    // }
    // if(c>a>b){
    //     printf("%d",c);
    // }


    // if(a>=b&&a>=c){           -> isme glti hai ki same number vale 2 variable 2bar print hojaenge hme 1 bar krna hai 
    //     printf("%d",a);           mtlb hmari sari conditions ko satisfy nhi krra h
    // }
    // if(b>=a&&b>=c){
    //     printf("%d",b);
    // }
    // if(c>=a&&c>=b){
    //     printf("%d",c);
    // }


    // if(a>=b&&a>=c){           // -> ye shi hai but isme unnecessary checking horhi hai or program ki complexity increase ho rhi hai 
    //     printf("%d",a);           
    // }
    // if(b>a&&b>=c){
    //     printf("%d",b);
    // }
    // if(c>a&&c>b){
    //     printf("%d",c);
    // }

    // if(a>=b&&a>=c){          // -> ye shi hai isme unnecessary checking nhi nhi hori but abhi bhi bhot operations perform krna pdra
    //     printf("%d",a);      //    isme hme bhot operation perform krne pdre, ise bhi shi kia ja skta hai jaise  
    // }
    // else{
    //     if(b>=a&&b>=c){      //    if(b>c) -> ye abhi bhi vaise hi kam krega 
    //     printf("%d",b);
    // }
    // else{
    //     printf("%d",c);
    // } 
    // }

//     if(a>b){                    // -> ye sbse shi operation hai kyoki isme jada operation check krne nhi pdre  
//         if(a>c){                //    isme hm 2 operation ko check krke bhi final result p aajate hai 
//               printf("%d",a);
//         } else{        
//         printf("%d",c);           
//     }}
//     else{
//         if(b>c){
//         printf("%d",b);
//     }
//     else{
//         printf("%d",c);
//     }}
    
// // conditional operators ka use krke or chota kia jaskta hai
//     if(a>b){                    // -> ye sbse shi operation hai kyoki isme jada operation check krne nhi pdre  
//         a>c?printf("%d",a):printf("%d",c);           
//     }                          //    isme hm 2 operation ko check krke bhi final result p aajate hai
//     else{
//         b>c?printf("%d",b):printf("%d",c);
//     }

    // thoda or conditional operator ka use kr skte hai 
    //  a>b? a>c?printf("%d",a):printf("%d",c):b>c?printf("%d",b):printf("%d",c);
    //  printf k andar bhi expression likha ja skta hai 
    printf("%d",a>b? a>c?a:c:b>c?b:c);
    return 0;
}