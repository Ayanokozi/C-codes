//Sorting: Arranging elements in some order 
// #include<stdio.h>
// int main(){
//     int a[]={44,71,23,98,62,54,18,12,39,58,81,29,7,58};
//     int i;
//     for(i=0;i<14;i++){
//         printf(" %d",a[i]);
//     }
//     printf("\n");
//     insertion(a,14);
//     for(i=0;i<14;i++){
//         printf(" %d",a[i]);
// }
// getchar();
// }
// void insertion(int A[], int size){     // Array lia or usa size lia
//     int i,j,temp;
//     for(i=1;i<size;i++){               // sort krne k liye i=1 se initialize kia kyuki 1st element khud se sort nhi krenge    
//         temp=A[i];                     // jis element ko sort krna hai us element ko temp m dal denge 
//         for(j=i-1;j>=0;j--){           // Ab us element ko previous elemenet se check krne k liye loop lgaya      
//         if(A[j]>temp)                  // current element ko check kia previous element se  
//         A[j+1]=A[j];                   // Agar bda hai to j+1 m daldenge mtlb swap krdenge
//         else 
//         break;                         // Agar nhi hai to aage k nhi check krenge
//     }
//      A[j+1]=temp;                      // Jis element ko check krna tha us element ko j+1 m rkh denge mtlb current elemnt jiske sath check kr rke the 
//     }
// }

// Write a functiom to calculate ferequency of distinct element of the array
// 2 2 1 1 2 2 2 1 3 3 3 3 3 4 4 4 3
// 2 -> 5
// 1 -> 3..  
#include<stdio.h>
int main(){
    int a[]={2,2,1,1,2,2,2,1,3,3,3,3,3,4,4,4,3};
    int i;
    for(i=0;i<17;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    insertion(a,17);
    for(i=0;i<17;i++){
        printf(" %d",a[i]);
}
frequency(a,17);
getchar();
}
void frequency(int A[],int size){           // phle to jo element hai unko sosrt krlenge isse ye pta chl jaega ki kha tak count krna hai         
    int count,i=0,j;                        // iske liye hm 1 variable lenge count or i and j          
    while(i<size){                          // check hoga ki i ki value size se choti honi chahiye
       count=1;                             // count ko initialise krenge 1 se
        j=i+1;                              // j k andar i+1 kr denge kyuki count ko 1 leke chlenge to next value se check hoga
    while(j<size&&A[i]==A[j]){              // jb jb index ki value same aati jaegi  
        count++;                            // count m increment kr denge 
        j++;                                // or j m bhi (next element ko check krne k liye jb tak false na ho jae
    }
    printf("\n%d-%d",A[i],count);           // frequency ko print kra denge
    i=j;}                                   // or i m j ki value daldenge
}
void insertion(int A[], int size){     
    int i,j,temp;
    for(i=1;i<size;i++){               
        temp=A[i];                      
        for(j=i-1;j>=0;j--){                
        if(A[j]>temp)                   
        A[j+1]=A[j];               
        else 
        break;                       
    }
     A[j+1]=temp;                     
    }
}