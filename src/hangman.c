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

void menu_levels()
{
	printf("Для начала игры выберите уровень:\n");
	printf("1й уровень - 4 буквы\n");
	printf("2й уровень - 5 букв\n");
	printf("3й уровень - 6 букв\n");
	printf("4й уровень - 7 букв\n");
	printf("Для выбора уровня, напииши его номер\n");
}

int print_hang(int mistakes)
{
	if (mistakes == 1) {
		printf(" _________     \n");
		printf("|              \n");
		printf("|              \n");
		printf("|              \n");
		printf("|              \n");
		printf("|              \n");
		printf("|              \n");
		printf("\n");
		return 0;
	}
	else if (mistakes == 2) {
		printf(" _________     \n");
		printf("|         |    \n");
		printf("|         0    \n");
		printf("|              \n");
		printf("|              \n");
		printf("|              \n");
		printf("|              \n");
		printf("\n");
		return 0;
	}
	else if (mistakes == 3) {
		printf(" _________     \n");
		printf("|         |    \n");
		printf("|         0    \n");
		printf("|        /|\\  \n");
		printf("|              \n");
		printf("|              \n");
		printf("|              \n");
		printf("\n");
		return 0;
	}
	else if (mistakes == 4) {
		printf(" _________     \n");
		printf("|         |    \n");
		printf("|         0    \n");
		printf("|        /|\\  \n");
		printf("|        / \\  \n");
		printf("|              \n");
		printf("|              \n");
		printf("\n");
		return 0;
	}
	return 0;
}

void win(){
	printf("Ты угадал!\n");
	printf("────────────────────────────────────────\n");
	printf("──▄▄▄───────────▄▄▄▄▄▄▄─────────────────\n");
	printf("─█▀░▀█──────▄▀▀▀░░░░░░░▀▀▄▄─────────────\n");
	printf("─█░░░░█───▄▀░░░░░░░░░░░░░░░▀▄───────▄▄▄─\n");
	printf("─█▄░░░▀▄▄▀░░██░░░░░░░░░░░░░░▀█────█▀▀░█─\n");
	printf("──█░░░░█▀░░░▀░░░░░░░░██░░░░░░▀█─▄█░░░░█─\n");
	printf("──▀█░░▄█░░░░░░░▄▄▄░░░░▀░░░░░░░███░░░░█▀─\n");
	printf("───█▄░█░░░░░▄███████▄░░░░░░░░░█▀░░░░▄▀──\n");
	printf("───▀█░█░░░░▄██████████░░░░░░░▄█░░░░▄▀───\n");
	printf("────███░░░░███████████░░░░░░▄█░░░░█▀────\n");
	printf("─────█░░░░░██████████▀░░░░░░█░░░░█▀─────\n");
	printf("─────█░░░░░░▀███████▀░░░░░░░█▄▄▄▀───────\n");
	printf("─────█░░░░░░░░▀▀▀▀░░░░░░░░░░░▀█─────────\n");
	printf("─────█░░░░░░░░░░░░░░░░░░░░░░░░█─────────\n");
	printf("─────█░░░░░░░░░░░░░░░░░░░░░░░░█─────────\n");
	printf("─────█░░░░░░░░░░░░░░░░░░░░░░░░█─────────\n");
	printf("────────────────────────────────────────\n");
	printf("────█──█─█──█─█──█─█▀▀▀█─█▀▀█─█──█──────\n");
	printf("────█▀▀█─█──█─█▄▄█─█───█─█────█──█──────\n");
	printf("────█──█─█▄▄█────█─█▄▄▄█─█▄▄█─█▄▄█──────\n");
	printf("────────────────────────────────────────\n");
	printf("\n");
}

