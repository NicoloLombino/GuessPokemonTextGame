#pragma once

#include <vector>
#include <iostream>
#include <string>

#include "Pokemon.h"


std::string AskChoiceInQuestion();

void DoQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, MyPokemon &pkmnToCheck);
void CheckQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, std::string choice, int index, MyPokemon &pkmnToCheck);

void DoQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, MyPokemon &pkmnToCheck);
void CheckQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, std::string choice, int index, MyPokemon &pkmnToCheck);

void DoQuestionCharacteristics(std::vector<MyPokemon>& pokemonListToCheck, Characteristics characteristicsToCheck, MyPokemon &pkmnToCheck);
void CheckQuestionCharacteristics(std::vector<MyPokemon>& pokemonListToCheck, Characteristics characteristicsToCheck, std::string choice, int index, MyPokemon &pkmnToCheck);
