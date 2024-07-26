#include "Question.h"

void DoQuestion(std::vector<MyPokemon>)
{
}

bool operator==(const MyPokemon& lhs, const MyPokemon& rhs)
{
	if (lhs == rhs) return true;
	return false;
}

void DoQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck)  // IT WORKS
{
	std::cout << "Il pokemon è di tipo " << FromPkmnTypeToString(typeToCheck) << "?";

	int choice = 8;
	std::cin >> choice;

	int index = 0;
	CheckQuestionType(pokemonListToCheck, typeToCheck, choice, index);
}

void DoQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck) // IT WORKS
{
	std::cout << "Il pokemon si può evolvere?";

	int choice = 8;
	std::cin >> choice;

	int index = 0;
	CheckQuestionEvolutionType(pokemonListToCheck, choice, index);
}

void CheckQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, int choice, int index)  // IT WORKS
{
	bool removed = false;
	for (int i = 0; i < pokemonListToCheck.size(); i++)
	{

		if (choice == 0)  // NO
		{
			if (pokemonListToCheck[i].GetEvolutionType() == medium || pokemonListToCheck[i].GetEvolutionType() == base)
			{
				pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
				removed = true;
				index = 0;
				break;
			}
			else
			{
				index++;
			}
		}
		else if (choice == 1)  // YES
		{
			if (pokemonListToCheck[i].GetEvolutionType() == final)
			{
				pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
				removed = true;
				index = 0;
				break;
			}
			else
			{
				index++;
				continue;
			}
		}
	}

	if (removed)
	{
		CheckQuestionEvolutionType(pokemonListToCheck, choice, index);
	}
}

void CheckQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, int choice, int index)  // IT WORKS
{
	bool removed = false;
	for (int i = 0; i < pokemonListToCheck.size(); i++)
	{
		if (choice == 0)  // NO
		{
			for (int j = 0; j < pokemonListToCheck[i].tempTypes.size(); j++)
			{
				if (pokemonListToCheck[i].tempTypes[j] == typeToCheck)
				{
					pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
					removed = true;
					index = 0;
					break;
				}
			}
			if (!removed)
			{
				index++;
			}
			else
			{
				break;
			}
		}
		else if (choice == 1)  // YES
		{
			for (PokemonType type : pokemonListToCheck[i].tempTypes)
			{
				if (type == typeToCheck)
				{
					pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
					removed = true;
					index = 0;
					break;
				}
				else
				{
					index++;
					continue;
				}
			}
		}
	}

	if (removed)
	{
		CheckQuestionType(pokemonListToCheck, typeToCheck, choice, index);
	}
}
