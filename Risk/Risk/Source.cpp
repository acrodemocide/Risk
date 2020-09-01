using namespace std;
#include <iostream>
#include <string>

#include "Model/Continent.h"

int main()
{
	Continent continent;
	continent._name = "Africa";

	cout << "Hello World!" << endl;
	cout << "name: " << continent._name << endl;
	return 0;
}