void lose(){
	printf("Ты проиграл!\n");
	printf("░░░░░░░░░░░░░░░░░░░░░░░░░▄▄█▀▀▀▀█▄▄░░░░░░\n");
	printf("░░░░░░░░░░░░░░░░░░░░░░░▄█▀░░░░░░░░▀█▄▄░░░\n");
	printf("░░░▄██████▄▄▄▄▄███████▀░░░░░░░░░░░░░░▀█▄░\n");
	printf("░░▄███████████████████░░║║╔═░░║║╔╗╔╗╔╗░█░\n");
	printf("░░████████████████████░░╠╣╠═░░╠╣╠╣║║║║░█░\n");
	printf("░▄█████▀▀▀▀███████████▄░║║╚═░░║║║║╩╩╚╝░█░\n");
	printf("░████▀░░▄▄░░██▀░░░░▀███░░░░░░░░░░░░░░░░█░\n");
	printf("░██▀█▄░▀██░░██░░▄██░███▀▄░░░░░═╦═╔╗║╔░░█░\n");
	printf("░▀█▄░▀▄▄▄▄▄▄▀█▄░░▀▀░███░▀█▄░░░░║░╠╣╠╣░░█░\n");
	printf("░░██░░░░░░░░░░▀▀▀▀▀▀██▀░░░▀█▄░░║░║║║╚░░█░\n");
	printf("░░▀█░░░░░░▄▄░░░░░░░░░█░░░░░░▀█▄░░░░░▄▄█▀░\n");
	printf("░░░▀▀▄▄░░░░▀▀░░░░░░▄█▀░░░░░░▄██▀▀▀▀▀▀░░░░\n");
	printf("░░░░░░▀▀▀▀█▄▄▄▄▄█▀▀░░░░░░░░█▀▀░░░░░░░░░░░\n");
	printf("░░░░░░░░▄▄▄▄██▄▄▄░░░░░░░░░▀░░░░░░░░░░░░░░\n");
	printf("░░░░░░▄███████████▄░░░░░░░░░░░░░░░░░░░░░░\n");
	printf("░░░░░▄█████████████░░░░░░░░░░░░░░░░░░░░░░\n");
	printf("░░░░░█▀██████████▀█░░░░░░░░░░░░░░░░░░░░░░\n");
	printf("░░░░█▀░██████████░▀█░░░░░░░░░░░░░░░░░░░░░\n");
	printf("\n");
}

int check_level(char level)
{
	char levels[] = "1234";
	if (strchr(levels, level)) {
		return 0;
	}
	else if(level == 'q') {
		return 1;
	}
	else{
		printf("Невалидный ввод!\n");
		return -1;	
	}
}

int check_arg(char * flag)
{
	int correct = 0;
	if (flag) {
		if (!strcmp(flag, "about"))
			about_hangman();
		else {
			printf("Ошибка!\n");
			correct = 1;
		}
	}
	return correct;
}

int check_malloc(char * ptr) {
	if(ptr == NULL)
		exit(EXIT_FAILURE);
	return 0;
}

int check_malloc_r(char ** ptr) {
	if(ptr == NULL)
		exit(EXIT_FAILURE);
	return 0;
}

void about_hangman()
{
	printf("* Виселица - игра направленная на развитие мышлени, посредством\n");
	printf("  побуквенного угадывания слов, случайно выбираемых в соответствии\n");
	printf("  с заданным уровнем сложности из базы данных программы.\n");
	printf("* В этой игре Вам необходимо, выбирая буквы из словаря, отгадать\n");
	printf("  загаданное слово. Слова на английском, для лучшего запоминания \n");
	printf("  английкого языка.\n");
	printf("* Когда вы неправильно угадываете букву, в консоли рисуется виселица.\n");
	printf("* Если вы ошибетесь 5 раз, вы проиграете.\n");
}

