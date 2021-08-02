#include <iostream>

using namespace std;


class MyInt
{
public:
    int j;
    int k;
   
    bool operator! () const
    {

        return((j % 2) != 0);
    }


  
    int operator + (int s)
{
      
    return this->j+s;

}
   
    
    friend void operator --(MyInt & myint);
    friend bool operator ==(MyInt myint, MyInt myint1);
};




bool operator == (MyInt  myint, MyInt  myint1)
{
    
    return myint.j == myint1.j;
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
   
     myint1.j=2;
     myint.j=2;
     myint.k=4;
   
  
    if ( !myint)
    {
        cout << "j is chetniy \n";
    }
    else
    {
        cout << "j isn't chetniy \n";
    }
    --myint;
    int seconds = myint + 3;
    cout << seconds;
  
    if (myint == myint1)
    {


        cout << "equal";
    }
     
    return 1;
} 
