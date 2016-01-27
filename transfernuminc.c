#include <stdio.h>
#include <math.h>


int transfernumber(char* str)
{
	int leng = 0;
	char* s;
	s = &str[0];
	while( *s != '\0'){
		leng++;
		s++;
	}
	int value = 0;
	for (s = &str[0]; *s !='\0'; s++){
		leng--;
		value += (*s -'A'+1)*pow(25,leng);
	}
	return value;

}

int main(int argc, char** argv)
{
	char string[] = "AA";
	int result = transfernumber(string);
	printf("the result of %s is %d. \n",string, result);
	return 0;

}
