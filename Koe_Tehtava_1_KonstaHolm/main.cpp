#include <iostream>

using namespace std;
bool karkausvuosi(int);

int main()
{

    cout << karkausvuosi(1900) << endl;
    cout << endl;
    cout << karkausvuosi(1904) << endl;
    cout << endl;
    cout << karkausvuosi(2000) << endl;
    cout << endl;
    cout << karkausvuosi(2004) << endl;
    cout << endl;
    cout << karkausvuosi(2008) << endl;

    int x;
    cout << "Syota nyt vuosiluku niin kerron onko se karkausvuosi vai ei:" << endl;
    cin >> x;
    cout << karkausvuosi(x) << endl;

    return 0;
}

bool karkausvuosi(int vuosi)
{
    int vuosiluku = vuosi;
    if (((vuosi % 4 == 0) && (vuosi % 100 != 0)) || (vuosi % 400 == 0))
    {
        cout << "Vuosi: " << vuosi << endl;
        cout << "On karkausvuosi" << endl;
        return true;
    }
    else
    {
        cout << "Vuosi: " << vuosi << endl;
        cout << "Ei ole karkausvuosi" << endl;
        return false;
    }

}
