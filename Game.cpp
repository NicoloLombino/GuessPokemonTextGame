

#include <iostream>

#include "Pokemon.h"
#include "Question.h"
#include "CreatePokemonList.h"

#include <string>
#include <random>
#include <vector>

// temp
#include <algorithm>


void CheckQuestionAndRemoveSimilar(std::vector<int> questionToRemove, std::vector<int> &QuestionDone)
{
	QuestionDone.insert(QuestionDone.end(), questionToRemove.begin(), questionToRemove.end());
}

bool CheckPokemonCharacteristics(MyPokemon &pokemonToCheck, std::vector<Characteristics> characteristicsToCkeck)
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

void CheckCharacteristicAndRemoveQuestion(std::vector<MyPokemon> &pokemonListToCheck, std::vector<int>& QuestionDone, Characteristics characteristicToChek, int questionToRemove)
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
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, steel, 10);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, rock, 11);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, ice, 12);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, dragon, 13);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, poison, 14);
	CheckTypeAndRemoveQuestion(pokemonListToCheck, QuestionDone, ghost, 15);

	// for each characteristic, if the list don't contain this, is useless to ask
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, twoLegs, 17);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, fourLegs, 18);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, noLegs, 19);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, hasTail, 20);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, legend, 21);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, hasArms, 22);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, starter, 23);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, middleStage, 24);
	CheckCharacteristicAndRemoveQuestion(pokemonListToCheck, QuestionDone, secondStage, 25);
}

