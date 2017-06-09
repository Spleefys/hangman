#include "hanging.h"

int main(int argc, char** argv){
	int correct = check_arg(argc, argv[1]);
	if(correct)
		exit(EXIT_FAILURE);

    int flag = 1;
    char button;
    while (flag){
    	menu();
    	button = fgetc(stdin);
    	button = tolower(button);
    	__fpurge(stdin);
    	switch (button) {
    	case 's':
    		printf("Начинаем!\n");
        case 'q':
			printf("Выходим!\n");
			return 0;
		default:
			printf("Неправильный ввод, попробуй еще раз!\n");
    	}

    }

    return 0;
}
