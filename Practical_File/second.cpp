//Program to create a class and access
//its members using objects.
#include<iostream>
using namespace std;

class info
{
    //Access specifier
    public:
        //Data Members
        string name,roll,course;
        //Member Function
        void input()
        {
            cout<< "Enter Name: ";
            cin>> name;
            cout<< "Enter Roll Number: ";
            cin>> roll;
            cout<< "Enter Course: ";
            cin>> course;
        }
        void display()
        {
            cout<< "\n--- Entered Information ---\n\nJuga";
            cout<< "Name: "<< name<< endl;
            cout<< "Roll Number: "<< roll<< endl;
            cout<< "Course: "<< course<< endl;
        }

};

int main()
{
    //Declaring an object of class 'info'
    info a;
    a.input();
    a.display();
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
