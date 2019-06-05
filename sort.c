#include <string.h>
#include "fun.h"
#include "file_control.h"

void swap(GameDev *a, GameDev *b) {
    int id = a->id;
    char *name = initStringField(a->name);
    char *chapter = initStringField(a->chapter);
    char *developer = initStringField(a->developer);
    int day = a->date[0];
    int month = a->date[1];
    int year = a->date[2];
    double Publisherrate = a->Publisherrate;
    int Gamersrate = a->Gamersrate;
    double bothrate = a->bothrate;
    int Publisher1 = a->Publisher1;
    int Publisher2 = a->Publisher2;

    a->id = b->id;
    a->name = b->name;
    a->chapter = b->chapter;
    a->developer = b->developer;
    a->date[0] = b->date[0];
    a->date[1] = b->date[1];
    a->date[2] = b->date[2];
    a->Publisherrate = b->Publisherrate;
    a->Gamersrate = b->Gamersrate;
    a->bothrate = b->bothrate;
    a->Publisher1 = b->Publisher1;
    a->Publisher2 = b->Publisher2;

    b->id = id;
    b->name = name;
    b->chapter = chapter;
    b->developer = developer;
    b->date[0] = day;
    b->date[1] = month;
    b->date[2] = year;
    b->Publisherrate = Publisherrate;
    b->Gamersrate = Gamersrate;
    b->bothrate = bothrate;
    b->Publisher1 = Publisher1;
    b->Publisher2 = Publisher2;

}

void sortById(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (gameDev->id > gameDevNext->id) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByName(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (strcmp(gameDev->name, gameDevNext->name) > 0) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByChapter(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (strcmp(gameDev->chapter, gameDevNext->chapter) > 0) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByDeveloper(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (strcmp(gameDev->developer, gameDevNext->developer) > 0) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByDate(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (gameDev->date[2]*10000 + gameDev->date[1]*100 + gameDev->date[0] > gameDevNext->date[2]*10000 + gameDevNext->date[1]*100 + gameDevNext->date[0]) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByPubrate(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (gameDev->Publisherrate > gameDevNext->Publisherrate) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByGamerrate(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (gameDev->Gamersrate > gameDevNext->Gamersrate ) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByBothrate(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (gameDev->bothrate > gameDevNext->bothrate ) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByPub1(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (gameDev->Publisher1 > gameDevNext->Publisher1 ) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}

void sortByPub2(List *list) {
    int swapped;
    GameDev *gameDev;
    GameDev *gameDevNext = NULL;

    if (list->head == NULL)
        return;

    do {
        swapped = 0;
        gameDev = list->head;

        while (gameDev->next != NULL) {
            gameDevNext = (GameDev *) gameDev->next;
            if (gameDev->Publisher2 > gameDevNext->Publisher2 ) {
                swap(gameDev, (GameDev *) gameDev->next);
                swapped = 1;
            }
            gameDev = (GameDev *) gameDev->next;
        }
        gameDev = gameDevNext;
    } while (swapped);
}
