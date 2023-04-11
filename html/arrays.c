#include <stdio.h>
int main(){
    int a[3];
    printf("Enter the value  \n");
    scanf("%d",&a[0]);

    printf("Enter the value  \n");
    scanf("%d",&a[1]);

    printf("Enter the value \n");
    scanf("%d",&a[2]);

    if(a[0] > a[1])
    {
        if(a[0] > a[2])
            printf("%d is higher age\n",a[0]);
                else
                  printf("%d is higher age\n",a[2]);
    }
    else 
        if(a[1] > a[2])
            printf("%d is higher\n",a[1]);
                else
                    printf("%d is higher \n",a[2]);

    

    return 0;
}
