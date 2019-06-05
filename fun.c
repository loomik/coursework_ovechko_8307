#include "stdlib.h"
#include "stdio.h"
#include "fun.h"
#include "set.h"

List *makeList() {
    List *list = malloc(sizeof(List));
    if (!list) {
        return NULL;
    }
    list->head = NULL;
    list->size = 0;
    return list;
}

void add(GameDev *item, List *list) {
    GameDev *current = NULL;
    item->next = NULL;
    item->id = 0;

    if (list->head == NULL) {
        list->head = item;
    } else {
        item->id++;
        current = list->head;
        while (current->next != NULL) {
            item->id++;
            current = (GameDev *) current->next;
        }
        current->next = (struct GameDev *) item;
    }
}

GameDev *get(int id, List *list) {
    GameDev *current = list->head;
    while (current != NULL) {
        if (current->id == id) {
            return current;
        }
        current = (GameDev *) current->next;
    }
    return NULL;
}

int delete(int id, List *list) {
    GameDev *current = list->head;
    GameDev *previous = current;
    while (current != NULL) {
        if (current->id == id) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (GameDev *) current->next;
            free(current);
            return 1;
        }
        previous = current;
        current = (GameDev *) current->next;
    }
    return 0;
}

void display(List *list) {
    GameDev *current = list->head;
    if (current == NULL) {
        printf("List is empty\n");
        return;
    }


    printf("_______________________________________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("Id |Game\t\t|  Chapter\t\t  |  Developer\t\t    |Release date |Publishers average rating|Gamers average rating|Both average rating|Rate of first Publisher|Rate of second Publisher|\n");
    printf("_______________________________________________________________________________________________________________________________________________________________________________________________________________\n");
    while (current != NULL) {
        printf("%-3d|%-20s|%-25s|%-25s|%d.%d.%d\t  |%-25lf|%-21d|%-19lf|%-23d|%-23d|\n", current->id,
               current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
        current = (GameDev *) current->next;
        printf("---+--------------------+-------------------------+-------------------------+-------------+-------------------------+---------------------+-------------------+-----------------------+-----------------------+\n");
    }
}

void destroy(List *list) {
    GameDev *current = list->head;
    GameDev *next = current;
    while (current != NULL) {
        next = (GameDev *) current->next;
        free(current);
        current = next;
    }
    free(list);
}
