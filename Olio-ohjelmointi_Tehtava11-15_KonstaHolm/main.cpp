#include <iostream>
using namespace std;

class suorakulmio
{
private:

    int W;
    int H;

public:

    //Kohta 12 ****
    suorakulmio()
    {
        W = 0;
        H = 0;

        cout << "Loin olion oletusmuodostimella osoitteeseen " << this << endl;
    }
    //Kohta 12 ****

//Kohta 11 **********
    void setW(double width)
    {
        W = width;
    }

    void setH(double height)
    {
        H = height;
    }

    double getW() const
    {
        return W;
    }

    double getH() const
    {
        return H;
    }
//Kohta 11 **********

//Kohta 13 **********
    suorakulmio(int w, int h)
    {
        W = w;
        H = h;

        cout << "Loin olion param. muodostimella osoitteeseen " << this << endl;
    }

    suorakulmio(const suorakulmio &s)
    {
        W = s.W;
        H = s.H;

        cout << "Loin olion kopiointimuodostimella osoitteeseen " << this << endl;
    }
//Kohta 13 **********

//Kohta 14 **********
    double area() const
    {
        double area = W * H;

        return area;
        cout << "Suorakulmion pinta-ala on " << area << endl;
    }
//Kohta 14 **********

//Kohta 15 **********
    int compare(const suorakulmio &s)
    {
        if ((this -> W * this -> H) > (s.W * s.H))
        {
            return 1;
        }

        if ((this -> W * this -> H) == (s.W * s.H))
        {
            return 0;
        }

        if ((this -> W * this -> H) < (s.W * s.H))
        {
            return -1;
        }

        return 2;
    }
//Kohta 15 **********

};


int main()
{

    class suorakulmio testi1(2,2);
    class suorakulmio testi2(1,1);
    cout << endl;
    cout << testi1.compare(testi2) << endl;
    cout << testi2.compare(testi2) << endl;

    return 0;
}
