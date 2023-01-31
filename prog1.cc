/*
// Josh Khalil
// CS 2400
// Simple program outputting based on user input
// September 23, 2022
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int number;   // Be sure to add comments for each of these variables
		// that are declared!

  int answer;   // Don't forget this one.

  do {
    cout << "Enter a number, and I'll compute the answer:";
    cin >> number;
    switch (number) {
    case 12345:
    answer = 12345;
      cout << "You have the answer already!\n";
      break;
    case 0:
      cout << "You've got nothing!\nTry again.\n";
      break;
    case 1:
      cout << "Well, at least you have something\nBut it's not enough, try again.\n";
      break;
    case 13:
      cout << "You're very unlucky aren't you.\nTry again.\n";
      break;
    case 21:
      cout << "Well, I'll give you one more, but it's still not enough.\n"
	   << "Try again.\n";
      break;
    default:
      cout << "That number is so bogus, I'm taking what little you have away from you.\n"
	   << "Try again, and be smart about it this time.\n";
      break;
    }
    
  } while (answer != 12345);
  {
  cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";
  }
  return (EXIT_SUCCESS);
}
