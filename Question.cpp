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

void DoQuestionCharacteristics(std::vector<MyPokemon>& pokemonListToCheck, Characteristics characteristicsToCheck)
{
	std::cout << "The Pokemon has " << FromPkmnCharacteristicsToString(characteristicsToCheck) << "?";

	int choice = 8;
	std::cin >> choice;

	int index = 0;
	CheckQuestionCharacteristics(pokemonListToCheck, characteristicsToCheck, choice, index);
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
			for (int j = 0; j < pokemonListToCheck[i].pokemonTypes.size(); j++)
			{
				if (pokemonListToCheck[i].pokemonTypes[j] == typeToCheck)
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
			for (int j = 0; j < pokemonListToCheck[i].pokemonTypes.size(); j++)
			{
				if (pokemonListToCheck[i].pokemonTypes[j] == typeToCheck)
				{
					index++;
					removed = false;
					break;
				}
				else
				{
					removed = true;
				}
			}
			if (removed)
			{
				pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
				removed = true;
				index = 0;
				break;
			}
		}
	}

	if (removed)
	{
		CheckQuestionType(pokemonListToCheck, typeToCheck, choice, index);
	}
}

void CheckQuestionCharacteristics(std::vector<MyPokemon>& pokemonListToCheck, Characteristics characteristicsToCheck, int choice, int index)
{
	bool removed = false;
	for (int i = 0; i < pokemonListToCheck.size(); i++)
	{
		if (choice == 0)  // NO
		{
			for (int j = 0; j < pokemonListToCheck[i].pokemonCharacteristics.size(); j++)
			{
				if (pokemonListToCheck[i].pokemonCharacteristics[j] == characteristicsToCheck)
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
			for (int j = 0; j < pokemonListToCheck[i].pokemonCharacteristics.size(); j++)
			{
				if (pokemonListToCheck[i].pokemonCharacteristics[j] == characteristicsToCheck)
				{
					index++;
					removed = false;
					break;
				}
				else
				{
					removed = true;
				}
			}
			if (removed)
			{
				pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
				removed = true;
				index = 0;
				break;
			}
		}
	}

	if (removed)
	{
		CheckQuestionCharacteristics(pokemonListToCheck, characteristicsToCheck, choice, index);
	}
}
