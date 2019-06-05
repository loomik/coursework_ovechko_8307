#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "fun.h"
#include "sort.h"
#include "find.h"
#include "correct.h"
#include "file_control.h"
#include "checks.h"


// For adaptive clear screen
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

GameDev *readItem(GameDev *gameDev) {
    gameDev->name = enterString("Write name of game: ");
    gameDev->chapter = enterString("Write chapter of game: ");
    gameDev->developer = enterString("Write developer of game: ");
    gameDev->date[0] = enterInt("Write date of game release: ");
    gameDev->date[1] = enterInt("Write month of game release: ");
    gameDev->date[2] = enterInt("Write year of game release: ");

    gameDev->Gamersrate = enterInt("Write gamers rate of game: ");
    int c = gameDev->Gamersrate;
    gameDev->Publisher1 = enterInt("Write rate of first publisher: ");
    int a = gameDev->Publisher1;
    gameDev->Publisher2 = enterInt("Write rate of second publisher: ");
    int b = gameDev->Publisher2;
    gameDev->Publisherrate = (a*b)/100;
    gameDev->bothrate = (((a*b)/100)*c)/100;

    return gameDev;
}

void showAbout() {
    system(CLEAR);
    puts("================= [About] ===================");
    puts("Title: \"Game Reviews\"");
    puts("Author: Dmitriy Ovechko 8307");
    puts("Description: In the application, you can\nstore your store data in a structured\nway. Follow the menu to work with the\napplication.");
    puts("=============================================");
    printf("Press anything to continue: ");
    getch();
}

void showAdd(List *list) {
    GameDev *gameDev = malloc(sizeof(GameDev));

    system(CLEAR);
    puts("================== [Add] ====================");
    puts("At this point you can add a new item\nto the library. Follow the instructions.");
    puts("=============================================");

    readItem(gameDev);

    add(gameDev, list);
    puts("Item wad added to library");
    printf("Write anything to continue: ");
    getch();
}

void showEdit(List *list){
    system(CLEAR);
    int manU = 0;
    puts("================== [Edit] ====================");
    puts("0. Name");
    puts("1. Chapter");
    puts("2. Developer");
    puts("3. Date");
    puts("4. Month");
    puts("5. Year");
    puts("6. Gamers average rating");
    puts("7. Rate of first Publisher");
    puts("8. Rate of second Publisher");
    puts("================== [Edit] ====================");
    manU = enterInt("Choose field:");
    if (manU == 0) correctName(list);
    if (manU == 1) correctChapter(list);
    if (manU == 2) correctDeveloper(list);
    if (manU == 3) correctDate(list);
    if (manU == 4) correctMonth(list);
    if (manU == 5) correctYear(list);
    if (manU == 6) correctGamers(list);
    if (manU == 7) correctPublisher1(list);
    if (manU == 8) correctPublisher2(list);
}

void showDelete(List *list) {
    int id = 0;

    system(CLEAR);
    puts("================ [Delete] ===================");
    puts("At this point you can delete item\nfrom the library. Follow the instructions.");
    puts("=============================================");
    id = enterInt("Write ID of note to delete: ");
    GameDev *gameDev = get(id, list);

    if (gameDev == NULL) {
        puts("There is no such id");
        printf("Write anything to continue: ");
        getch();
    } else {
        delete(id, list);
        puts("Item wad deleted");
        printf("Write anything to continue: ");
        getch();
    }
}

void showList(List *list) {
    system(CLEAR);
    puts("================= [List] ====================");
    display(list);
    puts("=============================================");
    printf("Write anything to continue: ");
    getch();
}

