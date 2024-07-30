#pragma once

#include <vector>
#include "Pokemon.h"



std::vector<MyPokemon> CreatePkmnList();


void CheckQuestionAndRemoveSimilar(std::vector<int> questionToRemove, std::vector<int>& QuestionDone);

bool CheckPokemonCharacteristics(MyPokemon& pokemonToCheck, std::vector<Characteristics> characteristicsToCkeck);

void CheckCharacteristicAndRemoveQuestion(std::vector<MyPokemon>& pokemonListToCheck, std::vector<int>& QuestionDone, Characteristics characteristicToChek, int questionToRemove);

void CheckTypeAndRemoveQuestion(std::vector<MyPokemon>& pokemonListToCheck, std::vector<int>& QuestionDone, PokemonType typeToCheck, int questionToRemove);

void CheckAllCharacteristicInPokemonList(std::vector<MyPokemon>& pokemonListToCheck, std::vector<int>& QuestionDone);