int main()
{
	std::cout << "Welcome to my Game!";
	// create the pokemon list
	std::vector<MyPokemon> Pokemons = CreatePkmnList();

	// create the pokemon to check
	std::string s = "";
	MyPokemon pokemonToCheck;

	// create the bool to see if the game has already the characteristic
	// i am sorry to write this...
	bool hasEvolutionType = false;

	std::vector<int> QuestionDone;

	std::random_device rd;
	std::mt19937 gen(rd());

	bool isInGame = true;

	while (isInGame)
	{
		bool questionFind = false;
		int randomQuestion = 0;

		// add the questions to remove if the game has enough info on the pokemon to guess
		// i am sorry to write this...
		if (!hasEvolutionType && pokemonToCheck.pokemonEvolutionType == final)
		{
			hasEvolutionType = true;
			CheckQuestionAndRemoveSimilar({ 16, 24 }, QuestionDone);
		}

		CheckAllCharacteristicInPokemonList(Pokemons, QuestionDone);
		// end to check pokemon to guess info

		do
		{
			// Check questions and do random
			std::uniform_int_distribution<> distrib(0, 25);
			randomQuestion = distrib(gen);

			if (!(std::find(QuestionDone.begin(), QuestionDone.end(), randomQuestion) != QuestionDone.end()))
			{
				questionFind = true;
				QuestionDone.push_back(randomQuestion);
			}

			// check if there are no more questions
			if (QuestionDone.size() == 26)
			{
				isInGame = false;
			}
		} 
		while (!questionFind);

		 //CONTROLLI TEMPORANEI  --> DA ELIMINARE
		int temp = 0;
		std::cin >> temp;

		if (temp == 3)
		{
			std::cout << "LISTA " << std::endl;
			std::cin.get();
			for (MyPokemon pk : Pokemons)
			{
				std::cout << pk.GetName() << std::endl;
			}
		}
		else if (temp == 4)
		{
			std::cout << "DOMANDE" << std::endl;
			std::cin.get();
			std::sort(QuestionDone.begin(), QuestionDone.end());
			for (int a : QuestionDone)
			{
				std::cout << a << " ";
			}
		}

		switch (randomQuestion)
		{
			case 0: DoQuestionType(Pokemons, water, pokemonToCheck); break;
			case 1: DoQuestionType(Pokemons, fire, pokemonToCheck); break;
			case 2: DoQuestionType(Pokemons, grass, pokemonToCheck); break;
			case 3: DoQuestionType(Pokemons, flying, pokemonToCheck); break;
			case 4: DoQuestionType(Pokemons, bug, pokemonToCheck); break;
			case 5: DoQuestionType(Pokemons, normal, pokemonToCheck); break;
			case 6: DoQuestionType(Pokemons, electr, pokemonToCheck); break;
			case 7: DoQuestionType(Pokemons, ground, pokemonToCheck); break;
			case 8: DoQuestionType(Pokemons, fight, pokemonToCheck); break;
			case 9: DoQuestionType(Pokemons, psychc, pokemonToCheck); break;
			case 10: DoQuestionType(Pokemons, steel, pokemonToCheck); break;
			case 11: DoQuestionType(Pokemons, rock, pokemonToCheck); break;
			case 12: DoQuestionType(Pokemons, ice, pokemonToCheck); break;
			case 13: DoQuestionType(Pokemons, dragon, pokemonToCheck); break;
			case 14: DoQuestionType(Pokemons, poison, pokemonToCheck); break;
			case 15: DoQuestionType(Pokemons, ghost, pokemonToCheck); break;
			case 16: DoQuestionEvolutionType(Pokemons, pokemonToCheck); break;
			case 17: DoQuestionCharacteristics(Pokemons, twoLegs, pokemonToCheck); break;
			case 18: DoQuestionCharacteristics(Pokemons, fourLegs, pokemonToCheck); break;
			case 19: DoQuestionCharacteristics(Pokemons, noLegs, pokemonToCheck); break;
			case 20: DoQuestionCharacteristics(Pokemons, hasTail, pokemonToCheck); break;
			case 21: DoQuestionCharacteristics(Pokemons, legend, pokemonToCheck); break;
			case 22: DoQuestionCharacteristics(Pokemons, hasArms, pokemonToCheck); break;
			case 23: DoQuestionCharacteristics(Pokemons, starter, pokemonToCheck); break;
			case 24: DoQuestionCharacteristics(Pokemons, middleStage, pokemonToCheck); break;
			case 25: DoQuestionCharacteristics(Pokemons, secondStage, pokemonToCheck); break;
		}

		if (Pokemons.size() <= 1)
		{
			isInGame = false;
		}
	}

	if (Pokemons.size() >= 1)
	{
		isInGame = false;
		std::cout << "The Pokémon you are thinking of is..." << std::endl;
		std::cin.get();
		if (Pokemons.size() == 1)
		{
			std::cout << Pokemons[0].GetName() << "?" << std::endl;
		}
		else
		{
			// get random pokemon in list
			std::uniform_int_distribution<> distrib(0, Pokemons.size() - 1);
			int random_index = distrib(gen);
			MyPokemon randomPokemonInList = Pokemons[random_index];
			std::cout << randomPokemonInList.GetName() << "?" << std::endl;
		}

		int answere = 9;
		do
		{
			std::cin >> answere;
			if (answere == 1)
			{
				std::cout << "I WON!" << std::endl;
				std::cin.get();
			}
			else if (answere == 0)
			{
				std::cout << "YOU WON..." << std::endl;
			}
			else
			{
				std::cout << "You don't want to admit that you lost?" << std::endl;
			}
		} while (answere != 1 && answere != 0);
	}
	else if (Pokemons.size() <= 0)
	{
		isInGame = false;
		std::cout << "I THINK YOU'RE CHEATING!" << std::endl;
		std::cin.get();
	}


	//// check pokemon in list
	//std::cin.get();
	//for (MyPokemon pk : Pokemons)
	//{
	//	std::cout << pk.GetName() << std::endl;
	//}



	// CONTROLLI TEMPORANEI
	//int temp = 0;
	//std::cin >> temp;

	//if (temp == 3)
	//{
	//	std::cout << "LISTA " << std::endl;
	//	std::cin.get();
	//	for (MyPokemon pk : Pokemons)
	//	{
	//		std::cout << pk.GetName() << std::endl;
	//	}
	//}
	//else if (temp == 4)
	//{
	//	std::cout << "DOMANDE" << std::endl;
	//	std::cin.get();
	//	for (int a : QuestionDone)
	//	{
	//		std::cout << a << " ";
	//	}
	//}
	
}