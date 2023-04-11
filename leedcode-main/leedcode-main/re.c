#include <stdio.h>
void table(int );
int main(){

    int x = 2;

    table(x);


    return 0;
}
void table( int x ){
    static int a=1;
    if(a<=10){ 
            
             printf("%d X %d = %d \n",x ,a,x*a);
        a++;
        table(x);
        }


}