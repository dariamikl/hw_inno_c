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
        //YOUR CODE HERE
    }
END_TEST

START_TEST (test_setBitByAddress)
    {
        char *array = (char *) malloc(sizeof(char) * 10);

        array[0] = 63;
        array[1] = 64;

        setBitByAddress(array,1);
    }
END_TEST

START_TEST (test_getBitByAddress)
    {
        //YOUR CODE HERE
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