#ifndef COURSEWORK_SET_H
#define COURSEWORK_SET_H

typedef struct {
    int id;                     // Id
    char *name;                 // Name of Game
    char *chapter;              // Type of Chapter
    char *developer;            // Developer of Game
    int date[3];                // Release date
    double Publisherrate;       // Publisher rate of Game
    int Gamersrate;          // Gamers rate of Game
    double bothrate;            // Both rate of Game(gamers and Publishers)
    int Publisher1;             // First Publisher
    int Publisher2;             // Second Publisher
    struct ShopItem *next;      // Link to next
} GameDev;

#endif // COURSEWORK_SET_H
