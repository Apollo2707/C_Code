#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>

int Setup(std::stack<int>& tower, int n);
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>&, int n);
void move(std::stack<int>& source, std::stack<int>& dest);
void display();
static unsigned long long int numMoves = 0;
int numdisks = 25; //Number of discs 
std::stack<int> TowerA;
std::stack<int> TowerB;
std::stack<int> TowerC;
std::ofstream a_file("Hanoi.txt");
int counter = 0;

int main()
{
	std::clock_t begin = clock();

	int a = Setup(TowerA, numdisks);
	display();
    Hanoi(TowerA, TowerC, TowerB, numdisks);
	counter = 300000;
	display();
	std::clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	std::cout << "It took " << elapsed_secs << "seconds";
	std::cin >> a;

    return 0;

}

//Arguments: std::stack<int>& towerA - a stack container that will be setup with a number of discs 
//           int n - a number that represents the number of discs to load on to the tower stack
//Return     the number of discs that were loaded on to the tower 
//Functionality: Load a number of discs in ascending order on to the stack 
int Setup(std::stack<int>& tower, int n)
{
	for (int i = n; i > 0; i--)
	{
	
	tower.push(i);
}
	return 0;
}

//Arguments: std::stack<int>& source - the tower that discs will be moved from
//           std::stack<int>& dest - the twoer that discs will be moved to 
//           std::stack<int>& temp - a tower that can hold discs 
//           int n - the number of discs on the source tower
//Return     none
//Functionality: Move a tower from source to another tower. 
void Hanoi(std::stack<int>& source, std::stack<int>& dest, std::stack<int>& temp, int n)
{
	if (n > 0)
	{

		Hanoi(source, temp, dest,  n - 1);
		move(source, dest);
		Hanoi(temp, dest, source , n - 1);

	}
}

//Arguments: std::stack<int>& tower - a tower that has discs to dispay
//Return     none
//Functionality: Display the contents of a tower
void display()     
{
	if (counter++ != 300000)
	{
		numMoves++;
		return;
	}
	system("CLS");
	numMoves++;
	counter = 0;
	std::string output = " ";
	std::stack<int> towera = TowerA;
	std::stack<int> towerb = TowerB;
	std::stack<int> towerc = TowerC;

	for (int i = numdisks + 1; i > 0; i--)
	{
		if (towera.size() == i)
		{
			output.append(std::to_string(towera.top()) + "\t");
			towera.pop();
		}
		else
		{
			output.append("\t");
		}
		if (towerb.size() == i)
		{
			output.append(std::to_string(towerb.top()) + "\t");
			towerb.pop();
		}
		else
		{
			output.append("\t");
		}
		if (towerc.size() == i)
		{
			output.append(std::to_string(towerc.top()) + "\t");
			towerc.pop();
		}
		else
		{
			output.append("\t");
		}
		std::cout << output << std::endl ;
		//a_file << output << std::endl;
		
		output = " ";
	}
	std::cout << "______________________________"<< numMoves << std::endl;
	//a_file <<  "______________________________" << std::endl;
}

void move(std::stack<int>& source, std::stack<int>& dest)
{
	if (source.empty() == false)
	{
		if (dest.empty() == false) {if (dest.top() < source.top())
		{
			throw std::invalid_argument("trying to put larger disk on smaller disk");
		}}

		int tempValue = source.top();
		source.pop();
		dest.push(tempValue);
		display();
	}
}
