

#include <iostream>

#include "Pokemon.h"
#include "Question.h"
#include "CreatePokemonList.h"

#include <string>


int main()
{
	std::cout << "Welcome to my Game!";
	// CREO LA LISTA DI POKEMON
	std::vector<MyPokemon> Pokemons = CreatePkmnList();

	// in questo modo i controlli funzionano
	//std::vector<PokemonType> PkmnTypeVec = Pokemons[0].GetListOfPokemonType();
	//for (PokemonType t : Pokemons[0].GetListOfPokemonType())
	//{
	//	std::cout << Pokemons[0].GetName() << " " << t;
	//}

	//std::cout << "    " << PokemonType::fire << " ";

	//std::cin.get();

	// -------------------------------------------------------------------

	//DoQuestionEvolutionType(Pokemons);

	DoQuestionType(Pokemons, grass);
	//DoQuestionEvolutionType(Pokemons);

	std::cin.get();
	for (MyPokemon pk : Pokemons)
	{
		std::cout << pk.GetName() << std::endl;
	}

	//for (int i = 0; i < numeri.size(); ++i)  // size_t
	//{
	//	std::cout << Pokemons[i].GetName() << " " << Pokemons[i].GetTypes(0) << std::endl;
	//}
	//std::cin.get();

	//while (Pokemons.size() > 1)
	//{

	//	// controllo tutti i pokemon rimasti nella lista
	//	for (auto pk : Pokemons)
	//	{
	//		std::cout << pk.GetName() << pk.GetTypes(0) << std::endl;
	//	}

	//	std::cin.get();
	//}

	// DOMANDA PER IL TIPO
	//QuestionType fw{ water };
	//fw.DoQuestion(Pokemons);

	//for (MyPokemon poke : Pokemons)
	//{
	//	std::cout << poke.GetName() << std::endl;
	//}

}