char * build_file_name(char level)
{
	char * file = malloc(sizeof(char)* LNAME);
	check_malloc(file);
	char template[LNAME] = "dic/_.txt";
	for (int i = 0; i < LNAME; i++) {
		if (template[i] == '_') {
			file[i] = level;
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
	check_malloc(freq);
	freq_init(freq);
	for (int i = 0; i < strlen(random_word); i++)
		freq[(unsigned int)random_word[i]]++;
	return freq;
}

int getrand(int min, int max)
{
	srand(time(NULL));
	return min + rand()%max;
}

void fill_alphabet(char * alphabet)
{
	for (int i = ASCII_a,j = 0; i < ASCII_z + 1; i++, j++) {
		alphabet[j] = (unsigned char)i;
	}
	printf("\n");
}

void print_alpabet(char * alphabet)
{
	for (int i = 0; i < COUNT_LETTERS; i++)
		printf("%c ", alphabet[i]);
	printf("\n");
}

void change_alphabet(char * alphabet, char c)
{
	for (int i = 0; i < COUNT_LETTERS ; i++) {
		if(alphabet[i] == c)
			alphabet[i] = '_';
	}
}

void print_word(char * word)
{
	for (int i = 0; i < strlen(word); i++)
			printf("%c", word[i]);
	printf("\n");
}

int invalid_char(char c)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	if (strchr(alphabet, c)) {
		return 0;
	}
	else {
		printf("Невалидный ввод!\n");
		return -1;
	}
}

int start_game(char level)
{
	FILE * f;

	char * file = build_file_name(level);
	f = fopen(file, "r");

	char ** word = malloc(sizeof(char *) * 40);
	check_malloc_r(word);
	for (int i = 0; i < 40; i++){
		word[i] = malloc(sizeof(char) * 8);
		check_malloc(word[i]);
	}
	for (int i = 0; i < 40 ; i++)
		fscanf(f, "%s", word[i]);

	int index = getrand(1, 40);

	char * freq = NULL;
	freq = get_sym_freq(word[index - 1], freq);

	char * random_word = malloc(sizeof(char) * (strlen(word[index - 1]) + 1));
	check_malloc(random_word);
	for (int i = 0; i< strlen(word[index - 1]); i++)
		random_word[i] = word[index - 1][i];
	random_word[strlen(word[index - 1 ])] = '\0';

	char * alphabet = malloc(sizeof(char) * 26);
	check_malloc(alphabet);
	fill_alphabet(alphabet);

	char * guessed_word = malloc(sizeof(char) * (strlen(random_word) + 1));
	check_malloc(guessed_word);
	memset(guessed_word, '*', strlen(random_word));
	guessed_word[strlen(random_word)] = '\0';

	int number_of_iter = strlen(random_word) + 4; // a count of mistakes = 4; attemp = 4 + length of random word
	int mistakes = 0;

	while (number_of_iter--) {
		printf("Букварь: ");
		print_alpabet(alphabet);

		printf("Введите букву: ");

		char c = fgetc(stdin);
		__fpurge(stdin);

		if (invalid_char(c))
			continue;

		change_alphabet(alphabet, c);

		char * s = memchr(random_word, c, strlen(random_word));
		if (s) {
			if (freq[(unsigned int)c] > 1) {
				while (freq[(unsigned int)c]--) {
					s = memchr(random_word, c, strlen(random_word));
					random_word[s-random_word] = toupper(c);
					guessed_word[s - random_word] = c;
				}
				for (int i = 0; i < strlen(random_word); i++)
					random_word[i] = tolower(random_word[i]);
			}
			else
				guessed_word[s - random_word] = c;
		}
		else {
			mistakes++;
			print_hang(mistakes);
			if (mistakes == 4) {
				printf("Слово:");
				print_word(random_word);
				lose();
				break;
			}
		}
		//print_word(random_word);
		print_word(guessed_word);

		if (!strcmp(guessed_word, random_word)) {
			win();
			break;
		}
	}

	for (int i = 0; i < 40; i++)
		free(word[i]);
	free(word);

	free(alphabet);
	free(guessed_word);
	free(random_word);
	free(freq);
	free(file);

	fclose(f);
	return 0;
}
