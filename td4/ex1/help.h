#ifndef HELP_H_INCLUDED
#define HELP_H_INCLUDED
void echanger(int tableau[], int i, int j) {
    int temp = tableau[i];
    tableau[i] = tableau[j];
    tableau[j] = temp;
}
void trier(int tableau[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int index_min = i;
        for (int j = i + 1; j < n; ++j) {
            if (tableau[j] < tableau[index_min]) {
                index_min = j;
            }
        }
        echanger(tableau, i, index_min);
    }
}


#endif // HELP_H_INCLUDED
