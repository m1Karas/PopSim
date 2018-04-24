//Prototype of a population simulation
//all values are subject to change

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

int popGrowth(int initialPop, double growthRate)//calculates population growth for the turn
{
	//Just does the math to change population count

}

double growthRate(double x, double y, double z)//calculates growth rate based on different factors
{
	

}

double foodConsumption(double x, double richY, double middleY, double poorY, double slaveY)//calculates food consumption
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
}

int main()
{
	int popCount;
	

	return 0;
}