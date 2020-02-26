#include <iostream>
#include <algorithm>
#include <list>

using namespace std;
bool parillinen (int i)
{
    return ((i%2)==0);
}

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
    int parillisetLuvut = count_if (luvut.begin(),luvut.end(),parillinen);
    cout << "Listalla on " << parillisetLuvut << " parillista lukua." << endl;

    cout << endl;
    return 0;
}
