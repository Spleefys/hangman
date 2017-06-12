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
