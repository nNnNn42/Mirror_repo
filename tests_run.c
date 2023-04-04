#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdio.h>

Test(my_program, returns_84_when_no_arguments)
{
    int argc = 1;
    char *argv[] = {"my_program", NULL};
    int result = my_program(argc, argv);
    cr_assert_eq(result, 84, "Expected return value to be 84, but got %d", result);
}

