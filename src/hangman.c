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
	printf("\tВиселица - игра направленная на развитие мышлени, посредством побуквенного угадывания слов, случайно выбираемых в соответствии с заданным уровнем сложности из базы данных программы.\n");
	printf("\tВ этой игре Вам необходимо, выбирая буквы из словаря, отгадать загаданное слово. Слова на английском, для лучшего запоминания английкого языка.\n");
	printf("\tКогда вы неправильно угадываете букву, в консоли рисуется виселица. Если вы ошибетесь 5 раз, вы проиграете.\n");
}
