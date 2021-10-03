#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void init(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}


int main(){
	init();
	char buf[50];

	char *flag;

	FILE *f = fopen("flag.txt","r");
	if (f == NULL) {
		printf("Flag File is Missing. Problem is Misconfigured, please contact an Admin if you are running this on the shell server.\n");
		exit(0);
	}
	fgets(flag,50,f);

	//inp = &buf;

	//char name[50];
	puts("Enter your name");
	fgets(buf,50,stdin);
	puts("The name you entered is: ");
	printf(buf);
}
