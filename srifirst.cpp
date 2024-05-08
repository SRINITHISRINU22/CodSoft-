#include<iostream>
#include <ctime>
using namespace std;

int main()
{

cout<<"----------------WELCOME TO NUMBER GUESSING GAME--------------------"<<endl;
std :: cout << "Enter guess limit: ";
int lim; std::cin >> lim;
srand( time(0) ^ clock() );
const int num = rand() % lim;
while (true)
 {
std :: cout << "Enter your guess: ";
int guess; std::cin >> guess;
if (guess < num) 
{
std :: cout << "Your guess is too small, please retry"<<endl;
continue;
}
 else if (guess > num)
  {
std :: cout << "Your guess is too large, please retry"<<endl;
continue;
} 
else
 {
std :: cout << "You have guessed correctly!\n";
break;
 }
 }
return 0;
}