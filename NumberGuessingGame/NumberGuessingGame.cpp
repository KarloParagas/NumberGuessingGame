#include <iostream>
#include <random>
using namespace std;

int generateRandomNumber()
{
	int minValue = 1;
	int maxValue = 10;

	return rand() % maxValue + minValue;
}

int main()
{
	int number;
	bool keepGoing = true;
	string yes = "y";
	string no = "n";
	string playAgain;

	while (keepGoing) 
	{
		number = generateRandomNumber();

		for (int i = 2; i >= 0; i--) 
		{
			int answer;
			int tries = 1;

			cout << "Guess a number from 1 to 10: ";
			cin >> answer;

			if (answer == number) 
			{
				cout << "You guessed correctly in " << tries << " tries! Good job!" << endl;
				break;
			}
			else 
			{
				cout << "Wrong! You have " << i << " tries left.\n";
				tries++;
			}
		}
		
		cout << "\nDo you want to play again? y or n: ";
		cin >> playAgain;
		cout << endl;

		if (playAgain == yes) 
		{
			keepGoing = true;
		}
		else 
		{
			keepGoing = false;
		}
	}
}
