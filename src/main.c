#include "hangman.h"

int main(int argc, char** argv) {
	int correct = check_arg(argv[1]);
	
	if (argv[1]){
		if(!strcmp(argv[1],"about") && argv[1]);
			return 0;
	}

	if (correct)
		exit(EXIT_FAILURE);

	int flag = 1;
	char button;
	while (flag) {
		menu();
		button = fgetc(stdin);
		button = tolower(button);
		__fpurge(stdin);
		switch (button) {
		case 's':
			printf("Начинаем!\n");
			int flag1 = 1;
			while (flag1) {
				menu_levels();
				char level = fgetc(stdin);
				level = tolower(level);
				__fpurge(stdin);
				if (!check_level(level)) {
					start_game(level);
					flag1 = 0;
				}
				if(level == 'q')
					break;
			}
			break;
		case 'q':
			printf("Выходим!\n");
			return 0;
		default:
			printf("Неправильный ввод, попробуй еще раз!\n");
		}
	}
	return 0;
}
