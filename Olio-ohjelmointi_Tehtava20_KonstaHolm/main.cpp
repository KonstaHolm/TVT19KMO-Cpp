#include <iostream>
#include <string>

using namespace std;

int main()
{

    string eka = "yksi";
    string toka = "kaksi";

    cout << "Ennen swappia eka ja toka: " << eka << " & " << toka << endl;

    swap(eka, toka);

    cout << "Swapin jalkeen eka ja toka: " << eka << " & " << toka << endl;


    int yksi = 10;
    int kaksi = 20;

    cout << "Ennen swappia eka ja toka: " << yksi << " & " << kaksi << endl;

    swap(yksi, kaksi);

    cout << "Swapin jalkeen eka ja toka: " << yksi << " & " << kaksi << endl;
    return 0;
}
