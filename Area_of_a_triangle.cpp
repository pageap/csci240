/*********************************************************
Write a COMPLETE C++ program that will calculate and
display the area of a triangle. You should prompt the
user for the base and height of the triangle and then
calculate the area using the following formula:

Triangle area = 1/2 * base * height

The results (**AFTER** the prompts for base and
height) should be similar to:

*************************
Area Calculator

Base:      XXXXX.XX
Height:    YYYY.YYY
Area:      ZZZ.ZZ
*************************


*********************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
  {
  //Step 1: decalre/create variables
  double baseVal, heightVal, triArea; 
  
  
  //Step 2: get the base and height values from the user
  cout << "Enter the base value: ";
  cin >> baseVal;
  
  cout<< "Enter the height value: ";
  cin >> heightVal;
  
  //Step 3: calculate the are of the triangle 
  
  triArea = 1/2.0 * baseVal * heightVal; 
  
  
  
  //Step 4: display the area in a table


  cout << fixed << setprecision (4);  // 4 digits after the decimal point
  

  // Long cout statement to produce the table
  cout << endl <<endl 
       << "***********************" << endl
       << "Area Calculator" <<  endl << endl
       << "Base:" <<setw(15) << baseVal << endl
       << "Height:" <<setw(13)  << heightVal << endl
       << "Area:" <<setw(15)  <<triArea << endl
       << "***********************" << endl;
       
       
       // multiple cout statements 
       cout << endl << endl;
       cout <<"****************************************" <<endl;
       cout << "Area Calculator" << endl << endl;
       cout << "Base:          " << baseVal << endl;
       
       return 0;
       
  return 0;
  }




