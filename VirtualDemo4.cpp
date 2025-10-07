#include<iostream>
using namespace std;

# pragma pack(1)
class Base
{   
    public :

    int i,j;

    void Fun()
    {
        cout<<"Inside Base fun.\n";
    }

    void Gun()
    {
        cout<<"Inside Base Gun.\n";
    }

    virtual void Sun()
    {
        cout<<"Inside Base Sun.\n";
    }

    virtual void Bun()
    {
        cout<<"Inside Base Bun.\n";
    }
};

#pragma pack(1)
class Derived : public Base
{ 
    public :
    
    int X;

    void Fun()
    {
        cout<<"Inside Derived fun.\n";
    }

    void Sun()
    {
        cout<<"Inside Derived fun.\n";
    }

    void Run()
    {
        cout<<"Inside Derived Run.\n";
    }

    void Mun()
    {
        cout<<"Inside Derived Mun.\n";
    }
};


int main()
{  
   Base *bp = new Derived();

   bp->Fun();      // Base Fun
   bp->Gun();      // Base Gun
   bp->Sun();      // Derived Sun
   //bp->Run();    // Error
   //bp->Mun();    // Error
   bp->Bun();      // Base Virtual Bun

    return 0;
}