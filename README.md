# MTG Fetch Land Impact Simulator

Recently I was engaged in a conversation with a friend about how impactful Fetch lands are in terms of drawing more cards and less lands in a game of Magic. Teh discussion was related to the price issue versus value on your deck, specially on single color decks where mana color is not an issue at all.

In order to figure out the impact, I wrote a simple C based simulator that tracks how many fetch lands, other lands and spells are drawed in a quick 6 turn game. than ran it for 100K games and different number of fetch-lands in the deck.

Than adjusted the averages for a GP event, and figured out how many actual spell cards a player should expect to drawn just by thining the deck. The results were very interesting.

In case you are not familiar with magic, this is the description of what a fetch land does: https://mtg.fandom.com/wiki/Fetch_land
