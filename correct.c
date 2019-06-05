#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "set.h"
#include "fun.h"

void correctName(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->name);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->name = enterString("Write new name:");
        }
        current = (GameDev *) current->next;
    }
}

void correctChapter(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->name);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->name = enterString("Write new name:");
        }
        current = (GameDev *) current->next;
    }
}

void correctDeveloper(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->developer);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->developer = enterString("Write new dveloper:");
        }
        current = (GameDev *) current->next;
    }
}

void correctDate(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->date[0]);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->date[0] = enterInt("Write new date:");
        }
        current = (GameDev *) current->next;
    }
}

void correctMonth(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->date[1]);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->date[1] = enterInt("Write new month:");
        }
        current = (GameDev *) current->next;
    }
}

void correctYear(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->date[2]);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->date[3] = enterInt("Write new year:");
        }
        current = (GameDev *) current->next;
    }
}

void correctGamers(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->Gamersrate);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->Gamersrate = enterInt("Write new Gamersrate:");
            current->bothrate = ((current->Publisherrate)*(current->Gamersrate))/100;
        }
        current = (GameDev *) current->next;
    }
}

void correctPublisher1(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->Publisher1);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->Publisher1 = enterInt("Write new Publisher1:");
            current->Publisherrate = ((current->Publisher1)*(current->Publisher2))/100;
            current->bothrate = ((current->Publisherrate)*(current->Gamersrate))/100;
        }
        current = (GameDev *) current->next;
    }
}

void correctPublisher2(List *list)
{
    GameDev *current = list->head;
    int kok;
    while (current != NULL)
    {
        printf("%d)%s\n", current->id, current->Publisher2);
        current = (GameDev *) current->next;
    }
    printf("Choose element by it ID:");
    scanf("%d", &kok);
    current = list->head;
    while (current != NULL)
    {
        if (current->id == kok)
        {
            current->Publisher2 = enterInt("Write new Publisher2:");
            current->Publisherrate = ((current->Publisher1)*(current->Publisher2))/100;
            current->bothrate = ((current->Publisherrate)*(current->Gamersrate))/100;
        }
        current = (GameDev *) current->next;
    }
}
