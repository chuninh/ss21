#include<stdio.h>

int main(){
	FILE *fptr;
	
	fptr = fopen("bt01.txt","r");//mo file
	
	//thao tac file
	char dongDauTien[100];
	fgets(dongDauTien,100,fptr);
	printf("Dong dau tiên trong file: %s", dongDauTien);
	fclose(fptr);
	
	
	return 0;
	
	
}
