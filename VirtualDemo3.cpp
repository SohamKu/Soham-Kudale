#include<iostream>
using namespace std;

class Base
{   
    public :

    int i,j;

    void Fun()
    {
        cout<<"Inside fun.\n";
    }

    void Gun()
    {
        cout<<"Inside Gun.\n";
    }

    virtual void Sun()
    {
        cout<<"Inside Sun.\n";
    }

    virtual void Bun()
    {
        cout<<"Inside Bun.\n";
    }
};

class Derived : public Base
{ 
    public :
    
    int X;

    void Fun()
    {
        cout<<"Inside fun.\n";
    }

    void Sun()
    {
        cout<<"Inside fun.\n";
    }

    void Run()
    {
        cout<<"Inside Run.\n";
    }

    virtual void Mun()
    {
        cout<<"Inside Mun.\n";
    }
};


int main()
{  
   Base *bp = new Derived();

   bp->Fun();
   bp->Gun();
   bp->Sun();
   bp->Run();
   bp->Mun();
   bp->Bun();

    return 0;
}