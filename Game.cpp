

#include <iostream>

#include "Pokemon.h"
#include "Question.h"
#include "CreatePokemonList.h"

#include <string>


int main()
{
	std::cout << "Welcome to my Game!";
	// create the pokemon list
	std::vector<MyPokemon> Pokemons = CreatePkmnList();

	// do a question
	DoQuestionType(Pokemons, grass);

	// check pokemon in list
	std::cin.get();
	for (MyPokemon pk : Pokemons)
	{
		std::cout << pk.GetName() << std::endl;
	}
}