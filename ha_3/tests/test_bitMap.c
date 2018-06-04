#include <check.h>
#include <stdlib.h>
#include <stdio.h>
#include "bitMap.h"

START_TEST (test_setBitByNumber)
    {
        //YOUR CODE HERE
        int *array = (int *) malloc(sizeof(int) * 10);

        array[0] = 0;
        array[1] = 1;

        setBitByNumber(array, 1, 31);
    }
END_TEST

START_TEST (test_getBitByNumber)
    {

    }
END_TEST

START_TEST (test_setBitByAddress)
    {
        unsigned char *array = (unsigned char *) malloc(sizeof(unsigned char) * 5);

        array[0] = 64;
        array[1] = 192;

        setBitByAddress(array, 1);
        setBitByAddress(array + 1, 0);

        ck_assert_int_eq(array[0], 192);
        ck_assert_int_eq(array[1], 64);
    }
END_TEST

START_TEST (test_getBitByAddress)
    {
        unsigned char *array = (unsigned char *) malloc(sizeof(unsigned char) * 5);
        array[0] = 255;
        array[1] = 128;

        ck_assert_int_eq(getBitByAddress(array), 1);
        setBitByAddress(array + 1, 0);
        ck_assert_int_eq (getBitByAddress(array + 1), 0);

        int *array1 = (int *) malloc(sizeof(int) * 5);
        array1[0] = 512;

        ck_assert_int_eq(getBitByAddress(array1), 0);

    }
END_TEST

Suite *str_suite(void) {
    Suite *suite = suite_create("priority queue");
    TCase *tcase = tcase_create("case");
    tcase_add_test(tcase, test_setBitByNumber);
    tcase_add_test(tcase, test_getBitByNumber);
    tcase_add_test(tcase, test_setBitByAddress);
    tcase_add_test(tcase, test_getBitByAddress);
    suite_add_tcase(suite, tcase);
    return suite;
}

int main(int argc, char *argv[]) {
    int number_failed;
    Suite *suite = str_suite();
    SRunner *runner = srunner_create(suite);
    srunner_run_all(runner, CK_NORMAL);
    number_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return number_failed;
}
