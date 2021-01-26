/*
Author  :Nishant Shukla
Date    :25/01/21
Purpose :Create a program where the user guesses a number.
*/
#include <iostream>
using namespace std;
int main() 
//Definition of the main function
{ 
  double num; //Declaration of the variable num where the user will guess the number
  //Double is used to accept all values that fall in the range of 1 to 10. 
  cout << "Pick a number between 1 and 10: "; //User is prompted to pick a number anywhere between 1 and 10
  cin >> num; //User inputs their number
  while (num < 1 || num > 10) //While loop used to prompt an error if the user doesn't enter a value within the range of 1 - 10
  {
    cout << "Error! Please enter the number again: "; //Error prompt to request the user to enter the number again
    cin >> num; //User inputs their number again
  }
       if (num == 7) 
      {
        cout << "Congratulations, you have won a prize!!" << endl; //Gives this message if the user enters 7
      } 
      else (cout << "Better luck next time! :(") << endl; //Gives this message if the user enters any number that isn't 7

  return 0;
}
