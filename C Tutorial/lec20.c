//write a function to find the sum of array element
#include<stdio.h>
int main(){
    int a[]={70,20,90,650,150};
    int n;
    printf("Enter the number of rotation:");
    scanf("%d",&n);
    // printf("Sum is %d",sum(a,5));      // sum(a,5) m 'a' jo hai vo array ka address hai 1 trh se constant pointer ki trh behave krega 
    // printf("\nGreatest index is %d",greatestindex(a,5));    


    for(int i=0;i<5;i++){
        printf(" %d",a[i]);
    }
    rotaten(a,5,n);               //  n times rotate krane k liye rotaten function call kraya 
    printf("\n");
    for(int i=0;i<5;i++){
        printf(" %d",a[i]);
    }

    getchar();
}

// int sum(int A[], int size){            // isko do tarike se kr skte hai pointer se or array se 
//     int s,i;                           // Array ko initialize kraenge size variable lenge or    
//     for(i=0,s=0;i<size;i++){           // Array ka index 0 se start hota hai to 
//         s=s+A[i];                      // Values ko s variable m store krate jaenge or return kr denge 
//     } 
//     return s;
// }

// // function to find greatest element in an array 
// int greatestindex(int A[],int size){
//     int i,max,maxindex;
//         max=A[0];             // man lo ki greatest value A[0] m hai 
//         maxindex=0;           // or isme index ki value rkh li  
//         for(i=1;i<size;i++){    
//             if(A[i]>max){          //condition lgai ki agar current index bda hai max se to
//                 max=A[i];          // max ko assign kro A[i]
//                 maxindex=i;        // or maxindex ko assign kro i
//             }
//         }
//         return maxindex;
//     }

// function to ratate an array elements by one position towards right
void rotate(int A[],int size){
    int i,temp;
    temp = A[size-1];            // array ki last value ko temp m da dia 
    for(i=size-2;i>=0;i--){      // loop hmne ulta lgaya kyuki agar A[0] ki value A[1] m aaegi to A[1] ka data lost ho jaega
        A[i+1]=A[i];             // isliye hmne second last value ko last value k index m shift kraya  
    }                            
    A[0]=temp;                   // ab last m A[0] ki value empty hogi isme temp ki value assign kradenge 
}

// rotate towards right for n no. 
void rotaten(int A[],int size,int n){       // n times rotate krvana hai to void rotate vale function n times chl va lo to req o/p mil jaega 
    while(n--){                             // while loop lgaya n-- k liye hr bar n km hota jaega or 0 aane pr false hojaega
        rotate(A,size);                     // rotate function ko call kraya, n times call hojaega
    }                                       // isko loop k andar loop se bhi solve kia ja skta hai 
}