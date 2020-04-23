// KvadratSum.cpp

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251>null");
    int n, s = 0;
    cout << "Upper summ border: ";
    cin >> n;
    if (n > 0){
        while (n) {
            s += n * n;
            n--;
        }
        cout << "Kvadrat summ: " << s << endl;
    }
    else {
        cout << "Wrong number" << endl;
    }
    system("pause>nul");
    return 0;
}
