//Program to create a class and access
//its members using objects.
#include<iostream>
#include<string>
using namespace std;

class info
{
    //Access specifier
    public:
        //Data Members
        string f_name,l_name,roll,course;
        //Member Function
        void input()
        {
            cout<< "Enter First Name: ";
            cin>> f_name;
            cout<< "Enter Last Name: ";
            cin>> l_name;
            cout<< "Enter Roll Number: ";
            cin>> roll;
            cout<< "Enter Course: ";
            cin>> course;
        }
        void display()
        {
            cout<< "\n--- Entered Information ---\n\n";
            cout<< "First Name: "<< f_name<< endl;
            cout<< "Last Name: "<< l_name<< endl;
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
