// CodSoft Internship
// Domain Name - C++ Programming
// Task - 1(Number guessing game)
// Intern Name - Jatin Singh Kushwaha

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it." << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
        }

    } while (guess != secretNumber);
    return 0;
}