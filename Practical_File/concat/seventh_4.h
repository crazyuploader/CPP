//C++ Program to show Hierarchical Inheritance
#include<iostream>
using namespace std;

//Creating a Class 'Vehicle'
class VeHiCle
{
    public:
    VeHiCle()
    {
        cout<< "This is a Vehicle."<< endl<< endl;
    }
};

//Creating another Class 'Bus' and
//inheriting it using public
//inheritance mode
class Bus : public VeHiCle
{
    public:
    Bus()
    {
        cout<< "This is a Bus."<< endl<< endl;
    }
};

//Creating another class 'Car' and
//inheriting it using public
//inheritance mode
class CaR : public VeHiCle
{
    public:
    CaR()
    {
        cout<< "This is a Car."<< endl;
    }
};

int seventh_4()
{
    //Creating an object of Class 'Bus'
    Bus obj1;
    //Creating an object of Class 'Car'
    CaR obj2;
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
