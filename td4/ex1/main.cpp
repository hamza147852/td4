#include <iostream>
#include "help.h"
using namespace std;





int main() {

    int tableau[] = {64, 25, 12, 22, 11};
    int n = sizeof(tableau) / sizeof(tableau[0]);

    trier(tableau, n);

    cout << "Tableau trié : ";
    for (int i = 0; i < n; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
