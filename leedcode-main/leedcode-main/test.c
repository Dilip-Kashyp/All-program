#include <stdio.h>
int main(){
    int i , j ;
  int arr[4] = {1,1,3,4};
   
   for( i = 0 ; i<4;i++){
    for ( j = 0; j < i; j++)
    {
        if(arr[i]==arr[j]){
         printf("True ");
        }
        else
        {
        printf("fales ");

        }         
    }
    
   }
   
   
   
   
   
    return 0; 

}