#include<stdio.h>


int main(int argc, char* argv[]){
	
	int i = 0;
	FILE *file;
	char c;	
	printf("%d\n",argc);

	for( i; i<argc ;i++){
		printf("%s",argv[i]);

	}
		
	file = fopen("example1.s","r");

	if(file == NULL) {
		printf("error");
	}

	if(file){
		printf("in \n");
		while ((c = fgetc(file))!=EOF){
			printf("%c",c);
			putchar(c);
		}
		fclose(file);

	}	

	printf("Hello World! \n");
	return 0;
}

