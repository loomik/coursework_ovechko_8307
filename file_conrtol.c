#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fun.h"

int getStringSize(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i + 1;
}

char *initStringField(char *string) {
    int len = getStringSize(string);
    char *str = (char *) malloc(len * sizeof(char));

    strcpy(str, string);
    return str;
}

void readListFromFile(FILE *file, List *list) {
    if (file != NULL) {
        char scanner[1024];
        while (fgets(scanner, 1024, file)) {
            GameDev *game = malloc(sizeof(GameDev));
            int count = 0;
            char *words = strtok(scanner, ",;");
            while (words != NULL) {
                if(count == 0) {
                    game->name = initStringField(words);
                }
                else if(count == 1) {
                    game->chapter = initStringField(words);
                }
                else if(count == 2) {
                    game->developer = initStringField(words);
                }
                else if(count == 3) {
                    game->date[0] = atoi(words);
                }
                else if(count == 4) {
                    game->date[1] = atoi(words);
                }
                else if(count == 5) {
                    game->date[2] = atoi(words);
                }
                else if(count == 6) {
                    game->Publisherrate = atof(words);
                }
                else if(count == 7) {
                    game->Gamersrate = atoi(words);
                }
                else if(count == 8) {
                    game->bothrate = atof(words);
                }
                else if(count == 9) {
                    game->Publisher1 = atoi(words);
                }
                else if(count == 10) {
                    game->Publisher2 = atoi(words);
                }
                count++;
                words = strtok(NULL, ";,");
            }

            add(game, list);
        }
    }
}

void saveListToFile(FILE *file, List *list) {
    GameDev *current = list->head;
    if (current == NULL)
        return;

    while (current != NULL) {
        fprintf(file, "%s;%s;%s;%d,%d,%d;%lf;%d;%lf;%d;%d\n", current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
        current = (GameDev *) current->next;
    }
}
