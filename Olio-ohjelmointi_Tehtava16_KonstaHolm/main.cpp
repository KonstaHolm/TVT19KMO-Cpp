#include <iostream>
#include <cmath>
#include <math.h>
#define PI 3.14159265359

using namespace std;

class laskenta
{

    private:
        float real;
        float imaginary;

    public:
        //oletusmuodostin
        laskenta()
        {
            real = 0;
            imaginary = 0;

            cout << "Loin olion oletusmuodostimella osoitteeseen " << this << endl;
        }

        //reaali- ja imaginääriosien asetus
        void setReal(float r)
        {
            real = r;
        }
        void setImaginary(float i)
        {
            imaginary = i;
        }


        //kompleksiluvun itseisarvo
        itseisarvo()
        {
            float arvo;
            arvo = sqrt(pow(real,2) + pow(imaginary,2));
            cout << "Itseisarvo on: " << arvo << endl;

            return arvo;
        }

        //kompleksiluvun vaihekulma asteina
        float vaihekulma()
        {
            float kulmaRAD;
            float kulmaAST;
            kulmaRAD = atan(imaginary/real);
            kulmaAST = kulmaRAD * (180/PI);

            cout << "Kulma asteina: " << kulmaAST << endl;
            return kulmaAST;
        }


        //parametrimuodostin
        laskenta(float r, float i)
        {
            real = r;
            imaginary = i;

            cout << "Loin olion param.muodostimella osoitteeseen " << this << endl;
        }

        //kopiointimuodostin
        laskenta(const laskenta &k)
        {
            real = k.real;
            imaginary = k.imaginary;

            cout << "Loin olion kopiointimuodostimella osoitteeseen " << this << endl;
        }

        //reaali- ja imaginääriosien tulostus
        float getReal() const
        {
            cout << "Value of real: " << real << endl;
            return real;
        }
        float getImaginary() const
        {
            cout << "Value of imaginary: " << imaginary << endl;
            return imaginary;
        }


};


int main()
{
    cout << "Testi 1, pitäisi tulostaa 0 ja 0:" << endl;
    laskenta testi1;
    testi1.getReal();
    testi1.getImaginary();

    cout << endl;
    cout << "Testi 2, pitäisi tulostaa 1 ja 2:" << endl;
    cout << endl;

    laskenta testi2(1,2);
    testi2.getReal();
    testi2.getImaginary();

    cout << endl;
    cout << "Testi 3, pitäisi tulostaa 1 ja 2:" << endl;
    cout << endl;

    laskenta testi3(testi2);
    testi3.getReal();
    testi3.getImaginary();

    cout << endl;
    cout << "Testi 4:" << endl;
    cout << endl;

    cout << "Asetus ja tulostus, tulostuksen pitäisi tulostaa 4 ja 3:" << endl;
    laskenta testi4;
    cout << endl;
    testi4.setReal(4);
    testi4.setImaginary(3);
    testi4.getReal();
    testi4.getImaginary();


    cout << endl;
    cout << "Testi 5, arvot reaali = 4 ja imaginaari = 1:" << endl;
    cout << endl;
    laskenta testi5(4,1);
    testi5.itseisarvo();
    testi5.vaihekulma();

    return 0;
}
