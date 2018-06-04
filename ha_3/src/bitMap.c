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


    if (!bit) {
        long k = 1;
        for (int i = 0; i < size - 2; i++) {
            k = (k << 1) + 1;
        }
        k = k - p;
        array[cell] = array[cell] & k;
    } else {
        array[cell] = array[cell] | p;
    }
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

    unsigned char *pos = position;
    unsigned char ex1 = 128;
    unsigned char ex2 = 127;

    if (bit == 1){
        pos[0] = pos[0] | ex1;
    }else{
        pos[0] = pos[0] & ex2;
    }
}

int getBitByAddress(void *position) {
    // this function returns first bit by memory address 'position'

    return ((*(unsigned char *) (position)) & 0b10000000u) >> 7u;
}