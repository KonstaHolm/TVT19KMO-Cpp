#include <iostream>
#include <math.h>
#define PI 3.14159265359

using namespace std;

class muoto {
      private:
      protected:
         double a,b;
      public:
         void set_values (int A, int B)
         {
             a = A;
             b = B;
         }

         virtual int area() =0;

};

class suorakulmio : public muoto
{

public:

    int area()
    {
        int area = (a*b);
        return area;
    }
};

class nelio : public muoto
{
private:
    bool yhtasuuruus(int kanta, int korkeus)
    {
        int ka = kanta;
        int ko = korkeus;
        if(ka==ko) {return true;}
        else {return false;}
    }

public:

     int area()
     {
        if(yhtasuuruus(a,b)){
            int area = (a*b);
            return area;
        }
        return 0;
     }


};

class ellipsi : public muoto
{
public:

    int area()
    {
        int area = (PI*a*b);
        return area;
    }
};

class ympyra : public muoto
{
private:
    int sade;
public:


    int area()
    {
        a=b;
        sade = a;
        float area = (PI*(pow(sade,2)));
        return area;
    }

};

int main()
{

     suorakulmio suorakulm;
     nelio neli;
     ellipsi ellip;
     ympyra ympyr;

     muoto *mmuot1 = &suorakulm;
     muoto *mmuot2 = &neli;
     muoto *mmuot3 = &ellip;
     muoto *mmuot4 = &ympyr;
     mmuot1->set_values (4,5);
     mmuot2->set_values (4,4);
     mmuot3->set_values (4,5);
     mmuot4->set_values (4,5);
     cout << "Suorakulmion pinta-ala: " << mmuot1->area() << endl;
     cout << "Nelion pinta-ala: " << mmuot2->area() << endl;
     cout << "Ellipsin pinta-ala: " << mmuot3->area() << endl;
     cout << "Ympyran pinta-ala: " << mmuot4->area() << endl;

    return 0;
}
