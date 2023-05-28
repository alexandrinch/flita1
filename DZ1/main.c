#include "includes/main.h"


int main() {
    binaryNode_t *binaryHeadNode = NULL;
    binaryNode_t *binaryTemporaryNode;

    int choice;
    char data[DATA_SIZE] = "0";

    puts("Start entering binary digits: (Enter '/exit' to exit)");

    while (strcmp(data, "/exit") != 0) {
        scanf("%s", data);
        if (checkBinary(data) == 0) {
            if (isUniqueNode(binaryHeadNode, data)) {
                binaryTemporaryNode = createBinaryNode(data);
                binaryTemporaryNode->pointer = binaryHeadNode;
                binaryHeadNode = binaryTemporaryNode;
            } else
                puts("This number is not unique! Try again");
        } else if (checkBinary(data) == 2) {
            puts("Binary set filling finished");
        } else
            puts("Please enter a binary digit!");
    }
    printBinarySet(binaryHeadNode);

    puts("If you want to convert binary numbers of this set to decimal numbers, type '1'. "
         "Otherwise, type '0'");
    scanf("%d", &choice);

    if (choice) {
        puts("Converted binary set:");
        printDecimalSet(binaryHeadNode);
    }
    return 0;
}
