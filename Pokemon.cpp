#include "Pokemon.h"

std::string FromPkmnTypeToString(PokemonType pkmnTypeToUse)
{
	switch (pkmnTypeToUse)
	{
		case PokemonType::water: return "Water";
		case PokemonType::fire: return "Fire";
		case PokemonType::grass: return "Grass";
		case PokemonType::poison: return "Poison";
		case PokemonType::flying: return "Flying";
		case PokemonType::bug: return "Bug";
		case PokemonType::normal: return "Normal";
		case PokemonType::electr: return "Electric";
		case PokemonType::ground: return "Ground";
		case PokemonType::fight: return "Fighting";
		case PokemonType::psychc: return "Psychic";
		case PokemonType::rock: return "Rock";
		case PokemonType::ice: return "Ice";
		case PokemonType::ghost: return "Ghost";
		case PokemonType::dragon: return "Dragon";
		case PokemonType::noType: return "None";
	}
}

std::string FromPkmnEvolutionTypeToString(PokemonEvolutionType pkmnEvolutionTypeToUse)
{
	switch (pkmnEvolutionTypeToUse)
	{
		case PokemonEvolutionType::base: return "Base";
		case PokemonEvolutionType::medium: return "Middle-State";
		case PokemonEvolutionType::final: return "Final";
	}
}

std::string FromPkmnCharacteristicsToString(Characteristics pkmnCharacteristics)
{
	switch (pkmnCharacteristics)
	{
		case Characteristics::twoLegs : return "Has Two Legs";
		case Characteristics::fourLegs : return "Has Four Legs";
		case Characteristics::noLegs : return "Has No Legs";
		case Characteristics::legend : return "Is A Legend";
		case Characteristics::starter : return "Is A Starter";
		case Characteristics::hasArms : return "Has Arms";
		case Characteristics::hasTail : return "Has A Tail";
		case Characteristics::middleStage : return "Is An Middle-Stage Pokemon";
		case Characteristics::secondStage : return "Is A Second-Stage Pokemon";
	}
}
