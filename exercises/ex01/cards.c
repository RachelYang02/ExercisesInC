/* 	Rachel Yang
		Code from HeadFirstC
		Keeps a running count as cards are dealt in a card game based on user input
*/

/* 	Running gcc -ansi -pedantic -Wall cards.c returns following warnings:
cards.c: In function ‘main’:
cards.c:39:3: warning: ISO C90 forbids mixed declarations and code [-Wpedantic]
   int val = 0;
   ^
cards.c: In function ‘card_count’:
cards.c:73:1: warning: control reaches end of non-void function [-Wreturn-type]
 }
 ^
cards.c: In function ‘change_count’:
cards.c:87:1: warning: control reaches end of non-void function [-Wreturn-type]
 }
 ^
*/

# include <stdio.h>
# include <stdlib.h>

void get_card_name(char *prompt, char *card_name);
int card_count(int val, char *card_name);
int change_count(int val, int count);
int main()
{
	char card_name[3];
	int count = 0;
	do {
		get_card_name("Enter the card name: ",card_name);
		int val = 0;
		card_count(val,card_name);
		change_count(val, count);
	} while (card_name[0] != 'X');
	return 0;
}

/* 	prompts user for input and puts reply in given buffer
		user input truncated to first two characters
		prompt: string prompt to display
		card_name: buffer where result is stored
*/
void get_card_name(char *prompt, char *card_name) {
	puts(prompt);
	scanf("%2s",card_name);
}

/*	checks to see card type and assigns value to input card
		val: initialized value val
		card_name: input card type
*/
int card_count(int val, char *card_name) {
	if (card_name[0] == 'K' || card_name[0] == 'Q' || card_name[0] == 'J') {
		val = 10;
	}
	else if (card_name[0] == 'A') {
		val = 11;
	}
	else {
		val = atoi(card_name);
		if ((val <1) || (val > 10)) {
			puts("I don't understand that value!");
		}
	}
}

/* 	increments or decrements count based on card value
		val: current val
		count: current card count
*/
int change_count(int val, int count) {
	if ((val > 2) && (val < 7)) {
		count++;
	}
	else if (val == 10) {
		count--;
	}
	printf("Current count: %i\n", count);
}
