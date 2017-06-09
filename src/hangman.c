#include "hanging.h"

int check_arg(int argc, char * flag)
{
	int correct = 0;
	if (flag){
		if(!strcmp(flag, "about"))
			about_hangman();
		else
			printf("Ошибка!\n");
		correct = 1;
	}

	return correct;
}
