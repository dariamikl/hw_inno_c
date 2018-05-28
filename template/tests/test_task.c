//
// Created by cubazis on 25.05.18.
//

#include <check.h>
#include "task.h"

#ifndef COMPARATOR
#define COMPARATOR(res, c1, c2) do                    \
	{                                             \
		char i = 0;                           \
		for (;'\0' != (c1)[i];i++)            \
		{                                     \
			if((c1)[i] != (c2)[i])        \
				{                     \
                                        (res) = 0;    \
				}                     \
		}                                     \
	} while(0)
#endif

START_TEST (test_stub)
{
	ck_assert(42 == stub());
}
END_TEST

START_TEST (test_array_changer)
{
	const char input[] = "abcba";
	const char pattern[] = "abbba";

	/** change 'c' to 'b' */

	char* output = array_changer(input);

	/** initialise k because ck_assert need's it to be sure
	 *  that he compare something initialised with 1
	 *  because if COMPARATOR will not change it value, k will not have any value
	 *  */
	int k = 1;

	/** get k, k, output, pattern
	 *  compare output array with pattern array by elements
	 *  return 0 if they are not equal
	 * */
	COMPARATOR(k, output, pattern);

	/** check statement is true */
	ck_assert(1 == k);

}
END_TEST

/** YOUT TEST CASES HERE
 *
 *  please use 'test_fname' format for naming tcases
 *  fname is function name
 *
 *  if function name is 'detab' then test case is 'test_detab'
 * */

START_TEST (test_detab)
{
	const char i0[] = "    kek";
	ck_assert_str_eq(detab(i0),"    kek");
	const char i1[] = "\tkek";
	ck_assert_str_eq(detab(i1),"    kek");
	const char i2[] = "\t\tkek\t";
	ck_assert_str_eq(detab(i2),"        kek    ");
	const char i3[] = "\t \tkrya\t ";
	ck_assert_str_eq(detab(i3),"         krya     ");
	const char i4[] = " \t\t \tkrya\t ";
	ck_assert_str_eq(detab(i4),"              krya     ");

}
END_TEST

START_TEST (test_entab)
{
	const char i0[] = "    ";
	const char i1[] = "    pii\t      a pipi         ";
	const char i2[] = " abcb       a p ";
	const char i3[] = "     ";
	const char i4[] = "    p";
	const char i5[] = "\tp";

	ck_assert_str_eq(entab(i0),"\t");
	ck_assert_str_eq(entab(i1),"\tpii\t\t  a pipi\t\t ");
	ck_assert_str_eq(entab(i2)," abcb\t   a p ");
	ck_assert_str_eq(entab(i3),"\t ");
	ck_assert_str_eq(entab(i4),"\tp");
	ck_assert_str_eq(entab(i5),"\tp");

}
END_TEST

START_TEST (test_enter)
{
	int n_1 = 2;
	const char input_1[] = "abcdefg";
	const char pattern_1[] = "ab\ncd\nef\ng";

	/** delete from input_1 all chars which are in input_2 */

	char* output_1 = enter(n_1, input_1);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_1 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_1, output_1, pattern_1);

	/** check statement is true */

	ck_assert(1 == k_1);

	int n_2 = 2;
	const char input_2[] = "";
	const char pattern_2[] = "";

	/** delete from input_1 all chars which are in input_2 */

	char* output_2 = enter(n_2, input_2);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_2 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_2, output_2, pattern_2);

	/** check statement is true */

	ck_assert(1 == k_2);

	int n_3 = 15;
	const char input_3[] = "abcdeffedcba";
	const char pattern_3[] = "abcdeffedcba";

	/** delete from input_1 all chars which are in input_2 */

	char* output_3 = enter(n_3, input_3);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_3 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_3, output_3, pattern_3);

	/** check statement is true */

	ck_assert(1 == k_3);

	int n_4 = 2;
	const char input_4[] = "qwe\nr\ntg\new";
	const char pattern_4[] = "qw\ne\nr\ntg\new";

	/** delete from input_1 all chars which are in input_2 */

	char* output_4 = enter(n_4, input_4);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_4 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_4, output_4, pattern_4);

	/** check statement is true */

	ck_assert(1 == k_4);

	ck_assert(1 == k_3);

	int n_5 = 1;
	const char input_5[] = "qwerty";
	const char pattern_5[] = "q\nw\ne\nr\nt\ny";

	/** delete from input_1 all chars which are in input_2 */

	char* output_5 = enter(n_5, input_5);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_5 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_5, output_5, pattern_5);

	/** check statement is true */

	ck_assert(1 == k_5);

	int n_6 = 6;
	const char input_6[] = "qwerty";
	const char pattern_6[] = "qwerty";

	/** delete from input_1 all chars which are in input_2 */

	char* output_6 = enter(n_6, input_6);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_6 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_6, output_6, pattern_6);

	/** check statement is true */

	ck_assert(1 == k_6);
}
END_TEST

