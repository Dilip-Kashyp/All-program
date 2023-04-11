#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	char c ;
	FILE *f;
	//clrscr();
	f = fopen("SELF_PRI.c","r");
	if(f==NULL){
		printf("Error");

	}
	else
		while((c=getc(f))!=EOF){
			printf("%c",c);
			}
 return 0;
 // getch();
		}