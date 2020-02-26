#include <iostream>

using namespace std;


class muoto {
      private:
      protected:
         double a,b;
      public:
};

class suorakulmio : public muoto
{

public:
    suorakulmio()
    {
        a=0;
        b=0;
        cout << "Loin olion oletusmuodostimella osoitteeseen " << this << endl;
    }

    suorakulmio(double A, double B)
    {
        a = A;
        b = B;
        cout << "Loin olion parametrimuodostimella osoitteeseen " << this << endl;
    }

    void area()
    {
        double area = (a*b);
        cout << "Mitat ovat: " << a << " ja " << b << endl;
        cout << "Pinta-ala on: " << area << endl;
    }
};

class nelio : public suorakulmio
{
private:
    bool yhtasuuruus(double kanta, double korkeus)
    {
        double ka = kanta;
        double ko = korkeus;
        if(ka==ko) {return true;}
        else {return false;}
    }

public:
    nelio()
    {
        a=0;
        b=0;
    }
    nelio(double A, double B)
    {
        a = A;
        b = B;
    }
    void area()
    {
        if(yhtasuuruus(a,b)){
        double area = (a*b);
        cout << "Mitat ovat: " << a << " ja " << b << endl;
        cout << "Nelion pinta-ala on: " << area << endl;
        } else  { cout << "Ei voida laskea pinta-alaa neliolle" << endl; }
    }



};

int main()
{

    nelio s(2, 6);
    nelio n(4,4);
    s.area();
    n.area();

    return 0;
}
