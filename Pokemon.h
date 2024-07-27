#pragma once

#include <string>
#include <vector>


enum PokemonType
{
	noType,
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
	dragon
};

enum PokemonEvolutionType
{
	noEvolution,
	base,
	medium,
	final
};

enum Characteristics
{
	noCharacteristics,
	twoLegs,
	fourLegs,
	noLegs,
	legend,
	starter,
	hasArms,
	hasTail,
	intermediate,
	secondStage
};


class MyPokemon
{
public:
	MyPokemon()
	{

	}
	MyPokemon(std::string pkmnName, std::vector<PokemonType> pkmnTypes, PokemonEvolutionType pkmnEvolutionType, std::vector<Characteristics> pkmnCharacteristics)
	{
		this->name = pkmnName;
		this->pokemonEvolutionType = pkmnEvolutionType;
		this->pokemonTypes = pkmnTypes;
		this->pokemonCharacteristics = pkmnCharacteristics;
	}

	std::string name;
	PokemonEvolutionType pokemonEvolutionType;
	std::vector<PokemonType> pokemonTypes;
	std::vector<Characteristics> pokemonCharacteristics;

	std::string GetName()
	{
		return name;
	}

	PokemonEvolutionType GetEvolutionType()
	{
		return pokemonEvolutionType;
	}
};

std::string FromPkmnTypeToString(PokemonType pkmnTypeToUse);
std::string FromPkmnEvolutionTypeToString(PokemonEvolutionType pkmnEvolutionTypeToUse);
std::string FromPkmnCharacteristicsToString(Characteristics pkmnCharacteristics);
