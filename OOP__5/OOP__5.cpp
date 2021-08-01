#include <iostream>

using namespace std;


class MyInt
{
public:
    int j;
    int k;
     int q;
    bool operator! () const
    {

        return((j % 2) == 0);
    }

/*
    MyInt Myint()
    {
        if (j % 2 == 0)
        {
            cout<<"Chetniy" << j<<endl;
        }
        else
        {
            return;
        }
    }
    */
    MyInt operator +(MyInt myint)
    {

      myint.q + 3;
        
    }

    
    friend void operator --(MyInt & myint);
    friend void operator ==(MyInt& myint, MyInt myint1);
};
/*
MyInt operator+ (MyInt myint)
{

    return (myint.j - 3);
}*/


void operator == (MyInt & myint, MyInt & myint1)
{
    if (myint.j == myint1.j)
    {
        cout << myint.j << "Raven" << myint1.j;
    }
    else
    {
        cout << myint.j << "Ne raven" << myint1.j;
    }
}

void  operator--(MyInt & myint)
{
    for (int i = 0;i < 3;i++)
    {
        --myint.k;
    }
    cout << myint.k;
}





int main()
{
    int z = 3;
    MyInt myint;
    MyInt myint1;
    myint.j = 0;
    cin >> myint1.j;
    cin >> myint.j;
    cin >> myint.k;
    cin >> myint.q;
   // umen(myint);
   // ravenstvo(myint);
    
    if ( !myint)
    {
        cout << "j is chetniy \n";
    }
    else
    {
        cout << "j isn't chetniy \n";
    }
    --myint;
    //myint+
    myint.j == myint1.j;
    return 1;
} 
