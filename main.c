#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(int argc, char *argv[]) {
	FILE*fp;
	char c[100];
	fp=fopen("sample.txt","w");

	
	printf("input a word:");
	scanf("%s",&c);
	getchar();
	fprintf(fp,"%c\n",c);
	
	printf("input a word:");
	scanf("%s",&c);
	getchar();
	fprintf(fp,"%c\n",c);
	
	printf("input a word:");
	scanf("%s",&c);
	getchar();
	fprintf(fp,"%c\n",c);
	
	fclose(fp);
}
