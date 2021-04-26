/***************************************************************
CSCI 240         Program 2     Fall 2018

Programmer: Adam P Page z1859276

Section: 1

Date Due: 9/14/2018

Purpose: This program calculates the number of singles and total
         number of bases and slugging percentage
***************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
  {
  //Step 1: decalre/create variables
  
  double singleVal,totalHitsVal,doubleVal,tripleVal,homeRunVal,bats,Slug;
  
  //Step 2: get the base and height values from the user
  
  cout<< "Enter the number of hits: ";
  cin>> totalHitsVal;
  
  cout<< "Enter the number of doubles: ";
  cin>> doubleVal;
  
  cout<< "Enter the number of triples:";
  cin>> tripleVal;
  
  cout << "Enter the number of home runs:";
  cin>> homeRunVal;
  
  cout << "Enter the number of at bats:";
  cin>> bats; 
  
  cout <<endl<<endl;
   //Step 3: calculate the total number of singles
   
   //number of singles = total number of hits - number of doubles - number of triples - number of home runs
   singleVal= totalHitsVal - doubleVal - tripleVal - homeRunVal;
   
   
   	//step 4: calculate the total number of bases
	
	// total number of bases = number of singles + (number of doubles * 2) + (number of triples * 3) + (number of home runs * 4)
	
	
	double baseVal = singleVal + (doubleVal * 2) + (tripleVal * 3) + (homeRunVal * 4) ;
	
	//Convert allow slug to get decimal points from bases and bats
	Slug = ((baseVal - 1 + 1.0) / bats);


   //step 5: display single hits in a table
   
      cout << endl <<endl
   <<"***************************"<< endl <<endl
      << "Singles: " << singleVal << "  Doubles: " << doubleVal << "  Triples: " << tripleVal << "  Home Runs: " << homeRunVal<<endl<<endl
       << "Total Bases: " << baseVal << endl<<endl
       << "Slugging Percentage:   "
       
      // only allow 3 numbers beyond the decimal point
	   << fixed <<setprecision(3) << Slug;
       
      return 0;
       
       
   }
  

  
  
  
  
  
  
  