START_TEST (test_flush)
{
	const char input[] ="// This will disappear \n";
        const char pattern[] ="\n";

        char *output = flush(input);

        ck_assert_str_eq(pattern, output);

        const char input1[] ="\t char *array_changer(const char c[]) {\n"
                            "\tconst char input[] = \"//This will stay\";\n"
                            "\ttransparent[] = \"/*This also will stay*/\";\n"
                            "\tconstants[] = \"/*And this\"; //It should disappear\n"
                            "\tconst char pattern[] = \"And this one*/\";\n";

        const char pattern1[] ="\t char *array_changer(const char c[]) {\n"
                              "\tconst char input[] = \"//This will stay\";\n"
                              "\ttransparent[] = \"/*This also will stay*/\";\n"
                              "\tconstants[] = \"/*And this\"; \n"
                              "\tconst char pattern[] = \"And this one*/\";\n";

        char *output1 = flush(input1);

        ck_assert_str_eq(pattern1, output1);

        const char input2[] = "    char j = 0;\n"
                            "    int size = 0;\n"
                            "    STRING_LEN(size, c);\n"
                            "    char *b = ALLOCATE(size);\n"
                            "\n"
                            "    for (; j < size;) {\n"
                            "        if (c[j] == 'c')  //It's invisible\n"
                            "            b[j] = 'b';\n"
                            "        else\n"
                            "            b[j] = c[j];\n"
                            "        j++;\n"
                            "    }\n"
                            "    return b;\n"
                            "}";

        const char pattern2[] = "    char j = 0;\n"
                              "    int size = 0;\n"
                              "    STRING_LEN(size, c);\n"
                              "    char *b = ALLOCATE(size);\n"
                              "\n"
                              "    for (; j < size;) {\n"
                              "        if (c[j] == 'c')  \n"
                              "            b[j] = 'b';\n"
                              "        else\n"
                              "            b[j] = c[j];\n"
                              "        j++;\n"
                              "    }\n"
                              "    return b;\n"
                              "}";

        char *output2 = flush(input2);

        ck_assert_str_eq(pattern2, output2);
    }
}
END_TEST

START_TEST (test_htoi)
{

}
END_TEST

START_TEST (test_squeeze)
{
	const char input1_1[] = "abcbwa";
	const char input2_1[] = "abdwc";
	const char pattern_1[] = "";

	/** delete from input_1 all chars which are in input_2 */

	char* output_1 = squeeze(input1_1, input2_1);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_1 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_1, output_1, pattern_1);

	/** check statement is true */

	ck_assert(1 == k_1);

	const char input1_2[] = "qwertyuiopqetqeuitetyiqeurioetueyrioq";
	const char input2_2[] = "znbvcmbcmnbzcnmvbncbc./cbmzbzcbzc";
	const char pattern_2[] = "qwertyuiopqetqeuitetyiqeurioetueyrioq";

	/** delete from input_1 all chars which are in input_2 */

	char* output_2 = squeeze(input1_2, input2_2);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_2 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_2, output_2, pattern_2);

	/** check statement is true */
	ck_assert(1 == k_2);

	const char input1_3[] = "aelwl";
	const char input2_3[] = "hello";
	const char pattern_3[] = "aw";

	/** delete from input_1 all chars which are in input_2 */

	char* output_3 = squeeze(input1_3, input2_3);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_3 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_3, output_3, pattern_3);

	/** check statement is true */
	ck_assert(1 == k_3);

	const char input1_4[] = "aaaaaaaaaaaaaaaaaawaa";
	const char input2_4[] = "abdc";
	const char pattern_4[] = "w";

	/** delete from input_1 all chars which are in input_2 */

	char* output_4 = squeeze(input1_4, input2_4);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_4 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_4, output_4, pattern_4);

	/** check statement is true */
	ck_assert(1 == k_4);

	const char input1_5[] = "";
	const char input2_5[] = "abdwc";
	const char pattern_5[] = "";

	/** delete from input_1 all chars which are in input_2 */

	char* output_5 = squeeze(input1_5, input2_5);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_5 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_5, output_5, pattern_5);

	/** check statement is true */

	ck_assert(1 == k_5);
}
END_TEST

