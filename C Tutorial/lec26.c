//Write a function to sort city name 
#include<stdio.h>   // hme array of string chahiye
#include<string.h>
void sort_strings(char city[][20],int n);
int main(){      
    int i;
    char cities[16][20]={
        "Durgapur", "Bhubaneshwar","Ajmer","Bhakura","Dharampur","Muzaffarpur","Patna","Jaunpur","Satara","New Delhi","Pune",
        "Gorakhpur","Chaapra","Rajbandh","Kanpur","Kolkata"};
    // for(i=0;i<=15;i++)
    // puts(cities[i]);
    sort_strings(cities,16);
    for(i=0;i<=15;i++)
    puts(cities[i]);
    getchar();

}
void sort_strings(char city[][20],int n){
    int i,round;
    char temp[20];
    for(round=1;round<=n-1;round++){   //logic of bubble sort is using here, bubble sort m do values compare hoti hai or jo sbse bdi value  
        for(i=0;i<=n-1-round;i++){                 //hoti hai vo last m phuch jati hai round k khtm hone pr aise hi baki sari value 
            if(1==strcmp(city[i],city[i+1]))     //phle loop lgaya round k liye jitne element hai usse 1 km  
            {                                    //or 2nd loop m compare kitni bar hoga vo chlana hai  
                strcpy(temp,city[i]);            //loop m jb phla element apni jgh pr phuch jaega tb use compare krne ki jraurat nhi
                strcpy(city[i],city[i+1]);       //strcmp compare krara hai do element ko
                strcpy(city[i+1],temp);          //strcpy yha pr string element ki swapping krra hai
            }
        }
    }
}