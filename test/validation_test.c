#include <ctest.h>
#include "hangman.h"

CTEST(arithmetic_suite, check_level)
{
	const int level = '1';

	const int result = check_level(level);

	const int i = 0;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_level1)
{
	const int level = '2';

	const int result = check_level(level);

	const int i = 0;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_level2)
{
	const int level = '3';

	const int result = check_level(level);

	const int i = 0;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_level3)
{
	const int level = '4';

	const int result = check_level(level);

	const int i = 0;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_level4)
{
	const int level = 'q';

	const int result = check_level(level);

	const int i = 0;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_level5)
{
	const int level = 'z';

	const int result = check_level(level);

	const int i = 1;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_level6)
{
	const int level = '0';

	const int result = check_level(level);

	const int i = 1;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_level7)
{
	const int level = '7';

	const int result = check_level(level);

	const int i = 1;
	
	ASSERT_EQUAL(i, result);	
}


CTEST(arithmetic_suite, check_arg)
{
	char * flag = "about";

	const int result = check_arg(flag);

	const int i = 1;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_arg1)
{
	char * flag = "bullshit";

	const int result = check_arg(flag);

	const int i = 1;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, check_arg2)
{
	char * flag = NULL;

	const int result = check_arg(flag);

	const int i = 0;
	
	ASSERT_EQUAL(i, result);	
}

CTEST(arithmetic_suite, invalid_char)
{
	char c = 'a';

	int result = invalid_char(c);

	const int i = 0; 

	ASSERT_EQUAL(i, result);
}

CTEST(arithmetic_suite, invalid_char1)
{
	char c = 'z';

	int result = invalid_char(c);

	const int i = 0; 

	ASSERT_EQUAL(i, result);
}

CTEST(arithmetic_suite, invalid_char2)
{
	char c = 'A';

	int result = invalid_char(c);

	const int i = -1; 

	ASSERT_EQUAL(i, result);
}

CTEST(arithmetic_suite, invalid_char3)
{
	char c = '5';

	int result = invalid_char(c);

	const int i = -1; 

	ASSERT_EQUAL(i, result);
}

