#include "GameBoard.h"

// TODO: Replace these hard-coded values to use the config data
//	from the config file.
void GameBoard::InitializeAutralia()
{
	Continent australia;
	australia._name = "Australia";
	Territory indonesia;
	indonesia._name = "indonesia";
	australia._territories.push_back(indonesia);
	Territory newGuinea;
	newGuinea._name = "newGuinea";
	australia._territories.push_back(newGuinea);
	Territory westernAustralia;
	westernAustralia._name = "westernAustralia";
	australia._territories.push_back(westernAustralia);
	Territory easternAustralia;
	easternAustralia._name = "easternAustralia";
	australia._territories.push_back(easternAustralia);
	_continents.push_back(australia);
}

void GameBoard::InitializeSouthAmerica()
{
	Continent southAmerica;
	southAmerica._name = "SouthAmerica";
	Territory venezuela;
	venezuela._name = "venezuela";
	southAmerica._territories.push_back(venezuela);
	Territory brazil;
	brazil._name = "brazil";
	southAmerica._territories.push_back(brazil);
	Territory peru;
	peru._name = "peru";
	southAmerica._territories.push_back(peru);
	Territory argentina;
	argentina._name = "argentina";
	southAmerica._territories.push_back(argentina);
	_continents.push_back(southAmerica);
}

void GameBoard::InitializeAfrica()
{
	Continent africa;
	africa._name = "Africa";
	Territory northAfrica;
	northAfrica._name = "northAfrica";
	africa._territories.push_back(northAfrica);
	Territory egypt;
	egypt._name = "egypt";
	africa._territories.push_back(egypt);
	Territory eastAfrica;
	eastAfrica._name = "eastAfrica";
	africa._territories.push_back(eastAfrica);
	Territory congo;
	congo._name = "congo";
	africa._territories.push_back(congo);
	Territory southAfrica;
	southAfrica._name = "southAfrica";
	africa._territories.push_back(southAfrica);
	Territory madagascar;
	madagascar._name = "madagascar";
	africa._territories.push_back(madagascar);
	_continents.push_back(africa);
}

void GameBoard::InitializeNorthAmerica()
{
	Continent northAmerica;
	northAmerica._name = "NorthAmerica";
	Territory alaska;
	alaska._name = "alaska";
	northAmerica._territories.push_back(alaska);
	Territory northwestTerritory;
	northwestTerritory._name = "northwestTerritory";
	northAmerica._territories.push_back(northwestTerritory);
	Territory greenland;
	greenland._name = "greenland";
	northAmerica._territories.push_back(greenland);
	Territory alberta;
	alberta._name = "alberta";
	northAmerica._territories.push_back(alberta);
	Territory ontario;
	ontario._name = "ontario";
	northAmerica._territories.push_back(ontario);
	Territory quebec;
	quebec._name = "quebec";
	northAmerica._territories.push_back(quebec);
	Territory westernUnitedStates;
	westernUnitedStates._name = "westernUnitedStates";
	northAmerica._territories.push_back(westernUnitedStates);
	Territory easternUnitedStates;
	easternUnitedStates._name = "easternUnitedStates";
	northAmerica._territories.push_back(easternUnitedStates);
	Territory centralAmerica;
	centralAmerica._name = "centralAmerica";
	northAmerica._territories.push_back(centralAmerica);
	_continents.push_back(northAmerica);
}

void GameBoard::InitializeEurope()
{
	Continent europe;
	europe._name = "Europe";
	Territory iceland;
	iceland._name = "iceland";
	europe._territories.push_back(iceland);
	Territory greatBritain;
	greatBritain._name = "greatBritain";
	europe._territories.push_back(greatBritain);
	Territory scandinavia;
	scandinavia._name = "scandinavia";
	europe._territories.push_back(scandinavia);
	Territory ukraine;
	ukraine._name = "ukraine";
	europe._territories.push_back(ukraine);
	Territory northernEurope;
	northernEurope._name = "northernEurope";
	europe._territories.push_back(northernEurope);
	Territory westernEurope;
	westernEurope._name = "westernEurope";
	europe._territories.push_back(westernEurope);
	Territory southernEurope;
	southernEurope._name = "southernEurope";
	europe._territories.push_back(southernEurope);
	_continents.push_back(europe);
}

void GameBoard::InitializeAsia()
{
	Continent asia;
	asia._name = "Asia";
	Territory siberia;
	siberia._name = "siberia";
	asia._territories.push_back(siberia);
	Territory yakutsk;
	yakutsk._name = "yakutsk";
	asia._territories.push_back(yakutsk);
	Territory kamchatka;
	kamchatka._name = "kamchatka";
	asia._territories.push_back(kamchatka);
	Territory ural;
	ural._name = "ural";
	asia._territories.push_back(ural);
	Territory irkutsk;
	irkutsk._name = "irkutsk";
	asia._territories.push_back(irkutsk);
	Territory mongolia;
	mongolia._name = "mongolia";
	asia._territories.push_back(mongolia);
	Territory japan;
	japan._name = "japan";
	asia._territories.push_back(japan);
	Territory afghanistan;
	afghanistan._name = "afghanistan";
	asia._territories.push_back(afghanistan);
	Territory china;
	china._name = "china";
	asia._territories.push_back(china);
	Territory middleEast;
	middleEast._name = "middleEast";
	asia._territories.push_back(middleEast);
	Territory india;
	india._name = "india";
	asia._territories.push_back(india);
	Territory siam;
	siam._name = "siam";
	asia._territories.push_back(siam);
	_continents.push_back(asia);
}

void GameBoard::InitializeBoard()
{
	void InitializeAutralia();
	void InitializeSouthAmerica();
	void InitializeAfrica();
	void InitializeNorthAmerica();
	void InitializeEurope();
	void InitializeAsia();
}

// TODO: Determine if the initializer list here is necessary -- we may be able to forgo this
GameBoard::GameBoard() : _continents()
{
	InitializeBoard();
}

Continent GameBoard::GetContinent(string name)
{
	// TODO: implement
	return _continents[0];
}