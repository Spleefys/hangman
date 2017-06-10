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

void about_hangman()
{
	printf("\tВиселица - игра направленная на развитие мышлени, посредством побуквенного угадывания слов, случайно выбираемых в соответствии с заданным уровнем сложности из базы данных программы.\n");
	printf("\tВ этой игре Вам необходимо, выбирая буквы из словаря, отгадать загаданное слово. Слова на английском, для лучшего запоминания английкого языка.\n");
	printf("\tКогда вы неправильно угадываете букву, в консоли рисуется виселица. Если вы ошибетесь 5 раз, вы проиграете.\n");
}

char * build_file_name(char level)
{
	char * file = malloc(sizeof(char)* LNAME);
	char template[LNAME] = "dic/_.txt";
	for(int i = 0; i < LNAME; i++){
		if(template[i] == '_'){
			file[i] = '1';
			continue;
		}
		file[i] = template[i];
	}

	return file;
}

void freq_init(char * freq)
{
	memset(freq, 0, 256);
}

char * get_sym_freq(char * random_word, char * freq)
{
	freq = malloc(sizeof(char) * MAX_SYMBOLS);
	freq_init(freq);
	for(int i = 0; i < strlen(random_word); i++)
		freq[(unsigned int)random_word[i]]++;
	return freq; 
}

int start_game(char level)
{
	FILE * f;
	
	char * file = build_file_name(level);
	f = fopen(file, "r");

	char ** word = malloc(sizeof(char *) *40);
	for(int i = 0; i< 40; i++)
		word[i] = malloc(sizeof(char) * 8);
	for(int i = 0; i < 40 ; i++)
		fscanf(f, "%s", word[i]);

	char * freq = NULL;
	freq = get_sym_freq(word[index - 1], freq);

	fclose(f);
	return 0;
}