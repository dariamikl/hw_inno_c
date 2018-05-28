//
// Created by cubazis on 25.05.18.
//

#include <stdbool.h>
#include "task.h"

/** The stub function
 *  just to demonstrate how to work with ck_assert
 *  please look for test case for stub function in test_task.c
 */

int stub(void)
{
	return 42;
}

/** The array_changer function
 *  just to demonstrate how to work with returning of array from function
 *
 *  1) C language doesn't have strings
 *  2) array in a C language is just a segment of memory
 *  3) C lang doesn't have ability to pass array as parameter in a function
 *  4) we suppose that you don't know about memory allocation through pointers
 *
 *  so, we provide you simple demo function which change 'c' char in input array
 *  	input parameter: constant array of chars
 *  	output: pointer to memory segment in which resulting array starts
 *
 *  	extra stuff: we provide you three define macros in task.h.
 *  		you can use them in your solutions
 *  		if you don't want to use them please, don't delete them - somebody may use it
 *
 *  please look for test case for array_changer function in test_task.c
 */

char* array_changer(const char c[])
{
	char j = 0;
	int size = 0;
	STRING_LEN(size, c);
	char* b = ALLOCATE(size);

	for (;j < size;) {
		if(c[j] == 'c')
			b[j] = 'b';
		else
			b[j] = c[j];
		j++;
	}
	return b;
}

/** YOUR SOLUTIONS */

char* detab(const char input[])
{
	/** JUST TO CHECK */
    int size = 0,tabs=0;
    STRING_LEN(size, input);

    for(int i=0;i<size;i++){
        if(input[i]=='\t')
            tabs++;
    }
    int new_size=size+tabs*3;
	char* c = ALLOCATE(new_size+1);
	int j=0;
	for(int i=0;i<size;i++){
        if (input[i] == '\t') {
            for (int k = 0; k < 4; k++)
                c[j++] = ' ';
        } else
            c[j++] = input[i];
	}
	c[j]='\0';
	return c;
}

char* entab(const char input[])
{
	int size = 0;
	STRING_LEN(size, input);
    char* c = ALLOCATE(size+1);

    int i,k;
    for (i = 0, k = 0; i < size; i++, k++) {
        if (i < (size - 3) && input[i] == ' ' && input[i + 1] == ' ' && input[i + 2] == ' ' &&
            input[i + 3] == ' ') {
            c[k] = '\t';
            i += 3;
        } else c[k] = input[i];
    }

    c[k]='\0';
	return c;
}

char* expand(const char s1[]){

    int size = 0,new_size=0;
    STRING_LEN(size, s1);

    for(int i=0;i<size;i++){
        if (s1[i+1] == '-' && s1[i+2] != '\0' && s1[i] <= s1[i+2] &&
            ( ('a' <= s1[i] && s1[i] <= 'z') || ('A' <= s1[i] && s1[i] <= 'Z') ||
              ('0' <= s1[i] && s1[i] <= '9') ) && (('a' <= s1[i+2] && s1[i+2] <= 'z') || ('A' <= s1[i+2] && s1[i+2] <= 'Z') ||
                                                   ('0' <= s1[i+2] && s1[i+2] <= '9'))) {
            new_size+=s1[i+2] - s1[i]+1;
            i += 1;
        } else{
            new_size++;
        }
    }

    char* c = ALLOCATE(new_size+1);

    int j=0,last_used=0;
    for (int i = 0; s1[i] != '\0'; ++i) {
        if (s1[i+1] == '-' && s1[i+2] != '\0' && s1[i] <= s1[i+2] &&
                ( ('a' <= s1[i] && s1[i] <= 'z') || ('A' <= s1[i] && s1[i] <= 'Z') ||
                ('0' <= s1[i] && s1[i] <= '9') ) && (('a' <= s1[i+2] && s1[i+2] <= 'z') || ('A' <= s1[i+2] && s1[i+2] <= 'Z') ||
                                                     ('0' <= s1[i+2] && s1[i+2] <= '9'))){
            int k = 0;
            if(last_used)
                k++;
            while (k <= s1[i+2] - s1[i])
                c[j++] = (char) (s1[i] + k++);
            if((s1[i+3] != '\0' && s1[i+3]=='-') && (s1[i+4] != '\0' ) && s1[i+2] <= s1[i+4] &&
                    ( ('a' <= s1[i+2] && s1[i+2] <= 'z') || ('A' <= s1[i] && s1[i] <= 'Z') ||
                      ('0' <= s1[i+2] && s1[i+2] <= '9') ) && (('a' <= s1[i+4] && s1[i+4] <= 'z') || ('A' <= s1[i+4] && s1[i+4] <= 'Z') ||
                                                           ('0' <= s1[i+4] && s1[i+4] <= '9'))){
                    i++;
                    last_used=1;
            }else{
                i+=2;
                last_used=0;
            }
        }else {
            c[j++] = s1[i];
        }
    }
    c[j] = '\0';
    return c;
}

int strrindex(const char s[], const char t[]) {
    int size_s = 0;
    int size_t = 0, last = -1;
    int consist = 0;

    STRING_LEN(size_s, s);

    STRING_LEN(size_t, t);
    if (size_t > size_s) return -1;
    for (int i = 0; i <= size_s - size_t; i++) {
        if (s[i] == t[0]) {
            consist = 1;
            int p = i;

            for (int j = 0; j < size_t; j++) {
                if (s[p] != t[j]) {
                    consist = 0;
                    break;
                }
                p++;
            }
            if (consist == 1)
                last = i;
        }
    }
    return last;
}



/** GET FROM task.h */