START_TEST (test_any)
{
	
        const char s1[] = "123456789";
        const char s2[] = "0000000";

        int output = any(s1, s2);

        ck_assert_int_eq(output,-1);


        const char s3[] = "0121212";
        const char s4[] = "123456789";

        int output1 = any(s3, s4);

        ck_assert_int_eq(output1,1);

        const char s5[] = " ";
        const char s6[] = " ";

        int output2 = any(s5, s6);

        ck_assert_int_eq(output2,0);

        const char s7[] = "";
        const char s8[] = "";

        int output3 = any(s7, s8);

        ck_assert_int_eq(output3,-1);
}
END_TEST

START_TEST (test_setbits)
{

}
END_TEST

START_TEST (test_binsearch)
{
	int x_1 = 4;
	int v_1[] = {0, 1, 2, 3, 4, 5, 6};
	int n_1 = 7;
	int pattern_1 = 4;

	/** delete from input_1 all chars which are in input_2 */

	char* output_1 = binsearch(x_1, v_1, n_1);

	/** check statement is true */

	ck_assert(pattern_1 == output_1);

	int x_2 = 4;
	int v_2[] = {0, 1, 2, 3, 5, 6};
	int n_2 = 6;
	int pattern_2 = -1;

	/** delete from input_1 all chars which are in input_2 */

	char* output_2 = binsearch(x_2, v_2, n_2);

	/** check statement is true */

	ck_assert(pattern_2 == output_2);

	int x_3 = 4;
	int v_3[] = {};
	int n_3 = 0;
	int pattern_3 = -1;

	/** delete from input_1 all chars which are in input_2 */

	char* output_3 = binsearch(x_3, v_3, n_3);

	/** check statement is true */

	ck_assert(pattern_3 == output_3);

	int x_5 = 1;
	int v_5[] = {1, 2, 3, 4, 5, 6};
	int n_5 = 6;
	int pattern_5 = 0;

	/** delete from input_1 all chars which are in input_2 */

	char* output_5 = binsearch(x_5, v_5, n_5);

	/** check statement is true */

	ck_assert(pattern_5 == output_5);

	int x_6 = 10;
	int v_6[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n_6 = 10;
	int pattern_6 = 9;

	/** delete from input_1 all chars which are in input_2 */

	char* output_6 = binsearch(x_6, v_6, n_6);

	/** check statement is true */

	ck_assert(pattern_6 == output_6);

	int x_7 = 6;
	int v_7[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n_7 = 10;
	int pattern_7 = 5;

	/** delete from input_1 all chars which are in input_2 */

	char* output_7 = binsearch(x_7, v_7, n_7);

	/** check statement is true */

	ck_assert(pattern_7 == output_7);

	int x_8 = 5;
	int v_8[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n_8 = 9;
	int pattern_8 = 4;

	/** delete from input_1 all chars which are in input_2 */

	char* output_8 = binsearch(x_8, v_8, n_8);

	/** check statement is true */

	ck_assert(pattern_8 == output_8);

	int x_9 = 1;
	int v_9[] = {1};
	int n_9 = 1;
	int pattern_9 = 0;

	/** delete from input_1 all chars which are in input_2 */

	char* output_9 = binsearch(x_9, v_9, n_9);

	/** check statement is true */

	ck_assert(pattern_9 == output_9);
}
END_TEST

START_TEST (test_escape)
{

}
END_TEST

START_TEST (test_expand)
{
	ck_assert_str_eq(expand("-a-z"),"-abcdefghijklmnopqrstuvwxyz");
	ck_assert_str_eq(expand("a-z-"),"abcdefghijklmnopqrstuvwxyz-");
	ck_assert_str_eq(expand("a-b-c"),"abc");
	ck_assert_str_eq(expand("lalla-a-zet0-"),"lallabcdefghijklmnopqrstuvwxyzet0-");
	ck_assert_str_eq(expand("a-z0-c"), "abcdefghijklmnopqrstuvwxyz0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abc");
	ck_assert_str_eq(expand("a-b-a"),"ab-a");
	ck_assert_str_eq(expand("a--kh-0"),"a--kh-0");

}
END_TEST

START_TEST (test_itoa)
{
	int input_1 = 14;
	const char pattern_1[] = "14";

	/** delete from input_1 all chars which are in input_2 */

	char* output_1 = itoa(input_1);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_1 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_1, output_1, pattern_1);

	/** check statement is true */

	ck_assert(1 == k_1);

	int input_2 = -256;
	const char pattern_2[] = "-256";

	/** delete from input_1 all chars which are in input_2 */

	char* output_2 = itoa(input_2);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_2 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_2, output_2, pattern_2);

	/** check statement is true */

	ck_assert(1 == k_2);

	ck_assert(1 == k_1);

	int input_3 = -2147483648;
	const char pattern_3[] = "-2147483648";

	/** delete from input_1 all chars which are in input_2 */

	char* output_3 = itoa(input_3);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_3 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_3, output_3, pattern_3);

	/** check statement is true */

	ck_assert(1 == k_3);

	int input_4 = 2147483647;
	const char pattern_4[] = "2147483647";

	/** delete from input_1 all chars which are in input_2 */

	char* output_4 = itoa(input_4);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_4 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_4, output_4, pattern_4);

	/** check statement is true */

	ck_assert(1 == k_4);

	int input_5 = -2147483647;
	const char pattern_5[] = "-2147483647";

	/** delete from input_1 all chars which are in input_2 */

	char* output_5 = itoa(input_5);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_5 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_5, output_5, pattern_5);

	/** check statement is true */

	ck_assert(1 == k_5);

	int input_6 = 0;
	const char pattern_6[] = "0";

	/** delete from input_1 all chars which are in input_2 */

	char* output_6 = itoa(input_6);

	/** initialise k because ck_assert need's it to be sure
     *  that he compare something initialised with 1
     *  because if COMPARATOR will not change it value, k will not have any value
     *  */
	int k_6 = 1;

	/** get k, k, output, pattern
     *  compare output array with pattern array by elements
     *  return 0 if they are not equal
     * */
	COMPARATOR(k_6, output_6, pattern_6);

	/** check statement is true */

	ck_assert(1 == k_6);
}
END_TEST

