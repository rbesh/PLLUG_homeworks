#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	int temp;
	std::string user_choice;
	std::string computer_choice;
	
	cout << "Enter Rock, Scissors or Paper:" << endl;
	cin >> user_choice;
	temp = rand() % 2;
	if (temp == 0)
	{
		computer_choice = "Rock";
	} else
		if (temp == 1)
		{
			computer_choice = "Scissors";
		} else
			{
				computer_choice = "Paper";
			}
	
	if (((user_choice == "Rock") && (computer_choice == "Scissors")) ||
		((user_choice == "Scissors") && (computer_choice == "Paper")) ||
		((user_choice == "Paper") && (computer_choice == "Rock")) )
	{
		cout << "You win!" << endl;
	} else
		{
			cout << "Looser!" << endl;
		}


	return 0;
}
