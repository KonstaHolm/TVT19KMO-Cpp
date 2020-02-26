#include <iostream>
#include <math.h>
#define PI 3.14159265359

using namespace std;

class muoto {
      private:
      protected:
         double a,b;
};

class ellipsi : public muoto
{
public:
    ellipsi()
    {
        a=0;
        b=0;
        cout << "Loin olion oletusmuodostimella osoitteeseen " << this << endl;
    }
    ellipsi(double A, double B)
    {
        a = A;
        b = B;
        cout << "Loin olion parametrimuodostimella osoitteeseen " << this << endl;
    }
    void ellipsiarea()
    {
        double area = (PI*a*b);
        cout << "Mitat ovat: " << a << " ja " << b << endl;
        cout << "Pinta-ala on: " << area << endl;
    }
};

class ympyra : public ellipsi
{
private:
    double sade;
public:
    ympyra()
    {
        sade = 0;
    }
    ympyra(double r)
    {
        sade = r;
    }
    void circlearea()
    {
        float area = (PI*(pow(sade,2)));
        cout << "Ympyran pinta-ala on: " << area << endl;
    }

};

int main()
{

    ellipsi e(2, 6);
    e.ellipsiarea();
    ympyra y(3);
    y.circlearea();


    return 0;
}
