#include "Question.h"

void DoQuestion(std::vector<MyPokemon>)
{
}

bool operator==(const MyPokemon& lhs, const MyPokemon& rhs)
{
	if (lhs == rhs) return true;
	return false;
}

void DoQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, MyPokemon &pkmnToCheck)  // IT WORKS
{
	std::cout << "Il pokemon è di tipo " << FromPkmnTypeToString(typeToCheck) << "?";

	int choice = 8;
	std::cin >> choice;

	int index = 0;
	CheckQuestionType(pokemonListToCheck, typeToCheck, choice, index, pkmnToCheck);
}

void DoQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, MyPokemon &pkmnToCheck) // IT WORKS
{
	std::cout << "Il pokemon si può evolvere?";

	int choice = 8;
	std::cin >> choice;

	int index = 0;
	CheckQuestionEvolutionType(pokemonListToCheck, choice, index, pkmnToCheck);
}

void DoQuestionCharacteristics(std::vector<MyPokemon>& pokemonListToCheck, Characteristics characteristicsToCheck, MyPokemon &pkmnToCheck)
{
	std::cout << "The Pokemon " << FromPkmnCharacteristicsToString(characteristicsToCheck) << "?";

	int choice = 8;
	std::cin >> choice;

	int index = 0;
	CheckQuestionCharacteristics(pokemonListToCheck, characteristicsToCheck, choice, index, pkmnToCheck);
}

void CheckQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, int choice, int index, MyPokemon &pkmnToCheck)  // IT WORKS
{
	bool removed = false;
	for (int i = 0; i < pokemonListToCheck.size(); i++)
	{

		if (choice == 0)  // NO
		{
			if (pokemonListToCheck[i].GetEvolutionType() == medium || pokemonListToCheck[i].GetEvolutionType() == base)
			{
				pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
				pkmnToCheck.pokemonEvolutionType = final;
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
		CheckQuestionEvolutionType(pokemonListToCheck, choice, index, pkmnToCheck);
	}
}

void CheckQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, int choice, int index, MyPokemon &pkmnToCheck)  // IT WORKS
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
					if (!(std::find(pkmnToCheck.pokemonTypes.begin(), pkmnToCheck.pokemonTypes.end(),
						typeToCheck) != pkmnToCheck.pokemonTypes.end()))
					{
						pkmnToCheck.pokemonTypes.push_back(typeToCheck);
					}
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
		CheckQuestionType(pokemonListToCheck, typeToCheck, choice, index, pkmnToCheck);
	}
}

void CheckQuestionCharacteristics(std::vector<MyPokemon>& pokemonListToCheck, Characteristics characteristicsToCheck, int choice, int index, MyPokemon &pkmnToCheck)
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
					if (!(std::find(pkmnToCheck.pokemonCharacteristics.begin(), pkmnToCheck.pokemonCharacteristics.end(), 
						characteristicsToCheck) != pkmnToCheck.pokemonCharacteristics.end()))
					{
						pkmnToCheck.pokemonCharacteristics.push_back(characteristicsToCheck);
					}
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
		CheckQuestionCharacteristics(pokemonListToCheck, characteristicsToCheck, choice, index, pkmnToCheck);
	}
}
