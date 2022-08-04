#include<stdio.h>
int main(){
    // int i=1;
    // do                       // i=1 chla do ki body m gya 
    // {
    //     printf("%d",i);      // print kia i=1
    //     i++;                // i ki value 2 hui 
    //     /* code */
    // } while (i=i-2);          // condition lgi i=i-2 -> i=2-2=0, i=0 hui zero is false end of the loop  

  // program to reverse the number

//   int n,i=0,x;
//   printf("Enter the number");
//   scanf("%d",&n);
//   while(n>0){
//       x=n%10;
//       n=n/10;
//       i=i*10+x;
//   }
//   printf("%d",i);


int n,i=0,x,count=0,lock=1;
  printf("Enter the number");
  scanf("%d",&n);
  while(n>0){              
      
      x=n%10;
      if(x==0&&lock){          // agr remaider 0 aata hai to count m increment hoga 
          count++;            // if condition m x==0 ho bhi agar lock 0 hai to condition false hojaegi or count m increment nhi hoga 
      }
      else{                   
          lock=0;              // or agar non zero aata hai to lock zero ho jae fir dobara kbhi 0 aaya to vo 
      }
      n=n/10;
      i=i*10+x;
  }
  while (count)              // ye iske liye taki last m jo 0 aae hai unko print kra le count ki value k acc.
  {
      printf("%c",'0');
       count--;
  }
  printf("%d",i);
}