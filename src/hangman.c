#include "hangman.h"

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

void menu_levels(){
	printf("Для начала игры выберите уровень:\n");
	printf("1й уровень - 4 буквы\n");
	printf("2й уровень - 5 букв\n");
	printf("3й уровень - 6 букв\n");
	printf("4й уровень - 7 букв\n");
	printf("Для выбора уровня, напииши его номер\n");
}

int check_level(char level)
{
	int c;
	if(level == '1' || level == '2'
			|| level == '3' || level == '4' || level == 'q'){
		c = 0;
	}
	else{
		c = 1;
	}
	return c;
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
