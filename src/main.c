#include "hanging.h"

int main(int argc, char** argv){
	int correct = check_arg(argc, argv[1]);
	if(correct)
		exit(EXIT_FAILURE);

    return 0;
}
