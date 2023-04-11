#include <stdio.h>
#include <conio.h>
void main(){
	char c ;
	FILE *f;
	f = fopen("abc.text","w");
	if(f==NULL){
		printf("Error");
		exit(0);
	}
	else
		while((c=getchar())!=EOF){
			putc(c,f);





		 getch();
		}








}