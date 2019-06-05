#ifndef COURSEWORK_FIND_H
#define COURSEWORK_FIND_H

#include "fun.h"

void SearchById(List *list, int id);

void SearchByName(List *list, char *name);

void SearchByChapter(List *list, char *chapter);

void SearchByDeveloper(List *list, char *developer);

void SearchByDay(List *list, int day);

void SearchByMonth(List *list, int month);

void SearchByYear(List *list, int year);

void SearchByPubrate(List *list, double Publisherrate);

void SearchByGamrate(List *list, int Gamersrate);

void SearchByBothrate(List *list, double bothrate);

void SearchByPublisher1(List *list, int Publisher1);

void SearchByPublisher2(List *list, int Publisher2);
#endif // COURSEWORK_FIND_H
