#include "Question.h"

void DoQuestion(std::vector<MyPokemon>)
{
}

bool operator==(const MyPokemon& lhs, const MyPokemon& rhs)
{
	if (lhs == rhs) return true;
	return false;
}

// DOMANDA P£R IL TIPO
// IN QUESTO CASO IL TIPO DEI POKEMON RITORNATO E' SBAGLIATO
void DoQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck)
{
	std::cout << typeToCheck;
	std::cin.get();

	std::cout << "Il pokemon è di tipo " << FromPkmnTypeToString(typeToCheck) << "?";
	int choice = 8;
	std::cin >> choice;
	int index = 0;
	CheckQuestionType(pokemonListToCheck, typeToCheck, choice, index);
}


void DoQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck) // FUNZIONA BENE
{
	std::cout << "Il pokemon si può evolvere?";

	int choice = 8;
	std::cin >> choice;

	int index = 0;
	CheckQuestionEvolutionType(pokemonListToCheck, choice, index);
}

void CheckQuestionEvolutionType(std::vector<MyPokemon>& pokemonListToCheck, int choice, int index)  // FUNZIONA BENE
{
	bool removed = false;
	for (int i = 0; i < pokemonListToCheck.size(); i++)
	{
		std::cout << "i = " << i << std::endl;
		//std::cin.get();


		if (choice == 0)  // NO
		{
			if (pokemonListToCheck[i].GetEvolutionType() == medium || pokemonListToCheck[i].GetEvolutionType() == base)
			{
				std::cout << "REMOVED " << pokemonListToCheck[i].GetName() << " " << std::endl;
				pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
				removed = true;
				index = 0;
				break;
			}
			else
			{
				index++;
				std::cout << "AUMENTO INDEX : " << index << std::endl;
				std::cout << "RIMANE " << pokemonListToCheck[i].GetName() << " " << std::endl;
			}
		}
		else if (choice == 1)  // YES
		{
			if (pokemonListToCheck[i].GetEvolutionType() == final)
			{
				std::cout << "REMOVED " << pokemonListToCheck[i].GetName() << " " << std::endl;
				pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
				removed = true;
				index = 0;
				break;
			}
			else
			{
				std::cout << "RIMANE " << pokemonListToCheck[i].GetName() << " " << std::endl;
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

void CheckQuestionType(std::vector<MyPokemon>& pokemonListToCheck, PokemonType typeToCheck, int choice, int index)
{
	bool removed = false;
	for (int i = 0; i < pokemonListToCheck.size(); i++)
	{
		//std::cin.get();

		if (choice == 0)  // NO
		{
			std::cout << "i = " << i << " index = " << index << std::endl;
			std::cout << "POKEMON " << pokemonListToCheck[i].GetName() << " " << std::endl;

			for (int j = 0; j < pokemonListToCheck[i].tempTypes.size(); j++)
			{
				std::cout << "Type = " << pokemonListToCheck[i].tempTypes[j] << " CHECK = " << typeToCheck << std::endl;
				if (pokemonListToCheck[i].tempTypes[j] == typeToCheck)
				{
					std::cout << "REMOVED " << pokemonListToCheck[i].GetName() << " " << std::endl;
					pokemonListToCheck.erase((pokemonListToCheck.begin() + index));
					removed = true;
					index = 0;
					break;
				}
			}
			if (!removed)
			{
				index++;
				std::cout << "AUMENTO INDEX : " << index << std::endl;
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
