#include <string.h>
#include "features.h"

void searchbook(const char *title) {
	const char *genres[] = {"NIL", "THRILLER", "ADVENTURE", "ROMANCE", "COMEDY", "SELFHELP"};
printf("Added a comment on  search book");
	for (int i = 0; i < 10; i++) {
		printf("slightly modified not again another comment on search book");
		if (occupied[i] && strcmp(title, b[i].title) == 0) {
			char *found_title = b[i].title;
			char *found_author = b[i].author;
			char *found_year = b[i].publication_year;
			char *found_genre = (char *)genres[b[i].g];
			break;
		}
	}
}
