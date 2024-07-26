

#include <iostream>

#include "Pokemon.h"
#include "Question.h"
#include "CreatePokemonList.h"

#include <string>
#include <random>


int main()
{
	std::cout << "Welcome to my Game!";
	// create the pokemon list
	std::vector<MyPokemon> Pokemons = CreatePkmnList();

	// do a question
	//DoQuestionType(Pokemons, grass);
	DoQuestionCharacteristics(Pokemons, fourLegs);

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
			std::cout << "ENTRATO DO RANDOM QUESTION = " << randomQuestion;

			std::uniform_int_distribution<> distrib(0, 11);
			randomQuestion = distrib(gen);

			if (!(std::find(QuestionDone.begin(), QuestionDone.end(), randomQuestion) != QuestionDone.end()))
			{
				questionFind = true;
				QuestionDone.push_back(randomQuestion);
				std::cout << "RANDOM QUESTION = " << randomQuestion;
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
			for (int a : QuestionDone)
			{
				std::cout << a << " ";
			}
		}

		switch (randomQuestion)
		{
			case 0: DoQuestionType(Pokemons, water);
			case 1: DoQuestionType(Pokemons, fire);
			case 2: DoQuestionType(Pokemons, grass);
			case 3: DoQuestionEvolutionType(Pokemons);
			case 4: DoQuestionCharacteristics(Pokemons, twoLegs);
			case 5: DoQuestionCharacteristics(Pokemons, fourLegs);
			case 6: DoQuestionCharacteristics(Pokemons, noLegs);
			case 7: DoQuestionCharacteristics(Pokemons, hasTail);
			case 8: DoQuestionCharacteristics(Pokemons, legend);
			case 9: DoQuestionType(Pokemons, poison);
			case 10: DoQuestionType(Pokemons, ghost);
			case 11: DoQuestionCharacteristics(Pokemons, hasArms);
			case 12: DoQuestionCharacteristics(Pokemons, starter);
			case 14: DoQuestionType(Pokemons, flying);
			case 15: DoQuestionType(Pokemons, bug);
			case 16: DoQuestionType(Pokemons, normal);
			case 17: DoQuestionType(Pokemons, electr);
			case 18: DoQuestionType(Pokemons, ground);
			case 19: DoQuestionType(Pokemons, fight);
			case 20: DoQuestionType(Pokemons, psychc);
			case 21: DoQuestionType(Pokemons, steel);
			case 22: DoQuestionType(Pokemons, rock);
			case 23: DoQuestionType(Pokemons, ice);
			case 24: DoQuestionType(Pokemons, dragon);
			case 25: DoQuestionCharacteristics(Pokemons, intermediate);
			case 26: DoQuestionCharacteristics(Pokemons, secondStage);

		}

		if (Pokemons.size() == 1)
		{
			isInGame = false;
		}
	}

	std::cout << "HO CAPITO!" << std::endl;
	std::cin.get();
	for (MyPokemon pk : Pokemons)
	{
		std::cout << pk.GetName() << std::endl;
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