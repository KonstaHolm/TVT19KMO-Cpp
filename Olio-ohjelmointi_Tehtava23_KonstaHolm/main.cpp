#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand (unsigned (time(0)));
    vector<int> luvut;
    vector<int>::iterator it;
    for(int i=0; i<40; i++)
    {
        luvut.push_back(i);
    }
    cout << "Luvut ennen rng: " << endl;
    for(it=luvut.begin();it!=luvut.end();it++)
    {
        cout << *it << endl;
    }

    cout << "Luvut jalkeen rng: " << endl;
    random_shuffle(luvut.begin(), luvut.end());
    for(it=luvut.begin();it!=luvut.end();it++)
    {
        cout << *it << endl;
    }

    cout << endl;
    cout << endl;

    cout << "Lottonumerot: " << endl;
        for(it=luvut.begin(); it<luvut.begin() + 7; it++)
        {
            cout << *it << endl;
        }
    random_shuffle(luvut.begin(), luvut.end());
    cout << "Lisanumerot: " << endl;
        for(it=luvut.begin(); it<luvut.begin() + 3; it++)
        {
            cout << *it << endl;
        }



    return 0;
}
