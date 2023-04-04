#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]) {

    printf("Number of arguments: %d\n", argc);
    
 
    for (int i = 0;i<argc;i++)   {
        printf("Argument %d: %s\n", i, argv[i]);   
    }
    
    return 0;
}

Test(my_program, test_argument_count) {
    int argc = 4;
    char *argv[] = {"./program", "arg1", "arg2", "arg3"};
    
    cr_assert(main(argc, argv) == 0, "pas de return 0");
    cr_assert_stdout_eq_str("Nombre arg: 4\n", "compte arg incorrect");
}

Test(my_program, test_arguments) {
    int argc = 4;
    char *argv[] = {"./program", "arg1", "arg2", "arg3"};
    
    cr_assert(main(argc, argv) == 0, "pas de return 0");
    cr_assert_stdout_eq_str("Argument 0: ./program\nArgument 1: arg1\nArgument 2: arg2\nArgument 3: arg3\n", "Mauvais output");
}
