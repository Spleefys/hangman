#include "hanging.h"

void menu()
{
	printf("██████████████████████████████████████████\n");
	printf("█────██─██─█────█───███──█─██─█─██─██────█\n");
	printf("█─██──█─██─█─██─█─████─█─█─██─█─██─██─██─█\n");
	printf("█────██─█──█─████───█─██─█─█──█─██─██────█\n");
	printf("█─██──█──█─█─██─█─███─██─█──█─█─██─██─██─█\n");
	printf("█────██─██─█────█───█─██─█─██─█─────█─██─█\n");
	printf("██████████████████████████████████████████\n");
	printf("Приветствуем, Вас, в игре Виселица\n");
	printf("Для начала игры - s, для выхода - q\n");
}

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

void about_hangman(){
	printf("info and rules of use\n");
}
