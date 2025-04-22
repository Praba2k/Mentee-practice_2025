#include <string.h>
#include "features.h"

book_details b[10];
int occupied[10] = {0}; // 0 - not occupied, 1 - occupied

void addbook(int index, const char *title, const char *author, const char *year, genre gtype) {
	if (index < 0 || index >= 10 || occupied[index]) return;

	strncpy(b[index].title, title, sizeof(b[index].title));
	strncpy(b[index].author, author, sizeof(b[index].author));
	strncpy(b[index].publication_year, year, sizeof(b[index].publication_year));
	b[index].g = gtype;
	occupied[index] = 1;
}

void removebook(const char *title) {
	for (int i = 0; i < 10; i++) {
		if (occupied[i] && strcmp(title, b[i].title) == 0) {
			occupied[i] = 0;
			b[i].title[0] = '\0';
			b[i].author[0] = '\0';
			b[i].publication_year[0] = '\0';
			b[i].g = NIL;
			break;
		}
	}
}