START_TEST (test_itob)
{
	const char input[] = "4";

        char *output = itob(4,input,2);

        ck_assert_str_eq("100",output);

        const char input1[] = "0";

        char *output1 = itob(0,input1,2);

        ck_assert_str_eq("0",output1);

        const char input2[] = "15";

        char *output2 = itob(15,input2,16);

        ck_assert_str_eq("F",output2);

        const char input3[] = "25";

        char *output3 = itob(25,input3,8);

        ck_assert_str_eq("31",output3);

        const char input4[] = "-25";

        char *output4 = itob(-25,input4,8);

        ck_assert_str_eq("-31",output4);

        const char input5[] = "35";

        char *output5 = itob(35,input5,36);

        ck_assert_str_eq("Z",output5);

        const char input6[] = "36";

        char *output6 = itob(36,input6,37);

        ck_assert_str_eq("",output6);
}
END_TEST

START_TEST (test_strrindex)
{
	ck_assert(strrindex("abb", "b") == 2);
	ck_assert_int_eq(strrindex("   o o o ", "o "), 7);
	ck_assert_int_eq(strrindex("kbIk lol\n", "\0"), 9);
	ck_assert_int_eq(strrindex("kbIk lol\n", "kb"), 0);
	ck_assert_int_eq(strrindex("", "brr"), -1);
	ck_assert_int_eq(strrindex("keptikepti", "ptik"), 2);
}
END_TEST

START_TEST (test_atofe)
{

}
END_TEST



Suite* str_suite (void) {
	Suite *suite = suite_create("Home assignment 1");
	TCase *tcase = tcase_create("case");

	tcase_add_test(tcase, test_stub);
	tcase_add_test(tcase, test_array_changer);

	tcase_add_test(tcase, test_detab);
	tcase_add_test(tcase, test_entab);
	tcase_add_test(tcase, test_enter);
	tcase_add_test(tcase, test_flush);
	tcase_add_test(tcase, test_htoi);
	tcase_add_test(tcase, test_squeeze);
	tcase_add_test(tcase, test_any);
	tcase_add_test(tcase, test_setbits);
	tcase_add_test(tcase, test_binsearch);
	tcase_add_test(tcase, test_escape);
	tcase_add_test(tcase, test_expand);
	tcase_add_test(tcase, test_itoa);
	tcase_add_test(tcase, test_itob);
	tcase_add_test(tcase, test_strrindex);
	tcase_add_test(tcase, test_atofe);
	/** YOUT TEST CASES HERE */

	suite_add_tcase(suite, tcase);
	return suite;
}

int main (int argc, char *argv[]) {
	int number_failed;
	Suite *suite = str_suite();
	SRunner *runner = srunner_create(suite);
	srunner_run_all(runner, CK_NORMAL);
	number_failed = srunner_ntests_failed(runner);
	srunner_free(runner);
	return number_failed;
}
