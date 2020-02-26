#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    cout << "Syota lukuja, 0 lopettaa syoton: " << endl;

    vector <double> luvut;
    vector <double>::iterator it;

    double x;

    do
    {
        cin >> x;
        if(x!=0)
        {
            luvut.push_back(x);
        }
    } while (x!=0);

    cout << "Luvut: " << endl;
    double lukuja = 0;
    for(it = luvut.begin(); it!=luvut.end(); it++)
    {
        cout << *it << endl;
        lukuja++;
    }
    cout << endl;
    cout << "Lukuja on: " << lukuja << " kappaletta." << endl;

    double keskiarvo = accumulate(luvut.begin(), luvut.end(),0)/lukuja;

    cout << "Lukujen keskiarvo on: " << endl;
    cout << keskiarvo << endl;


    return 0;
}
