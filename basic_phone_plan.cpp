/***************************************************************
CSCI 240         Program 3     Fall 2018

Programmer: Adam Page

Section: 1

Date Due:9/14/18

Purpose: This program Allows user to choose phone plan and then calculate the savings!
***************************************************************/
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
  char package;
  int minutes = 0;
  int count = 0;
  double cost, acost, bcost, ccost, asave, bsave, csave;
  while (count == 0)
  {
    cout << "What package do you have? (A, B, or C): ";
    cin >> package;
    if(package == 'A' || package == 'B' || package == 'C' || package == 'a' || package == 'b' || package == 'c')
      count = 1;
    else
    {
      cout << "\n";
      count = 0;
    }
  }
  count = 0;
  while (count == 0)
  {
    cout << "\nPlease enter how many minutes you used: ";
    cin >> minutes;
    if(minutes >= 0)
      count = 1;
    else
    {
      cout << "\n";
      count = 0;
    }
  }
  
  if (package == 'A' || package == 'a')
  {
    if (minutes > 300)
      cost = 29.99 + (minutes - 300) * .32;
    else
      cost = 29.99;
      
    if (minutes > 750)
      bcost = 49.99 + (minutes - 750) * .28;
    else
      bcost = 49.99;
    
    ccost = 59.99;
    
    bsave = cost - bcost;
    csave = cost - ccost;
      
  }
  else if (package == 'B' || package =='b')
  {
    if (minutes > 750)
      cost = 49.99 + (minutes - 750) * .28;
    else
      cost = 49.99;
    
    if (minutes > 300)
      acost = 29.99 + (minutes - 300) * .32;
    else
      acost = 29.99;
    
    ccost = 59.99;
    
    asave = cost - acost;
    csave = cost - ccost;
    
  }
  else if (package == 'C' || package =='c')
  {
      cost = 59.99;
      
    if (minutes > 300)
      acost = 29.99 + (minutes - 300) * .32;
    else
      acost = 29.99;
      
    if (minutes > 750)
      bcost = 49.99 + (minutes - 750) * .28;
    else
      bcost = 49.99;
      
      asave = cost - acost;
      bsave = cost - bcost;
  }
  cout << fixed << setprecision(2) << "\n";
  cout << "Your cost is $" << cost;
  
  if (package == 'A' || package == 'a')
  {
    cout << "\nPackage B would have cost $" << bcost;
    if (bsave > 0)
      cout << " and saved you $" << bsave;
    else
      cout << " -- no savings";
    cout << "\nPackage C would have cost $" << ccost;
    if (csave > 0)
      cout << " and save you $" << csave;
    else
      cout << " -- no savings";
  }
  else if (package == 'B' || package == 'b')
  {
    cout << "\nPackage A would have cost $" << acost;
    if (asave > 0)
      cout << " and saved you $" << asave;
    else
      cout << " -- no savings";
    cout << "\nPackage C would have cost $" << ccost;
    if (csave > 0)
      cout << " and save you $" << csave;
    else
      cout << " -- no savings";
  }
  else if (package == 'C' || package == 'c')
  {
    cout << "\nPackage A would have cost $" << acost;
    if (asave > 0)
      cout << " and saved you $" << asave;
    else
      cout << " -- no savings";
    cout << "\nPackage B would have cost $" << bcost;
    if (bsave > 0)
      cout << " and save you $" << bsave;
    else
      cout << " -- no savings";
  }
return 0;  
}
