#include "../includes/binary.h"

binaryNode_t *createBinaryNode(char data[]) {
    binaryNode_t *node = malloc(sizeof(binaryNode_t));
    strcpy(node->data, data);
    node->pointer = NULL;
    return node;
}

int binaryToDecimal(char binaryNumber[]) {
    int power = 1, decimalNumber = 0;
    for (int i = strlen(binaryNumber) - 1; i >= 0; i--) {
        if (binaryNumber[i] == '1')
            decimalNumber += power;
        power <<= 1;
    }
    return decimalNumber;
}

void printBinarySet(binaryNode_t *head) {
    binaryNode_t *temporary = head;
    while (temporary != NULL) {
        printf("%s\n", temporary->data);
        temporary = temporary->pointer;
    }
}
void printDecimalSet(binaryNode_t *head) {
    binaryNode_t *temporary = head;
    while (temporary != NULL) {
        printf("%d\n", binaryToDecimal(temporary->data));
        temporary = temporary->pointer;
    }
}

bool isUniqueNode(binaryNode_t *head, char data[]) {
    binaryNode_t *temporary = head;
    while (temporary != NULL) {
        if (strcmp(temporary->data, data) == 0)
            return false;
        temporary = temporary->pointer;
    }
    return true;
}

int isBinary(char data[]) {
    int isBinary = 1;

    if (strcmp(data, "/exit") == 0) {
        return 2;
    }
    for (int i = 0; i < strlen(data); i++) {
        if (data[i] == '0' || data[i] == '1')
            isBinary = 0;
        else
            return 1;
    }
    return isBinary;
}
