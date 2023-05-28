#ifndef DZ1_BINARY_H
#define DZ1_BINARY_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#define DATA_SIZE 65

typedef struct binaryNode {
    char data[DATA_SIZE];
    struct binaryNode *pointer;
} binaryNode_t;

binaryNode_t *createBinaryNode(char data[DATA_SIZE]);
int binaryToDecimal(char binaryNumber[DATA_SIZE]);
void printBinarySet(binaryNode_t *head);
void printDecimalSet(binaryNode_t *head);
bool isUniqueNode(binaryNode_t *head, char data[DATA_SIZE]);
int checkBinary(char data[]);


#endif //DZ1_BINARY_H
