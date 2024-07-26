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

void DoQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck);
void DoQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck);

void CheckQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, int choice, int index);
void CheckQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, int choice, int index);
