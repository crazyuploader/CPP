#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int gen()
{
    srand((unsigned)time(NULL));
    int number=1;
    while(number%100!=0)
    {
        number=rand()%1000+1;
    }
    return number;
}

int main()
{
    int temp;
    string name;
    cout<< "///Fun///"<< endl<< endl;
    cout<< "Enter your First Name: ";
    cin>> name;
    cout<< "\nHi "<< name<< "!"<< endl<< endl;
    cout<< "Let's Play?"<< endl<< endl;
    cout<< "Press 1 to Continue or anything else to Exit"<< endl;
    cin>> temp;
    if(temp!=1)
    {
        cout<< "\nOff my program you "<< name<< " go!\nExiting...";
        cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
        exit(0);
    }
    int secret=gen();
    cout<< "\nOkay, here it is\nJust do as I say - \n\n";
    cout<< "Step 1. Think of a Number.\n";
    cout<< "Step 2. Double it.\n";
    cout<< "Step 3. Add --->> "<< secret<< " in it.\n";
    cout<< "Step 4. Now half the Number.\n";
    cout<< "Step 5. Subtract the Original Number you had thought of.\n\n";
    cout<< "Final Answer is: --->> "<< secret/2<< endl;
    cout<< "\nPress 1 to see how this trick works or 2 to Exit"<< endl;
    cin>> temp;
    if(temp==2)
    {
        cout<< "\nOff my program you "<< name<< " go!\nExiting...";
        cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
        exit(0);
    }
    cout<< "Step 1. Ask them to think any Number\n";
    cout<< "Meanwhile, think of any Number in your head\n";
    cout<< "Step 2. Ask them to Double the Number they just thought\n";
    cout<< "Step 3. Ask them to Add the Number in it\n";
    cout<< "Step 4. Let them Divide it by 2\n";
    cout<< "Step 5. Ask them to Subtract the Original Number they had thought\n";
    cout<< "Final Answer should be half of the Number you thought\n";
    cout<< "\nK Thanks, Bye Bye "<< name;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
