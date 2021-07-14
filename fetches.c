//C Delta in cards with fetches
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main()
{
	int lands, cards, lands_drawn, cards_drawn,  
	    game, total_games, turns_per_game, turn, lands_in_deck,
	    fetches_played, loop, randcard;
	int total_lands_drawn, total_cards_drawn;
	//float avg_cards;

	printf("Total Games to simulate:\n");
	scanf("%d", &total_games);
	printf("Total Lands in deck:\n");
	scanf("%d", &lands);
	cards = 60 - lands;
	printf("Total Turns in Game:\n");
	scanf("%d", &turns_per_game);
	printf("Total # of fetches played:\n");
	scanf("%d", &fetches_played);

	total_lands_drawn = 0;
	total_cards_drawn = 0;
	srand(time(NULL));

	//Simulate game
	for (game = 1; game <= total_games; game++) {
		//Sets up game
		lands_drawn = 0;
		cards_drawn = 0;
		lands_in_deck = lands;
		// Initial hand:
		for (loop = 1; loop <= 7; loop++) {
			randcard = rand() % (lands_in_deck + cards - cards_drawn);
			if (randcard <= lands_in_deck)
				{ lands_drawn++;
				  lands_in_deck--; }
			else
				{ cards_drawn++;}
		}
	
		// Play turns
		lands_in_deck = lands - lands_drawn;
	 	for (turn = 1; turn <= turns_per_game; turn++) {
			if ( fetches_played >= turn ) 
				{ lands_in_deck--; }
			randcard = rand() % (lands_in_deck + cards - cards_drawn);
			if (randcard <= lands_in_deck)
				{ lands_drawn++;
				  lands_in_deck--; }
			else
				{ cards_drawn++;}
		}

		//Acrues the total;
		total_lands_drawn = total_lands_drawn + lands_drawn;
		total_cards_drawn = total_cards_drawn + cards_drawn;
	}
				
	printf("Lands Drawn: %d\n", total_lands_drawn);
	printf("Cards Drawn: %d\n", total_cards_drawn);


	return 0;
}