void showSearchMenu(List *list) {
    int id = 0;
    system(CLEAR);
    puts("================ [Search] ===================");
    puts("0. Id");
    puts("1. Name");
    puts("2. Chapter");
    puts("3. Developer");
    puts("4. Day");
    puts("5. Month");
    puts("6. Year");
    puts("7. Publisher average rating");
    puts("8. Gamers average rating");
    puts("9. Both average rating");
    puts("10. Rate of first Publisher");
    puts("11. Rate of second Publisher");
    puts("=============================================");
    id = enterInt("Write your field: ");

    if (id == 0) {
        id = enterInt("Write id of game: ");
        puts("");
        SearchById(list, id);
    } else if (id == 1) {
        char *name = enterString("Write name of game: ");
        puts("");
        SearchByName(list, name);
    } else if (id == 2) {
        char *chapter = enterString("Write chapter of game: ");
        puts("");
        SearchByChapter(list, chapter);
    } else if (id == 3) {
        char *developer = enterString("Write developer of game: ");
        puts("");
        SearchByDeveloper(list, developer);
    } else if (id == 4) {
        int day = enterInt("Write day of game release: ");
        puts("");
        SearchByDay(list, day);
    } else if (id == 5) {
        int month = enterInt("Write month of game release: ");
        puts("");
        SearchByMonth(list, month);
    } else if (id == 6) {
        int year = enterInt("Write year of game release: ");
        puts("");
        SearchByYear(list, year);
    } else if (id == 7) {
        double Publusherrate = enterDouble("Write publisher average rate of game: ");
        puts("");
        SearchByPubrate(list, Publusherrate);
    } else if (id == 8) {
        int Gamersrate = enterInt("Write gamers average rate of game: ");
        puts("");
        SearchByGamrate(list, Gamersrate);
    } else if (id == 9) {
        double bothrate = enterDouble("Write both average rate of game:: ");
        puts("");
        SearchByBothrate(list, bothrate);
    } else if (id == 10) {
        int publisher1 = enterInt("Write games rate of first publisher: ");
        puts("");
        SearchByPublisher1(list, publisher1);
    } else if (id == 11) {
        int publisher2 = enterInt("Write games rate of second publisher: ");
        puts("");
        SearchByPublisher2(list, publisher2);
    }

    printf("Write anything to continue: ");
    getch();
}

void showSortMenu(List *list) {
    int id = 0;
    system(CLEAR);
    puts("================= [Sort] ====================");
    puts("0. Id");
    puts("1. Name");
    puts("2. Chapter");
    puts("3. Developer");
    puts("4. Date");
    puts("5. Publisher average rating");
    puts("6. Gamers average rating");
    puts("7. Both average rating");
    puts("8. Rate of first Publisher");
    puts("9. Rate of second Publisher");
    puts("=============================================");
    id = enterInt("Write your field: ");

    if (id == 0) {
        sortById(list);
    } else if (id == 1) {
        sortByName(list);
    } else if (id == 2) {
        sortByChapter(list);
    } else if (id == 3) {
        sortByDeveloper(list);
    } else if (id == 4) {
        sortByDate(list);
    } else if (id == 5) {
        sortByPubrate(list);
    } else if (id == 6) {
        sortByGamerrate(list);
    } else if (id == 7) {
        sortByBothrate(list);
    } else if (id == 8) {
        sortByPub1(list);
    } else if (id == 9) {
        sortByPub2(list);
    }
    puts("List was sorted");
    printf("Write anything to continue: ");
    getch();
}

void showMenu(List *list) {
    int menu = 0;
    while (menu != 7) {
        system(CLEAR);
        puts("================= [MENU] ===================");
        puts("0. About");
        puts("1. Add new note");
        puts("2. Edit");
        puts("3. Delete");
        puts("4. Print list");
        puts("5. Search");
        puts("6. Sort");
        puts("7. Exit");
        puts("============================================");
        menu = enterInt("Write your command: ");

        if (menu == 0) {
            showAbout();
        } else if (menu == 1) {
            showAdd(list);
        } else if (menu == 2) {
            showEdit(list);
        } else if (menu == 3) {
            showDelete(list);
        } else if (menu == 4) {
            showList(list);
        } else if (menu == 5) {
            showSearchMenu(list);
        } else if (menu == 6) {
            showSortMenu(list);
        }
    }
}
