//C++ Program to show friend function and
//friend Class
#include<iostream>
using namespace std;

class Name
{
    private:
    string name;
    public:
    Name()
    {
        name= "Jugal Kishore";
    }
    friend class showName;
};

class showName
{
    public:
    void display(Name a)
    {
        std::cout<< "Name: "<< a.name<< endl;
    }
};

int main()
{
    Name obj;
    showName show;
    show.display(obj);
    cout<< "\nCreated by Jugal Kishore -- 2019\n";
    return 0;
}
