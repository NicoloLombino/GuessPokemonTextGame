

#include <iostream>

#include "Pokemon.h"
#include "Question.h"
#include "CreatePokemonList.h"

#include <string>
#include <random>
#include <vector>

// temp
#include <algorithm>

void WriteTextInEndMode(std::string textToWrite)
{
	std::cout << "--------------" << std::endl;
	std::cout << textToWrite << std::endl;
	std::cout << "--------------" << std::endl;
}

int main()
{
	std::cout << "Welcome to my Game!" << std::endl;
	std::cout << "Think of one of the first 151 Pokemon" << std::endl;
	std::cout << "I will try to guess it" << std::endl;
	std::cout << std::endl;
	std::cout << "INPUT:" << std::endl;
	std::cout << "1 = YES" << std::endl;
	std::cout << "0 = NO" << std::endl;

	// create the pokemon list
	std::vector<MyPokemon> Pokemons = CreatePkmnList();

	// create the pokemon to check
	// create the bool to see if the pokemon has already the characteristic
	// i am sorry to write this...
	MyPokemon pokemonToCheck;
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
			CheckQuestionAndRemoveSimilar({ 15, 23 }, QuestionDone);
		}

		CheckAllCharacteristicInPokemonList(Pokemons, QuestionDone);
		// end to check pokemon to guess info

		do
		{
			// Check questions and do random
			std::uniform_int_distribution<> distrib(0, 24);
			randomQuestion = distrib(gen);

			if (!(std::find(QuestionDone.begin(), QuestionDone.end(), randomQuestion) != QuestionDone.end()))
			{
				questionFind = true;
				QuestionDone.push_back(randomQuestion);
			}

			// check if there are no more questions
			if (QuestionDone.size() == 25)
			{
				isInGame = false;
			}
		} 
		while (!questionFind);

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
			case 10: DoQuestionType(Pokemons, rock, pokemonToCheck); break;
			case 11: DoQuestionType(Pokemons, ice, pokemonToCheck); break;
			case 12: DoQuestionType(Pokemons, dragon, pokemonToCheck); break;
			case 13: DoQuestionType(Pokemons, poison, pokemonToCheck); break;
			case 14: DoQuestionType(Pokemons, ghost, pokemonToCheck); break;
			case 15: DoQuestionEvolutionType(Pokemons, pokemonToCheck); break;
			case 16: DoQuestionCharacteristics(Pokemons, twoLegs, pokemonToCheck); break;
			case 17: DoQuestionCharacteristics(Pokemons, fourLegs, pokemonToCheck); break;
			case 18: DoQuestionCharacteristics(Pokemons, noLegs, pokemonToCheck); break;
			case 19: DoQuestionCharacteristics(Pokemons, hasTail, pokemonToCheck); break;
			case 20: DoQuestionCharacteristics(Pokemons, legend, pokemonToCheck); break;
			case 21: DoQuestionCharacteristics(Pokemons, hasArms, pokemonToCheck); break;
			case 22: DoQuestionCharacteristics(Pokemons, starter, pokemonToCheck); break;
			case 23: DoQuestionCharacteristics(Pokemons, middleStage, pokemonToCheck); break;
			case 24: DoQuestionCharacteristics(Pokemons, secondStage, pokemonToCheck); break;
		}

		if (Pokemons.size() <= 1)
		{
			isInGame = false;
		}
	}

	if (Pokemons.size() >= 1)
	{
		isInGame = false;
		std::cout << std::endl;
		std::cout << "--------------" << std::endl;
		std::cout << "The Pokemon you are thinking of is..." << std::endl;
		std::cin.get();
		if (Pokemons.size() == 1)
		{
			std::cout << Pokemons[0].GetName() << "?" << std::endl;
		}
		else
		{
			// there is some pokemon with equal characteristics in list
			// get random pokemon in list
			std::uniform_int_distribution<> distrib(0, Pokemons.size() - 1);
			int random_index = distrib(gen);
			MyPokemon randomPokemonInList = Pokemons[random_index];
			std::cout << randomPokemonInList.GetName() << "?" << std::endl;
		}

		std::string answer = "9";
		do
		{
			std::cin >> answer;
			if (answer == "1")
			{
				WriteTextInEndMode("I WON!");
				std::cin.get();
			}
			else if (answer == "0")
			{
				if (Pokemons.size() == 1)
				{
					WriteTextInEndMode("YOU ARE A LIAR!");
					std::cout << "Admit that you lost!" << std::endl;
					std::cout << "--------------" << std::endl;
				}
				else
				{
					WriteTextInEndMode("YOU WON...");
				}
			}
			else
			{
				WriteTextInEndMode("You don't want to admit that you lost?");
			}
		} 
		while (answer != "1" && answer != "0");
	}
	else if (Pokemons.size() <= 0)
	{
		isInGame = false;
		WriteTextInEndMode("I THINK YOU'RE CHEATING!");
		std::cin.get();
	}

	// TEMP CHECK

	//// To check the list of pokemons and question --> add this on code if you want to some check
	//int temp = 0;
	//std::cin >> temp;

	//if (temp == 3)
	//{
	//	std::cout << "POKEMON LIST = " << std::endl;
	//	std::cin.get();
	//	for (MyPokemon pk : Pokemons)
	//	{
	//		std::cout << pk.GetName() << std::endl;
	//	}
	//}
	//else if (temp == 4)
	//{
	//	std::cout << "QUESTION LIST =" << std::endl;
	//	std::cin.get();
	//	std::sort(QuestionDone.begin(), QuestionDone.end());
	//	for (int a : QuestionDone)
	//	{
	//		std::cout << a << " ";
	//	}
	//}
}