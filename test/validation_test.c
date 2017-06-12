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

