/* File Name: ch5ex11.cpp
  Programmer: Katlyn Winkelhake
  Date: Nov 9 2024
  Requirements: Write a program that will predict the size of a population of organisms.

  The program should ask the user for the starting number of organisms,

  their average daily population increase (as a percentage),

  and the number of days they will multiply. A loop should display the size of the population for each day.

  Input Validation: Do not accept a number less than 2 for the starting size of the population.

  Do not accept a negative number for average daily population increase.

  Do not accept a number less than 1 for the number of days they will multiply.
*/


#include <iostream>
#include <iomanip>
using namespace std;

double organisms;
double increase;
double days;
double increaseRate;

void StartingPopulation();
void PopulationIncrease();
void DaysMultiply();
void Display();

int main()

{
StartingPopulation();
PopulationIncrease();
DaysMultiply();
Display();

  return 0;
}

void StartingPopulation(){
cout << "Please enter starting population (greater than 2)"<<endl;
  cin >> organisms;
  if (organisms < 2){
    cout << "Must be greater than 2."<<endl;
  abort();
  }
}

void PopulationIncrease(){

cout << "Please enter average daily population increase (as a percentage)"<<endl;
  cin >> increase;
  if (increase < 0){
    cout << "Increase cannot be negative." << endl;
  abort();
  }
}

void DaysMultiply(){
cout << "Please enter number of days they will multiply"<<endl;
cin >> days;
  if (days < 1){
    cout << "Days must be greater than 1."<<endl;
    abort();
  }
}

void Display(){

increaseRate = increase / 100.0;
  cout << fixed << setprecision(2);
  cout << "Day\tPopulation" << endl;

  for (int newDay = 1; newDay <= days; newDay++){
cout << newDay << "\t" << organisms << endl;
    organisms += organisms * increaseRate;
  }
  
}