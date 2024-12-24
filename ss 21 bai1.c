#include<stdio.h>

int main(){
	FILE *fptr;
	
	fptr = fopen("bt01.txt","w");//mo file
	
	//thao tac file
	char fullname[50];
	
	scanf("%s",&fullname);
	fprintf(fptr,"%s",fullname);

	fclose(fptr);
	
	
	return 0;
	
	
}
