#include <ctest.h>
#include "hangman.h"

CTEST(comparsion_string, build_file_name)
{
	const char level = '1';

	char * real = build_file_name(level);

	char * exp = "dic/1.txt"; 

	ASSERT_STR(exp, real);
}

CTEST(comparsion_string, build_file_name1)
{
	const char level = '2';

	char * real = build_file_name(level);

	char * exp = "dic/2.txt"; 

	ASSERT_STR(exp, real);
}

CTEST(comparsion_string, build_file_name2)
{
	const char level = '3';

	char * real = build_file_name(level);

	char * exp = "dic/3.txt"; 

	ASSERT_STR(exp, real);
}

CTEST(comparsion_string, build_file_name3)
{
	const char level = '4';

	char * real = build_file_name(level);

	char * exp = "dic/4.txt"; 

	ASSERT_STR(exp, real);
}

CTEST(arithmetic_suite, get_sym_freq)
{
	char * random = "rain";
	char * freq = NULL;
	freq = get_sym_freq(random, freq);
	int sum = 0;
	for(int i = 0; i < strlen(random); i++)
		sum = sum + freq[(unsigned int)random[i]];
	int i = 4;

	ASSERT_EQUAL(i, sum);
}

CTEST(arithmetic_suite, get_sym_freq1)
{
	char * random = "week";
	char * freq = NULL;
	freq = get_sym_freq(random, freq);
	int sum = 0;
	for(int i = 0; i < strlen(random); i++)
		sum = sum + freq[(unsigned int)random[i]];
	int i = 6;

	ASSERT_EQUAL(i, sum);
}

CTEST(arithmetic_suite, get_sym_freq2)
{
	char * random = "weee";
	char * freq = NULL;
	freq = get_sym_freq(random, freq);
	int sum = 0;
	for(int i = 0; i < strlen(random); i++)
		sum = sum + freq[(unsigned int)random[i]];
	int i = 10;

	ASSERT_EQUAL(i, sum);
}

CTEST(arithmetic_suite, get_sym_freq3)
{
	char * random = "eeee";
	char * freq = NULL;
	freq = get_sym_freq(random, freq);
	int sum = 0;
	for(int i = 0; i < strlen(random); i++)
		sum = sum + freq[(unsigned int)random[i]];
	int i = 16;

	ASSERT_EQUAL(i, sum);
}
