#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int add(int x, int y)
{
    x=x+y;
    return x;
}

int recursion()
{
    int sum=0,i,n,x;
    cout<< "///Program to Display Grand Total of 'n' Number(s) using Recursion///"<< endl << endl;
    cout<< "Enter Number of Number(s): "<< endl;
    cin>> n;
    for(i=0;i<n;i++)
    {
        cout<< "\nEnter Number: "<< endl;
        cin>> x;
        sum=add(sum,x);
    }
    cout<< NEWLINE<< "Grand Total: "<< sum;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2020"<< NEWLINE;
    return 0;
}