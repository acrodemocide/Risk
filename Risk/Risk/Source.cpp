using namespace std;
#include <iostream>
#include <string>
#include <map>

#include "Continent.h"

int main()
{
	Continent continent("Africa");
	string name = continent.getName();

	cout << "Hello World!" << endl;
	cout << "name: " << name << endl;
	return 0;
}