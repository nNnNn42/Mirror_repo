#include <criterion/criterion.h>

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 7;
    int result = sum(a, b);
    printf("The sum of %d and %d is %d\n", a, b, result);
    return 0;
}


Test(sum, returns_correct_sum) {
    int a = 5;
    int b = 7;
    int expected = a + b;
    int result = sum(a, b);
    cr_assert_eq(result, expected, "sum(%d, %d) returned %d, but expected %d", a, b, result, expected);
}

Test(sum, handles_negative_numbers) {
    int a = -5;
    int b = 7;
    int expected = a + b;
    int result = sum(a, b);
    cr_assert_eq(result, expected, "sum(%d, %d) returned %d, but expected %d", a, b, result, expected);
}

Test(sum, handles_zero) {
    int a = 0;
    int b = 7;
    int expected = a + b;
    int result = sum(a, b);
    cr_assert_eq(result, expected, "sum(%d, %d) returned %d, but expected %d", a, b, result, expected);
}

