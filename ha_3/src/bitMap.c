//
// Created by puzankova 02.06.18
//
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include "bitMap.h"

void setBitByNumber(int *array, int bit, int position) {
    // array - pointer to the begining of the array
    // position - number of the bit in the 'array'
    // bit - have to be equal to 0 or 1
    //
    // this function changes bit with number 'position' to the 'bit'

    int size = 8 * abs(abs((int) &array[0]) - abs((int) &array[1]));
    int cell = position / (size);
    int pos_in_cell = position % (size);
    int p = (unsigned int) INT_MIN >> pos_in_cell;

    printf("%d\n", pos_in_cell);
    printf("%d\n", cell);

    if (!bit) {
        long k = 1;
        for (int i = 0; i < size - 2; i++) {
            k = (k << 1) + 1;
        }
        printf("%li\n", k);
        printf("%c\n", ' ');
        printf("%li\n", p);

        k = k - p;

        printf("%li\n", k);
        printf("%d\n", array[cell]);

        array[cell] = array[cell] & k;
        printf("%d\n", array[cell]);

    } else {
        printf("p %d\n", p);
        array[cell] = array[cell] | p;
    }

    printf("%c\n", ' ');
    printf("%d\n", array[0]);
    printf("%d\n", array[1]);

}

int getBitByNumber(int *array, int position) {
//	// this function returns position's bit from the array
//    int size = 8* abs(abs((int) &array[0]) - abs((int) &array[1]));
//    int cell=position/size;
//    int pos_in_cell=position%size;
//
//    int el=array[cell];
//    int p=2147483648>>pos_in_cell;
//    el=el&p;
//
//    return el;

    /* YOUR CODE */
}

void setBitByAddress(void *position, int bit) {
    // position - pointer to the bit to change
    // bit - have to be equal to 0 or 1
    //
    // this function changes bit by memory address to 'bit'

    char *pos = position;
    unsigned char ex = 128;
    pos[0] = pos[0] | ex;
    printf("%d\n", pos[0]);
}

int getBitByAddress(void *position) {
    // this function returns first bit by memory address 'position'

    /* YOUR CODE */
}