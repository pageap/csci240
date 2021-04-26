/************************************************************
CSCI 240						Project 10			Fall 2018
Programmer: Adam Page 			Z1859276			Date: 12/7/2018				

Section: 1

Purpose: Magic Square 

NOTE AT THE END OF PROGRAM PLEASE CREATE 4 TXT FILES NAMED  loshu_puzzle1.txt loshu_puzzle2.txt loshu_puzzle3.txt loshu_puzzle4.txt
**********************************************************************/

#include <iostream>

#include <iomanip>

#include <cmath>

#include <fstream>

#include <cstdlib>

#include <cstring>

#define MAX_ROW 3
#define MAX_COL 3

using namespace std;

class LoShuMagicSquare   // naming the class

{

private :


int square[3][3];  //make sure it is a 3 by 3 square 

public :

LoShuMagicSquare();

void fillSquare(string filename);

void printSquare();

bool isMagic();

};

bool LoShuMagicSquare::isMagic()   //using bools command as instructed 

{

int count=0;

for(int i=0;i<MAX_ROW;++i)


{
	if (i==0)
	cout<< endl<< "------------";

for(int j=0;j< MAX_COL;++j)

{

count=0;

for(int k=0;k<MAX_ROW;++k)

{

for(int l=0;l< MAX_COL;++l)

{

if(square[i][j]==square[k][l])

count++;

}

}

if(count > 1)



return 0;

}

}

// Create arrays and  then declare variables

int sumDiag[2], sumCol = 0, sumRow = 0, roww[3], coll[3];

// Calculating the sum of each row

for (int row = 0; row < 3; row++)

{

sumRow = 0;

for (int col = 0; col < 3; col++)

{

sumRow += square[row][col];

roww[row] = sumRow;

}

}

// calculate the sum of each of the columns

for (int col = 0; col < 3; col++)

{

sumCol = 0;

for (int row = 0; row < 3; row++)

{

sumCol += square[row][col];  //math for the sumCol

coll[col] = sumCol;

}

}

sumDiag[0] = 0;

// calculating the Sum of Diagonal0

for (int row = 0; row < 3; row++)

{

sumDiag[0] += square[row][row];

}

sumDiag[1] = 0;

// calculating the Sum of Diagonal 1

for (int row = 0; row < 3; row++)

{

sumDiag[1] += square[row][3 - 1 - row];

}

/* checking whether sum of elements in each row,each column

along with  each diagonal to see if it is equal or not

 If it is, Then display  The square array is Magic Square

 if it isnt, then display  The square array is not Magic Square

*/

bool boolean = 1;

int sum = roww[0];

for (int i = 1; i < 3; i++)

{

boolean = boolean and (sum == roww[i]);

}

for (int i = 0; i < 3; i++)

{

boolean = boolean and (sum == coll[i]);

}

for (int i = 0; i < 2; i++)

{

boolean = boolean and (sum == sumDiag[i]);

}

if (boolean)

{

return 1;

}

else

{

return 0;

}

}

void LoShuMagicSquare::fillSquare(string filename)

{
//opens file for reading
ifstream dataIn(filename.c_str());   

//checking whether the file name is valid or if it is not valid

//if it fails 
if(dataIn.fail())

{
//display  not found 
cout<<" "<<filename<<" Not Found **";   

exit(0);

}

else

{

for(int i=0;i<3;++i)

{

for(int j=0;j<3;++j)

{

dataIn>>square[i][j];

}

}

dataIn.close();

}

}

LoShuMagicSquare::LoShuMagicSquare()

{

int ROWS=3;

int COLS=3;

for(int i=0;i<ROWS;i++)

{

for(int j=0;j<COLS;j++)

{

square[i][j]=0;

}

}

}

void LoShuMagicSquare::printSquare()

{

for(int i=0;i<3;i++)

{

for(int j=0;j<3;j++)

{

cout<<square[i][j]<<" ";

}

cout<<endl;

}

}



int main()

{

//Create a LoShuMagicSquare object for the 4 puzzles

LoShuMagicSquare puzzle;

//Display the initial puzzle, This will dispaly all 0's

cout << "Starting Puzzle values:" << endl << endl;

puzzle.printSquare();

// Opens puzzle 1 using loshu_puzzle1.txt. 
//this will display the puzzle along to see if it is magic

cout << endl << endl << "Puzzle 1:" << endl << endl;

puzzle.fillSquare( "loshu_puzzle1.txt");

puzzle.printSquare();

cout << endl << "Is it magic? " << ( puzzle.isMagic() ? "Yes": "No" ) << endl << endl << endl;

//Opens puzzle 2 using loshu_puzzle2.txt. 
 
//this will display the puzzle along to see if it is magic

cout << "Puzzle 2:" << endl << endl;

puzzle.fillSquare( "loshu_puzzle2.txt");

puzzle.printSquare();

cout << endl << "Is it magic? " << ( puzzle.isMagic() ? "Yes": "No" ) << endl << endl << endl;

//Puzzle 3 using loshu_puzzle3.txt.  
//this will display the puzzle along to see if it is magic

cout << "Puzzle 3:" << endl << endl;

puzzle.fillSquare( "loshu_puzzle3.txt");

puzzle.printSquare();

cout << endl << "Is it magic? " << ( puzzle.isMagic() ? "Yes": "No" ) << endl << endl << endl;

//Puzzle 4 using loshu_puzzle4.txt. 

//this will display the puzzle along to see if it is magic

cout << "Puzzle 4:" << endl << endl;

puzzle.fillSquare( "loshu_puzzle4.txt");

puzzle.printSquare();

cout << endl << "Is it magic? " << ( puzzle.isMagic() ? "Yes": "No" ) << endl << endl << endl;

return 0;

}

/*************************loshu_puzzle1.txt
4 9 2
3 5 7
8 1 6
***************/
/**************loshu_puzzle1.2******
2 9 1
3 5 8
7 4 6
***********/
/***********loshu_puzzle3.txt
5 5 5
5 5 5
5 5 5
************/
/***********loshu_puzzle4.txt
2 7 6
9 5 1
4 3 8
************/

