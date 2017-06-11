#ifndef HANGMAN_H
#define HANGMAN_H

#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

#define LNAME 10

#define MAX_SYMBOLS 256

#define ASCII_a 97
#define ASCII_z 122

#define COUNT_LETTERS 26

int check_arg(int argc, char * flag);

int print_hang(int mistakes);

void lose();

void about_hangman();

int getrand(int min, int max);

void print_alpabet(char * alphabet);

void print_word(char * word);

void change_alphabet(char * alphabet, char c);

void fill_alphabet(char * alphabet);

void freq_init(char * freq);

char * get_sym_freq(char * random_word, char * freq);

char * build_file_name(char level);

int start_game(char level);

void menu();

void menu_levels();

int check_level(char level);

#endif
