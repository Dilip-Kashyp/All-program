#include <stdio.h>
#include <stdlib.h>
struct myarr{
    int total_size;
    int used_size;
    int *ptr;
};
void createarr(struct myarr *a, int tsize , int usize ){
    a->total_size = tsize;
    a->total_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));

}
void set(struct myarr *a){
    for ( int i = 0; i < a->total_size; i++)
    {
        printf("enter the %d element\n",i);
        scanf("%d",&(a->ptr)[i]);
    }
    
}
void show(struct myarr *a){
    for ( int i = 0; i < a->total_size; i++)
    {
        printf("%dth elements\n",i);
        printf("%d\n",(a->ptr)[i]);
    }
    
}
int main(){
    struct myarr marks ;

    createarr(&marks ,10,3);
    set(&marks);
    show(&marks);



    return 0;
}