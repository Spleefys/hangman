#ifndef HANGMAN_H
#define HANGMAN_H

#include <stdio.h>
#include <stdio_ext.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LNAME 10

#define MAX_SYMBOLS 256

int check_arg(int argc, char * flag);

void about_hangman();

void freq_init(char * freq);

char * get_sym_freq(char * random_word, char * freq);

char * build_file_name(char level);

int start_game(char level);

void menu();

void menu_levels();

int check_level(char level);

#endif
