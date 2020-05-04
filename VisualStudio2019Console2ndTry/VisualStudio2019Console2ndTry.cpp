// VisualStudio2019Console2ndTry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <stdafx>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int weight;
	string units;

	cout << "test hello";
	cout << "\n";

	cout << "Guess the weight of the cake: ";

	//cin >> weight;
	//getline (cin, units);
	//cin >> units;

	//cin >> weight >> units;



	if (std::cin >> weight >> units)
	{
		std::cout << weight << units << "? Spot on!" << std::endl;
	}
	else
	{
		std::cerr << "Expected a numeric weight and alphabetic units (e.g: 42 kg)."
			<< std::endl;
	}



	//std::cout << weight + "  " +  units << "? Spot on!" << std::endl;
	std::cout << " Weight div2 = " << weight / 2 << "    Unit String = " << units << "   single C++ statement";

	std::cin.get();
	std::cin.get();



	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
