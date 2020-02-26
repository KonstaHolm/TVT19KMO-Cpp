#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> luvut;
    vector<int>::iterator it;

    int x = 0;

    for(int i=0;i<100;i++)
    {
        x++;
        luvut.push_back(x);
        cout << "Alkio " << i << endl;
    }
    cout << "Vektorissa on " << luvut.size() << " alkiota." << endl;

    for (it=luvut.begin();it!=luvut.end();it++)
    {
    cout << "Tulostus " << *it << endl;
    }



    return 0;
}
