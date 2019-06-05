#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fun.h"

void SearchById(List *list, int id) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->id == id) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByName(List *list, char *name) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(strcmp(current->name, name) == 0) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByChapter(List *list, char *chapter) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(strcmp(current->chapter, chapter) == 0) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByDeveloper(List *list, char *developer) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(strcmp(current->developer, developer) == 0) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByDay(List *list, int day) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->date[0] == day) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByMonth(List *list, int month) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->date[1] == month) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByYear(List *list, int year) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->date[2] == year) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByPubrate(List *list, double Publishrate) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->Publisherrate == Publishrate) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByGamrate(List *list, int Gamersrate) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->Gamersrate == Gamersrate) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByBothrate(List *list, double bothrate) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->bothrate == bothrate) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByPublisher1(List *list, int Publisher1) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->Publisher1 == Publisher1) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}

void SearchByPublisher2(List *list, int Publisher2) {
    GameDev *current = list->head;
    int c = 0;
    while (current != NULL) {
        if(current->Publisher2 == Publisher2) {
            printf("%d. Name: %s\nChapter: %s\nDevelopers: %s\nRelease Day: %d\nRelease Month: %d\nRelease Year: %d\nPublisher average rate:%lf\nGamers average rate:%d\nBoth average rate:%lf\nPublisher 1:%d\nPublisher 2:%d\n\n", current->id,
                   current->name, current->chapter, current->developer, current->date[0], current->date[1], current->date[2], current->Publisherrate, current->Gamersrate, current->bothrate, current->Publisher1, current->Publisher2);
            c++;
        }
        current = (GameDev *) current->next;
    }
    if(c == 0) {
        puts("List is empty");
    }
}
