#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define BSIZE 100

int main(int argc, char* argv[]){
	int pos1=0;
	char buffer[BSIZE];
	FILE* arq;
	arq=fopen("arquivo.txt","r");
	fread(buffer,BSIZE,1,arq);
	printf("%d",(int)buffer[pos1]);
	printf(" ");
	pos1+=sizeof(int);
	printf("%d",(int)buffer[pos1]);
	printf(" ");
	pos1+=sizeof(int);
	printf(" ");
	while (buffer[pos1]!='#')
	{
		printf("%c",buffer[pos1]);
		pos1++;
	}
	printf(" ");
	pos1++;
	while (buffer[pos1]!='#')
	{
		printf("%c",buffer[pos1]);
		pos1++;
	}
	pos1++;
	printf(" ");
	printf("%.2f ",(float)buffer[pos1]);
	pos1+=sizeof(float);
	printf("%.2f ",(float)buffer[pos1]);
	pos1+=sizeof(float);
	printf("%.2f ",(float)buffer[pos1]);
	pos1+=sizeof(float);
	fclose(arq);
	return 0;
}