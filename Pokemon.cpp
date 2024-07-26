#include "Pokemon.h"

std::string FromPkmnTypeToString(PokemonType pkmnTypeToUse)
{
	switch (pkmnTypeToUse)
	{
		case PokemonType::water: return "Acqua";
		case PokemonType::fire: return "Fuoco";
		case PokemonType::grass: return "Erba";
		case PokemonType::poison: return "Veleno";
		case PokemonType::flying: return "Volante";
		case PokemonType::bug: return "Coleottero";
		case PokemonType::normal: return "Normale";
		case PokemonType::electr: return "Elettro";
		case PokemonType::ground: return "Terra";
		case PokemonType::fight: return "Lotta";
		case PokemonType::psychc: return "Psico";
		case PokemonType::rock: return "Roccia";
		case PokemonType::steel: return "Acciaio";
		case PokemonType::ice: return "Ghiaccio";
		case PokemonType::ghost: return "Spettro";
		case PokemonType::dragon: return "Drago";
		case PokemonType::none: return "None";
	}
}

std::string FromPkmnEvolutionTypeToString(PokemonEvolutionType pkmnEvolutionTypeToUse)
{
	switch (pkmnEvolutionTypeToUse)
	{
		case PokemonEvolutionType::base: return "Base";
		case PokemonEvolutionType::medium: return "Intermedio";
		case PokemonEvolutionType::final: return "Finale";
	}
}
