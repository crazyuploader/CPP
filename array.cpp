#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int number, i;
    cout<< "///Array Program///"<< endl<< endl;
    cout<< "Enter Number of elements you want to have: ";
    cin>> number;
    cout<< endl;
    cout<< "Enter Array"<< endl<< endl;
    int array[number]; // Array Initialization
    for(i=0;i<number;i++)
    {
        cout<< "Enter "<< i<< " element: ";
        cin>> array[i];
    }
    cout<< endl;
    int lowest = array[0];  // Assuming first element of the array as lowest
    int highest = array[0]; // Assuming first element of the array as highest
    cout<< "Array --->";
    for(i=0;i<number;i++)
    {
        cout<< " "<< array[i];
    }
    cout<< endl<< endl;
    cout<< "Lowest element is = ";
    for (i=1;i<number;i++)
    {
        if (lowest > array[i])
        {
            lowest = array[i];
        }
    }
    cout<< lowest<< endl;
    cout<< "Highest element is = ";
    for (i=1;i<number;i++)
    {
        if (highest < array[i])
        {
            highest = array[i];
        }
    }
    cout<< highest;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2020"<< NEWLINE;
    return 0;
}
