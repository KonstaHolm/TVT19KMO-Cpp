#include <iostream>
#include <list>

using namespace std;

int main()
{

    list <int> luvut;
    int x;

    cout << "Syöta kokonaislukuja listaan, luku 0 pysayttaa syottamisen:" << endl;
    do
    {

      cin >> x;
      if (x != 0)
      {
      luvut.push_back(x);
      }

    } while (x != 0);

    luvut.sort();

    cout << endl;
    cout << "Luvut suuruusjarjestyksessa pienimmasta suurimpaan: " << endl;
    for(list <int>::iterator it=luvut.begin();it != luvut.end();it++)
    {
        cout << *it << endl;
    }

    cout << endl;
    return 0;
}
