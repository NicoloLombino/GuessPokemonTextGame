

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

			std::uniform_int_distribution<> distrib(0, 9);
			randomQuestion = distrib(gen);

			if (!(std::find(QuestionDone.begin(), QuestionDone.end(), randomQuestion) != QuestionDone.end()))
			{
				questionFind = true;
				QuestionDone.push_back(randomQuestion);
			}
		} 
		while (!questionFind);

		std::cout << "RANDOM QUESTION = " << randomQuestion;
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
			case 9: DoQuestionType(Pokemons, flying);
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
	/*int temp = 0;
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
	}*/
	
}