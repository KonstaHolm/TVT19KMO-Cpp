#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

class noppa
{
public:

    void heita_noppa() {
        srand (unsigned (time(0)));
        vector<int> luvut;
        vector<int>::iterator it;
        for(int i=0; i<6; i++)
        {
            luvut.push_back(i);
        }
        random_shuffle(luvut.begin(), luvut.end());
        for(it=luvut.begin();it!=luvut.end();it++)
        {
            cout << *it << endl;
        }

    }

};


int main()
{

    noppa arvonta;
    arvonta.heita_noppa();

    return 0;
}
