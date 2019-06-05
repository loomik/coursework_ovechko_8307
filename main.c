#include <stdio.h>
#include <stdlib.h>
#include "set.h"
#include "fun.h"
#include "file_control.h"
#include "menu.h"

#define FILENAME "rates.csv"

int main() {
    // Read data from file
    FILE *readFile = fopen(FILENAME, "r");
    List *list = makeList();
    readListFromFile(readFile, list);
    fclose(readFile);

    showMenu(list);

    // Save data to file
    FILE *writeFile = fopen(FILENAME, "w");
    saveListToFile(writeFile, list);
    destroy(list);
    fclose(writeFile);
    return 0;
}
