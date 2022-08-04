//write a function which reads four arguments and return the greatest of them.
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//         scanf("%d%d%d%d",&a,&b,&c,&d);
//         int ans = max_of_four(a,b,c,d);
//         printf("%d",ans);
//         return 0;
//     }
//     int max_of_four(int a,int b,int c, int d){
//         int max;
//         if (a>b)
//         {
//             max=a>c?a>d?a:d:c>d?c:d;
//             /* code */
//         }else
//         {
//             max=b>c?b>d?b:d:c>d?c:d;
//         }
//         return max;
        

//     }
#include<stdio.h>
int main(){
    int n,i,j,k,r=0;
    printf("Emter any number: ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        i<=n?r++:r--;
        k=n;
        for (j=1;j<=2*n-1; j++)
        {
            if(j>=r&&j<=2*n-r){
                printf("%d",k);
            }
            else{
                if(j<n){
                    printf("%d",k);
                    k--;
                }
                else{
                    k++;
                    printf("%d",k);
                }
            }

            
        }
        printf("\n");
    }

}