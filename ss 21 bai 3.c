#include<stdio.h>

int main(){
	FILE *fptr;
	
	fptr = fopen("bt01.txt","a");//mo file
	
	//thao tac file
	
	char input[50];
	printf("moi ban nhap thong tin muon them : ");
	scanf("%s",&input);
	fprintf(fptr,"%s",input);

	fclose(fptr);
	
	
	return 0;
	
	
}
