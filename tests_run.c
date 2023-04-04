#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdio.h>

Test(program, should_return_0)
{
    int argc = 2; // simulate the command-line argument count
    cr_assert_eq(main(argc), 0, "Expected return value of 0");
}

Test(program, should_return_84)
{
    int argc = 1; // simulate the command-line argument count
    cr_assert_eq(main(argc), 84, "Expected return value of 84");
}

