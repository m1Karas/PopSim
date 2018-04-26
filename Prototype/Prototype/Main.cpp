//Prototype of a population simulation
//all values are subject to change

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

int popGrowth(int initialPop, double growthRate)//calculates population growth for the turn
{
	//Just does the math to change population count
	int w = 0;
	return w;
}

double growthRate(double x, double y, double z)//calculates growth rate based on different factors
{
	int w = 0;
	return w;

}

double foodConsumption(double food_level, double richY, double middleY, double poorY, double slaveY)//calculates food consumption
{
	//x is the ammount of food, Y is the ammount of people in that class
	//every day one person needs 3 food
	//3 food consumed = well fed
	//2 food consumed = underfed and provides growth mallus
	//1 food consumed = malnurished and harshly impacts growth may even cause population decrease if added ontop of other negative factors
	//0 food consumed = starvation population starts to die off
	//food is distributed by class first then by individuals
	//Rich get first dibs, then middle, then poor, then slaves
	//a value is returned that will be used by growthRate function
	int w = 0;
	return w;
}
int disease()//will throw out a disease outbreak with random lethalness
{
	//

	int diseaseType;
	int a = std::rand() % 100;
	if (a <= 33)
	{
		diseaseType = 1;
		
	}
	else if (a > 33 && a <= 66)
	{	
		diseaseType = 2;
		
	}
	else if (a > 66 && a <= 100)
	{
		diseaseType = 3;
		
	}
	else
		std::cout << "Error with disease output" << std::endl;

	return diseaseType;
}

void MainMenu()
{
	int menu_choice;

	std::cout << "Welcome to PopSim" << std::endl;
	std::cout << "Please select an action:" << std::endl;
	std::cout << "1. Start Simulation" << std::endl;
	std::cout << "2. Close Program" << std::endl;
	
	std::cin >> menu_choice;
	if (menu_choice == 1)
	{
		GameMenu();
	}
	else if (menu_choice == 2)
	{
		std::cout << "Closing" << std::endl;

	}
	else
	{
		std::cout << "Please select a valid option" << std::endl << std::endl;
		MainMenu;
	}
}

void GameMenu()
{
	int Gmenu_choice, pop_count, food_supply;
	char city_name[30] = "Defaultopolis";
	double treasury_count;

	std::cout << "Welcome to the city of " << city_name << std::endl;
	std::cout << "The current population of the city is " << pop_count << std::endl;
	std::cout << "The current treasury level is " << treasury_count << std::endl;
	std::cout << "The current food levels are at " << food_supply << std::endl << std::endl;

	std::cout << "Please select an action:" << std::endl;
	std::cout << "1. Examin population" << std::endl;
	std::cout << "2. Examin food production" << std::endl;
	std::cout << "3. Examin treasury" << std::endl;
	std::cout << "4. Change city name" << std::endl;
	std::cout << "5. End turn" << std::endl;
	std::cout << "6. Return to the main menu" << std::endl;

	if (Gmenu_choice == 1)//examine population
	{

	}
	else if (Gmenu_choice == 2)//examin food production
	{

	}
	else if (Gmenu_choice == 3)//examine treasury
	{
		std::cout << "The current treasury count is " << treasury_count << std::endl;
		std::cout << "Select an action:" << std::endl;
		std::cout << "1. " << std::endl;
		std::cout << "2. " << std::endl;
	}
	else if (Gmenu_choice == 4)//change city name
	{
		std::cout << "Please input the new name:" << std::endl;
		std::cin >> city_name[30];
		GameMenu();
	}
	else if (Gmenu_choice == 5)//end turn
	{

	}
	else if (Gmenu_choice == 6)//Return to the main menu
	{
		MainMenu();
	}
	else
	{
		std::cout << "Please select a valid option" << std::endl << std::endl;
		GameMenu();
	}
}

int main()
{	
	MainMenu();

	//return 0;
}