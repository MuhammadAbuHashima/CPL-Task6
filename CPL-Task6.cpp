#include <stdio.h>

void reading(void)
{
	FILE *f = fopen("C:/Users/Anas Abu Hashima/Documents/Task6-file.txt", "r");
	char read[5] = {0};
	fscanf(f, "%s", read);
	printf("File opened successfully\n");
	printf("String input from file: %s\n", read);
}

void reverse(void)
{
	FILE *f = fopen("C:/Users/Anas Abu Hashima/Documents/Task6-file.txt", "r");
	char read[5] = {0};
	fscanf(f, "%s", read);
	*read = 'E';
	*(read+1) = 'D';
	*(read+2) = 'C';
	*(read+3) = 'B';
	*(read+4) = 'A';
	printf("Reversed string: %s\n", read);
}

void writing(void)
{
	FILE *f = fopen("C:/Users/Anas Abu Hashima/Documents/Task6-file.txt", "a+");
	char read[5] = {0};
	fscanf(f, "%s", read);
	*read = 'E';
	*(read+1) = 'D';
	*(read+2) = 'C';
	*(read+3) = 'B';
	*(read+4) = 'A';
	fprintf(f, "\n%s", read);
	printf("The reversed string is added to the file successfully\n");
	fclose(f);
}

int main(void)
{
	reading();
	reverse();
	writing();
	return 0;
}
