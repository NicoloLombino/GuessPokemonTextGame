#pragma once

#include <string>
#include <vector>


enum PokemonType
{
	water,
	fire,
	grass,
	poison,
	flying,
	bug,
	normal,
	electr,
	ground,
	fight,
	psychc,
	rock,
	steel,
	ice,
	ghost,
	dragon,
	none
};

enum PokemonEvolutionType
{
	base,
	medium,
	final
};

enum Characteristics
{
	twoLegs,
	fourLegs,
	zeroLegs,
	legend,
	blue,
	red,
	green,
	yellow,
	starter,
	hasArms
};


class MyPokemon
{
public:

	MyPokemon(std::string pkmnName, std::vector<PokemonType> tempTypes, /*std::initializer_list<PokemonType> pkmType*/ PokemonEvolutionType pkmnEvolutionType)
	{
		this->name = pkmnName;
		//this->pokemonType = pkmType;
		this->pokemonEvolutionType = pkmnEvolutionType;
		this->tempTypes = tempTypes;
	}

	std::string name;
	std::initializer_list<PokemonType> pokemonType;
	PokemonEvolutionType pokemonEvolutionType;
	//PokemonType pokemonType1;
	std::vector<PokemonType> tempTypes;

	std::string GetName()
	{
		return name;
	}

	PokemonType GetTypes(int index)
	{
		auto type = pokemonType.begin();
		std::advance(type, 0);
		return *type;
	}

	/*
	int GetType1()
	{
		return pokemonType1;
	}
	*/

	PokemonEvolutionType GetEvolutionType()
	{
		return pokemonEvolutionType;
	}

	std::initializer_list<PokemonType> GetPokemonTypeList()
	{
		return pokemonType;
	}

	std::vector<PokemonType> GetListOfPokemonType()
	{
		std::vector<PokemonType> pokemonVector(pokemonType);
		return pokemonVector;
	}

};

std::string FromPkmnTypeToString(PokemonType pkmnTypeToUse);
std::string FromPkmnEvolutionTypeToString(PokemonEvolutionType pkmnEvolutionTypeToUse);
