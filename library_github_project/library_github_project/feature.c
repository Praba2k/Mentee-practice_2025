#ifndef FEATURES_H
#define FEATURES_H

typedef enum {
	NIL, THRILLER, ADVENTURE, ROMANCE, COMEDY, SELFHELP
} genre;

typedef struct {
	char title[50];
	char author[50];
	char publication_year[10];
	genre g;
} book_details;

extern book_details b[10];
extern int occupied[10];

void addbook(int index, const char *title, const char *author, const char *year, genre g);
void removebook(const char *title);
void searchbook(const char *title);

#endif
