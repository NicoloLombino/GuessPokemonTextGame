#pragma once

#include <vector>
#include <iostream>
#include <string>

#include "Pokemon.h"


class QuestionBase
{
public:
	virtual void DoQuestion(std::vector<MyPokemon> &pokemonListToCheck)
	{

	}
};

class QuestionType : QuestionBase
{
public:

	QuestionType(PokemonType typeToGiveToCheck)
	{
		this->typeToCheck = typeToGiveToCheck;
	}

	PokemonType typeToCheck;

	void DoQuestion(std::vector<MyPokemon> &pokemonListToCheck) override
	{

	}
};

class QuestionEvolutionType : QuestionBase
{
	QuestionEvolutionType()
	{

	}

	void DoQuestion(std::vector<MyPokemon>& pokemonListToCheck) override
	{

	}
};

class QuestionCharacteristicsLegs : QuestionBase
{
	QuestionCharacteristicsLegs()
	{

	}

	void DoQuestion(std::vector<MyPokemon>& pokemonListToCheck) override
	{

	}
};

class QuestionColor : QuestionBase
{
	QuestionColor()
	{

	}

	void DoQuestion(std::vector<MyPokemon>& pokemonListToCheck) override
	{

	}
};


class QuestionLegend : QuestionBase
{
	QuestionLegend()
	{

	}

	void DoQuestion(std::vector<MyPokemon>& pokemonListToCheck) override
	{

	}
};


void DoQuestion(std::vector<MyPokemon>);

void DoQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, MyPokemon &pkmnToCheck);
void CheckQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, int choice, int index, MyPokemon &pkmnToCheck);

void DoQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, MyPokemon &pkmnToCheck);
void CheckQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, int choice, int index, MyPokemon &pkmnToCheck);

void DoQuestionCharacteristics(std::vector<MyPokemon>& pokemonListToCheck, Characteristics characteristicsToCheck, MyPokemon &pkmnToCheck);
void CheckQuestionCharacteristics(std::vector<MyPokemon>& pokemonListToCheck, Characteristics characteristicsToCheck, int choice, int index, MyPokemon &pkmnToCheck);
