// #include<stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void createPatternOne(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void createPatternTwo(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void createPatternThree(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void createPatternFour(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

void createPatternFive(int row, int col)
{
    for (int i = row; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void createPatternSix(int row, int col)
{
    for (int i = row; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
// -------------------------------------
// row 5 & col 5

// 1 =>  [4,1,4]   || [0,9,0]
// 2 =>  [3,3,3]   || [1,7,1]
// 3 =>  [2,5,2]   || [2,5,2]

// 0 indexing loop
// space 5 - 0 - 1 = 4
// space 5 - 1 - 1 = 3
// space 5 - 2 - 1 = 2
// space row - i - 1

// star 0 + 1 * 2 - 1  = 1
// star 1  + 1 * 2 - 1  = 3
// star 2 + 1 * 2 - 1  = 5
// star [i + 1 * 2 -1]

//     *
//    ***
//   *****
//  *******
// *********

void createPatternSeven(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        // space
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (i + 1) * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// -------------------------------------

// 5 =>  [0,9,0]
// 4 =>  [1,7,1]
// 3 =>  [2,5,2]

// star
//  i = 5;
//  (i * 2) - 1
//  (5 * 2) - 1 = 9
//  (4 * 2) - 1 = 7

// space (row = 5  i = 5)
//  row - i
//  5 - 5      = 0
//  5 - 4      = 1
//  5 - 3      = 2

//*********
// *******
//  *****
//   ***
//    *

// If Question is complicated then write it down, and see what you have and how can you use them.

void createPatternEight(int row, int col)
{
    for (int i = row; i > 0; i--)
    {
        // space
        for (int j = 0; j < row - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (i * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// ------------------------------------
// use     createPatternSeven(5,5);
//         createPatternEight(5, 5);
// to create the pattern no nine (9)

//-------------------------------------

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

void createPatternTen(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        // star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = row; i > 0; i--)
    {
        // star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// -----------------------------
// 1
// 01
// 010
// 1010
// 10101

void createPatternEleven(int row, int col)
{
    int jValue = 1;
    for (int i = 0; i < row; i++)
    {
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << jValue;

            if (jValue == 1 || jValue > 1)
            {
                jValue = 0;
            }
            else
            {
                jValue++;
            }
        }
        cout << endl;
    }
}

int main()
{
    createPatternEleven(5, 5);
    return 0;
}