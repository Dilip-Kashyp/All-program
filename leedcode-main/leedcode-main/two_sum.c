#include <stdio.h>
int* twosum(int *arr , int size , int target);
int main(){

    int arr[4] = {2,7,11,15};
    int *index = twosum(arr,4,9);
    printf("%d %d\n",index[0],index[1]); 
       return 0;
}
int* twosum(int *arr , int size , int target){

    int indices[2];
    int num1 = -1;
    int num2 = 1;
    int i , j ;
    for(i=0 ; i < size ; i++){
        for(j=0;j<size;j++){
            if (i!=j)
            {
                if(arr[i]+arr[j]==target){
                    num1=arr[i];
                    num2=arr[j];

                }
            }
            
        }
    }
    indices[0]=num1;
    indices[1]=num2;

    return indices;
    
}