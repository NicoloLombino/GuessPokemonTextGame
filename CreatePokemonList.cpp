#include "CreatePokemonList.h"
#include <iostream>




// The Pokemon List
std::vector<MyPokemon> CreatePkmnList()
{
	std::vector<MyPokemon> MyPokemonList;
	MyPokemonList.push_back({ "Bulbasaur", {grass, poison}, base, {fourLegs, starter} });
	MyPokemonList.push_back({ "Ivysaur", {grass, poison}, medium, {fourLegs, starter, middleStage} });
	MyPokemonList.push_back({ "Venosaur", {grass, poison}, final, {fourLegs, starter, secondStage} });
	MyPokemonList.push_back({ "Charmender", {fire}, base, {twoLegs, starter, hasTail, hasArms} });
	MyPokemonList.push_back({ "Charmeleon", {fire}, medium, {twoLegs, starter, hasTail, hasArms, middleStage} });
	MyPokemonList.push_back({ "Charizard", {fire, flying}, final, {twoLegs, starter, hasTail, hasArms, secondStage} });
	MyPokemonList.push_back({ "Squirtle", {water}, base, {twoLegs, starter, hasTail, hasArms} });
	MyPokemonList.push_back({ "Wartortle", {water}, medium, {twoLegs, starter, hasTail, hasArms, middleStage} });
	MyPokemonList.push_back({ "Blastoise", {water}, final, {twoLegs, starter, hasTail, hasArms, secondStage} });
	MyPokemonList.push_back({ "Caterpie", {bug}, base, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Metapod", {bug}, medium, {noLegs, middleStage} });
	MyPokemonList.push_back({ "Butterfree", {bug, flying}, final, {twoLegs, hasArms, secondStage} });
	MyPokemonList.push_back({ "Weedle", {bug, poison}, base, {hasTail, noLegs} });
	MyPokemonList.push_back({ "Kakuna", {bug, poison}, medium, {noLegs, middleStage} });
	MyPokemonList.push_back({ "Beedrill", {bug, poison}, final, {twoLegs, hasArms, secondStage} });
	MyPokemonList.push_back({ "Pidgey", {normal, flying}, base, {twoLegs, hasTail} });
	MyPokemonList.push_back({ "Pidgeotto", {normal, flying}, medium, {twoLegs, hasTail, middleStage} });
	MyPokemonList.push_back({ "Pidgeot", {normal, flying}, final, {twoLegs, hasTail, secondStage} });
	MyPokemonList.push_back({ "Rattata", {normal}, base, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Raticate", {normal}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Spearow", {normal, flying}, base, {twoLegs, hasTail} });
	MyPokemonList.push_back({ "Fearow", {normal, flying}, final, {twoLegs, hasTail} });
	MyPokemonList.push_back({ "Ekans", {poison}, base , {hasTail, noLegs} });
	MyPokemonList.push_back({ "Arbok", {poison}, final, {hasTail, noLegs} });
	MyPokemonList.push_back({ "Pikachu", {electr}, base, {hasArms, hasTail, twoLegs, starter} });
	MyPokemonList.push_back({ "Raichu", {electr}, final, {hasArms, hasTail, twoLegs} });
	MyPokemonList.push_back({ "Sandshrew", {ground}, base, {hasArms, hasTail, twoLegs} });
	MyPokemonList.push_back({ "Sandslash", {ground}, final, {hasArms, hasTail, twoLegs} });
	MyPokemonList.push_back({ "Nidoran F", {poison}, base, {fourLegs} });
	MyPokemonList.push_back({ "Nidorina", {poison}, medium, {fourLegs, hasTail, middleStage} });
	MyPokemonList.push_back({ "Nidoqueen", {poison, ground}, final, {hasArms, hasTail, twoLegs, secondStage} });
	MyPokemonList.push_back({ "Nidoran M", {poison}, base, {fourLegs} });
	MyPokemonList.push_back({ "Nidorino", {poison}, medium, {fourLegs, middleStage} });
	MyPokemonList.push_back({ "Nidoking", {poison, ground}, final, {hasArms, hasTail, twoLegs, secondStage} });
	MyPokemonList.push_back({ "Clefairy", {normal}, base, {hasArms, hasTail, twoLegs} });
	MyPokemonList.push_back({ "Clefable", {normal}, final, {hasArms, hasTail, twoLegs} });
	MyPokemonList.push_back({ "Vulpix", {fire}, base, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Ninetales", {fire}, final, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Jigglypuff", {normal}, base, {hasArms, twoLegs} });
	MyPokemonList.push_back({ "Wigglytuff", {normal}, final, {hasArms, twoLegs} });
	MyPokemonList.push_back({ "Zubat", {poison, flying}, base, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Golbat", {poison, flying}, final, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Oddish", {grass, poison}, base, {twoLegs} });
	MyPokemonList.push_back({ "Gloom", {grass, poison}, medium, {twoLegs, hasArms, middleStage} });
	MyPokemonList.push_back({ "Vileplume", {grass, poison}, final, {twoLegs, hasArms, secondStage} });
	MyPokemonList.push_back({ "Paras", {bug, grass}, base, {fourLegs} });
	MyPokemonList.push_back({ "Parasect", {bug, grass}, final, {fourLegs} });
	MyPokemonList.push_back({ "Venonat", {bug, poison}, base, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Venomoth", {bug, poison}, final, {noLegs} });
	MyPokemonList.push_back({ "Diglett", {ground}, base, {noLegs} });
	MyPokemonList.push_back({ "Dugtrio", {ground}, final, {noLegs} });
	MyPokemonList.push_back({ "Meowth", {normal}, base, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Persian", {normal}, final, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Psyduck", {water}, base, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Golduck", {water}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Mankey", {fight}, base, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Primeape", {fight}, final, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Growlithe", {fire}, base, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Arcanine", {fire}, final, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Poliwag", {water}, base, {twoLegs, hasTail} });
	MyPokemonList.push_back({ "Poliwhirl", {water}, medium, {twoLegs, hasArms, middleStage} });
	MyPokemonList.push_back({ "Poliwrath", {water}, final, {twoLegs, hasArms, secondStage} });
	MyPokemonList.push_back({ "Abra", {psychc}, base, {twoLegs, hasTail, hasArms} });
	MyPokemonList.push_back({ "Kadabra", {psychc}, medium, {twoLegs, hasTail, hasArms, middleStage} });
	MyPokemonList.push_back({ "Alakazam", {psychc}, final, {twoLegs, hasArms, secondStage} });
	MyPokemonList.push_back({ "Machop", {fight}, base, {twoLegs, hasTail, hasArms} });
	MyPokemonList.push_back({ "Machoke", {fight}, medium, {twoLegs, hasArms, middleStage} });
	MyPokemonList.push_back({ "Machamp", {fight}, final, {twoLegs, hasArms, secondStage} });
	MyPokemonList.push_back({ "Bellsprout", {grass, poison}, base, {twoLegs} });
	MyPokemonList.push_back({ "Weepinbell", {grass, poison}, medium, {noLegs, middleStage} });
	MyPokemonList.push_back({ "Victreebel", {grass, poison}, final, {noLegs, secondStage} });
	MyPokemonList.push_back({ "Tentacool", {water, poison}, base, {noLegs} });
	MyPokemonList.push_back({ "Tentacruel", {water, poison}, final, {noLegs} });
	MyPokemonList.push_back({ "Geodude", {rock, ground}, base, {noLegs,hasArms} });
	MyPokemonList.push_back({ "Graveler", {rock, ground}, medium, {twoLegs, hasArms, middleStage} });
	MyPokemonList.push_back({ "Golem", {rock, ground}, final, {twoLegs, hasArms, secondStage} });
	MyPokemonList.push_back({ "Ponyta", {fire}, base, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Rapidash", {fire}, final, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Slowpoke", {water, psychc}, base, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Slowbro", {water, psychc}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Magnemite", {electr}, base, {noLegs} });
	MyPokemonList.push_back({ "Magneton", {electr}, final, {noLegs} });
	MyPokemonList.push_back({ "Farfetch'd", {normal, flying}, final, {hasTail, twoLegs} });
	MyPokemonList.push_back({ "Doduo", {normal, flying}, base, {twoLegs} });
	MyPokemonList.push_back({ "Dodrio", {normal, flying}, final, {twoLegs, hasTail} });
	MyPokemonList.push_back({ "Seal", {water}, base, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Dewgong", {water, ice}, final, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Grimer", {poison}, base, {noLegs, hasArms} });
	MyPokemonList.push_back({ "Muk", {poison}, final, {noLegs, hasArms} });
	MyPokemonList.push_back({ "Shellder", {water}, base, {noLegs} });
	MyPokemonList.push_back({ "Cloyster", {water, ice}, final, {noLegs} });
	MyPokemonList.push_back({ "Gastly", {ghost, poison}, base, {noLegs} });
	MyPokemonList.push_back({ "Haunter", {ghost, poison}, medium, {noLegs, hasArms, middleStage} });
	MyPokemonList.push_back({ "Gengar", {ghost, poison}, final, {twoLegs, hasArms, hasTail, secondStage} });
	MyPokemonList.push_back({ "Onix", {rock, ground}, final, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Drowzee", {psychc}, base, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Hypno", {psychc}, final, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Krabby", {water}, base, {fourLegs, hasArms} });
	MyPokemonList.push_back({ "Kingler", {water}, final, {fourLegs, hasArms} });
	MyPokemonList.push_back({ "Voltorb", {electr}, base, {noLegs} });
	MyPokemonList.push_back({ "Electrode", {electr}, final, {noLegs} });
	MyPokemonList.push_back({ "Exeggcute", {grass, psychc}, base, {noLegs} });
	MyPokemonList.push_back({ "Exeggcutor", {grass, psychc}, final, {twoLegs} });
	MyPokemonList.push_back({ "Cubone", {ground}, base, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Marowak", {ground}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Hitmonlee", {fight}, final, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Hitmonchan", {fight}, final, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Lickitung", {normal}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Koffing", {poison}, base, {noLegs} });
	MyPokemonList.push_back({ "Weezing", {poison}, final, {noLegs} });
	MyPokemonList.push_back({ "Rhyhorn", {ground, rock}, base, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Rhydon", {ground, rock}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Chansey", {normal}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Tangela", {grass}, final, {twoLegs} });
	MyPokemonList.push_back({ "Kangaskhan", {normal}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Horsea", {water}, base, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Seadra", {water}, final, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Goldeen", {water}, base, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Seaking", {water}, final, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Staryu", {water}, base, {noLegs} });
	MyPokemonList.push_back({ "Starmie", {water, psychc}, final, {noLegs} });
	MyPokemonList.push_back({ "Mr. Mime", {psychc}, final, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Scyther", {bug, flying}, final, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Jinx", {ice, psychc}, final, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Electabuzz", {electr}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Magmar", {fire}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Pinsir", {bug}, final, {twoLegs, hasArms} });
	MyPokemonList.push_back({ "Tauros", {normal}, final, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Magikarp", {water}, base, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Gyarados", {water, flying}, final, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Lapras", {water, ice}, final, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Ditto", {normal}, final, {noLegs} });
	MyPokemonList.push_back({ "Eevee", {normal}, base, {fourLegs, hasTail, starter} });
	MyPokemonList.push_back({ "Vaporeon", {water}, final, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Jolteon", {electr}, final, {fourLegs} });
	MyPokemonList.push_back({ "Flareon", {fire}, final, {fourLegs, hasTail} });
	MyPokemonList.push_back({ "Porygon", {normal}, final, {twoLegs, hasTail} });
	MyPokemonList.push_back({ "Omanyte", {rock, water}, base, {noLegs} });
	MyPokemonList.push_back({ "Omastar", {rock, water}, final, {noLegs} });
	MyPokemonList.push_back({ "Kabuto", {rock, water}, base, {fourLegs} });
	MyPokemonList.push_back({ "Kabutops", {rock, water}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Aerodactyl", {rock, flying}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Snorlax", {normal}, final, {twoLegs, hasArms, hasTail} });
	MyPokemonList.push_back({ "Articuno", {ice, flying}, final, {twoLegs, hasTail, legend} });
	MyPokemonList.push_back({ "Zapdos", {electr, flying}, final, {twoLegs, hasTail, legend} });
	MyPokemonList.push_back({ "Moltres", {fire, flying}, final, {twoLegs, hasTail, legend} });
	MyPokemonList.push_back({ "Dratini", {dragon}, base, {noLegs, hasTail} });
	MyPokemonList.push_back({ "Dragonair", {dragon}, medium, {noLegs, hasTail, middleStage} });
	MyPokemonList.push_back({ "Dragonite", {dragon, flying}, final, {twoLegs, hasArms, hasTail, secondStage} });
	MyPokemonList.push_back({ "Mewtwo", {psychc}, final, {twoLegs, hasArms, hasTail, legend} });
	MyPokemonList.push_back({ "Mew", {psychc}, final, {twoLegs, hasArms, hasTail, legend} });

	return MyPokemonList;
}


void CheckQuestionAndRemoveSimilar(std::vector<int> questionToRemove, std::vector<int>& QuestionDone)
{
	QuestionDone.insert(QuestionDone.end(), questionToRemove.begin(), questionToRemove.end());
}

bool CheckPokemonCharacteristics(MyPokemon& pokemonToCheck, std::vector<Characteristics> characteristicsToCkeck)
{
	for (Characteristics characteristics : characteristicsToCkeck)
	{
		if ((std::find(pokemonToCheck.pokemonCharacteristics.begin(), pokemonToCheck.pokemonCharacteristics.end(), characteristics) != pokemonToCheck.pokemonCharacteristics.end()))
		{
			return true;
		}
	}
	return false;
}

void CheckCharacteristicAndRemoveQuestion(std::vector<MyPokemon>& pokemonListToCheck, std::vector<int>& QuestionDone, Characteristics characteristicToChek, int questionToRemove)
{
	bool characteristicFound = false;

	for (MyPokemon pokemon : pokemonListToCheck)
	{
		if ((std::find(pokemon.pokemonCharacteristics.begin(), pokemon.pokemonCharacteristics.end(), characteristicToChek) != pokemon.pokemonCharacteristics.end()))
		{
			characteristicFound = true;
			break;
		}
	}
	if (!characteristicFound)
	{
		if (!(std::find(QuestionDone.begin(), QuestionDone.end(), questionToRemove) != QuestionDone.end()))
		{
			QuestionDone.push_back(questionToRemove);
		}
	}
}

void CheckTypeAndRemoveQuestion(std::vector<MyPokemon>& pokemonListToCheck, std::vector<int>& QuestionDone, PokemonType typeToCheck, int questionToRemove)
{
	bool typeFound = false;

	for (MyPokemon pokemon : pokemonListToCheck)
	{
		if ((std::find(pokemon.pokemonTypes.begin(), pokemon.pokemonTypes.end(), typeToCheck) != pokemon.pokemonTypes.end()))
		{
			typeFound = true;
			break;
		}
	}
	if (!typeFound)
	{
		if (!(std::find(QuestionDone.begin(), QuestionDone.end(), questionToRemove) != QuestionDone.end()))
		{
			QuestionDone.push_back(questionToRemove);
		}
	}
}

void CheckAllCharacteristicInPokemonList(std::vector<MyPokemon>& pokemonListToCheck, std::vector<int>& QuestionDone)
{
	// for each type, if the list don't contain this, is useless to ask
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, water, 0);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, fire, 1);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, grass, 2);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, flying, 3);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, bug, 4);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, normal, 5);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, electr, 6);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, ground, 7);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, fight, 8);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, psychc, 9);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, rock, 10);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, ice, 11);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, dragon, 12);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, poison, 13);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, ghost, 14);

	// for each characteristic, if the list don't contain this, is useless to ask
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, twoLegs, 16);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, fourLegs, 17);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, noLegs, 18);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, hasTail, 19);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, legend, 20);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, hasArms, 21);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, starter, 22);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, middleStage, 23);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, secondStage, 24);
}