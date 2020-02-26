#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{

    string sana = "Saippuakauppias";
    string sana1 = sana;

    cout << "Sana on " << sana << endl;
    reverse(sana1.begin(), sana1.end());
    cout << endl;
    cout << "Katsotaan onko sana palindromi: " << sana1 << endl;


    return 0;
}
