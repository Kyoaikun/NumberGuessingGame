//Simeon Roddy
//04/14/2022
//A Number Guessing game that lets the user input random numbers to find what the right number is.


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void NumbGenerator(int guess, int num, int tries=0)                                         //Function that generates a random number and lets the user guess what that random number is
{

     srand(time(0));                                                                        //seeds random number
	 num = rand() % 50 + 1;                                                                 //Generates random number between 1 through 50

 do

	{
		cout << "Enter a number between 1 through 50 or press 0 to quit: ";                 //Asks user for a number between 1-50
		cin >> guess;
		tries++;                                                                            //increases tries variable everytime someone makes a guess


		while (cin.fail())                                                                  //If user puts in a wrong input, it will keep asking the user to enter a valid input till they do
    {
        cin.clear();
        cout << "You Have Entered An Invalid Input." << endl;
        cout << "Please Enter A Valid Number To Continue"  << endl;
        cin.ignore(1000,'\n');
        cin >> guess;
        system("CLS");
    }


        if (guess == 0)                                                                     //If user inputs 0, exit program
            exit(0);

		if (guess > num)                                                                    //If number is too high, output- Your Number is Too high!
        cout << "Your Number is Too high!\n\n";

		else if (guess < num)
        cout << "Your Number is Too low!\n\n";                                              //If number is too low, output- Your Number is Too low!

		else if (guess = num)
        cout << "\nYour Number Is Correct! You got it in " << tries << " tries!\n";         //If number is right, output- Your number is right! and how many tries it took them to guess

	} while (guess != num);
}

int main()
{
	int num, guess, tries = 0;
	char again = 'Y';
	while (again == 'Y' || again == 'Y'){

	cout << "Number Guessing Game\n\n";                                                      //Output title of game-Number Guessing Game
    NumbGenerator(num, guess, tries);

    cout << "Would You Like Play Again?" << endl << "Press Y for Yes or N for No." << endl;  //Ask user if they would like to play again. If yes, restarts Program, If no, Exits program.
    cin >> again;
    system("cls");
     }
     cout << "Okay! Thank you for playing! ";

	return 0;
}
