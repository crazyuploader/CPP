#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int main()
{
    int array[] = {2, 6, 1, 5, 24, 37, 25}; // An array
    int i;
    int lowest = array[0];  // Assuming first element of the array as lowest
    int highest = array[0]; // Assuming first element of the array as highest
    cout<< "///Array Program///"<< endl<< endl;
    cout<< "Array -->";
    for(i=0;i<6;i++)
    {
        cout<< " "<< array[i];
    }
    cout<< endl<< endl;
    cout<< "Lowest element is = ";
    for (i=1;i<6;i++)
    {
        if (lowest > array[i])
        {
            lowest = array[i];
        }
    }
    cout<< lowest<< endl<< endl;
    cout<< "Highest element is = ";
    for (i=1;i<6;i++)
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