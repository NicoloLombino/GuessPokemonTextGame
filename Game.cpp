

#include <iostream>

#include "Pokemon.h"
#include "Question.h"
#include "CreatePokemonList.h"

#include <string>
#include <random>
#include <vector>

// temp
#include <algorithm>


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
	bool hasType = false;
	bool hasEvolutionType = false;
	bool hasEvolutionType2 = false;
	bool hasLegs = false;

	std::vector<int> QuestionDone;

	std::random_device rd;
	std::mt19937 gen(rd());

	bool isInGame = true;

	while (isInGame)
	{
		bool questionFind = false;
		int randomQuestion = 0;

		do
		{
			// add the questions to remove if the game has enough info on the pokemon to guess
			// i am sorry to write this...
			if (!hasType && pokemonToCheck.pokemonTypes.size() == 2)
			{
				hasType = true;
				std::vector<int> questionToRemove = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
				QuestionDone.insert(QuestionDone.end(), questionToRemove.begin(), questionToRemove.end());
			}
			if (!hasEvolutionType && pokemonToCheck.pokemonEvolutionType == final)
			{
				hasEvolutionType = true;
				std::vector<int> questionToRemove = { 16, 24 };
				QuestionDone.insert(QuestionDone.end(), questionToRemove.begin(), questionToRemove.end());
			}
			if (!hasLegs && ((std::find(pokemonToCheck.pokemonCharacteristics.begin(), pokemonToCheck.pokemonCharacteristics.end(), fourLegs) != pokemonToCheck.pokemonCharacteristics.end() ||
				std::find(pokemonToCheck.pokemonCharacteristics.begin(), pokemonToCheck.pokemonCharacteristics.end(), twoLegs) != pokemonToCheck.pokemonCharacteristics.end() ||
				std::find(pokemonToCheck.pokemonCharacteristics.begin(), pokemonToCheck.pokemonCharacteristics.end(), noLegs) != pokemonToCheck.pokemonCharacteristics.end())))
			{
				hasLegs = true;
				std::vector<int> questionToRemove = { 17, 18, 19 };
				QuestionDone.insert(QuestionDone.end(), questionToRemove.begin(), questionToRemove.end());
			}
			// end to check pokemon to guess info

			std::uniform_int_distribution<> distrib(0, 26);
			randomQuestion = distrib(gen);

			if (!(std::find(QuestionDone.begin(), QuestionDone.end(), randomQuestion) != QuestionDone.end()))
			{
				questionFind = true;
				QuestionDone.push_back(randomQuestion);
			}
		} 
		while (!questionFind);

		 //CONTROLLI TEMPORANEI
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
			case 24: DoQuestionCharacteristics(Pokemons, intermediate, pokemonToCheck); break;
			case 25: DoQuestionCharacteristics(Pokemons, secondStage, pokemonToCheck); break;
		}

		if (Pokemons.size() == 1)
		{
			isInGame = false;
			std::cout << "HO CAPITO!" << std::endl;
			std::cin.get();
			for (MyPokemon pk : Pokemons)
			{
				std::cout << pk.GetName() << std::endl;
			}
		}
		else if (Pokemons.size() <= 0)
		{
			isInGame = false;
			std::cout << "SECONDO ME STAI IMBROGLIANDO!" << std::endl;
			std::cin.get();
		}
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