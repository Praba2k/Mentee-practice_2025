#include "features.h"

int main() {
	addbook(0, "The Alchemist", "Paulo Coelho", "1988", SELFHELP);
	addbook(1, "Atomic Habits", "James Clear", "2014", ADVENTURE);
	addbook(2, "Rich Dad Poor Dad", "Rober kiyosaki", "1892", THRILLER);
	
	searchbook("Atomic Habits");
	removebook("The Alchemist");
	searchbook("Rich Dad Poor Dad");

	return 0;
}
