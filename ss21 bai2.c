#include<stdio.h>

int main(){
	FILE *fptr;
	
	fptr = fopen("bt01.txt","r");//mo file
	
	//thao tac file
	char dauTien = fgetc(fptr);
	printf("ky tu dau tien trong file la %c\n",dauTien);
	fclose(fptr);
	
	
	return 0;
	
	
}
