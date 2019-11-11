//ASD_1_4 - Iloczyn macierzy
//
//Dana jest prostokątna macierz X, zawierająca liczby całkowite, składająca się z m wierszy i n kolumn. Liczba wierszy i kolumn jest nie większa niż 100.
//
//Należy napisać program, który znajdzie iloczyn macierzy XTX.
//Wejście
//
//        W pierwszej linii wejścia znajduje się liczba całkowita m ∈ [1;100] określająca liczbę wierszy macierzy X. W drugiej linii wejścia znajduje się liczba całkowita n ∈ [1;100] określająca liczbę kolumn macierzy X. W kolejnych m liniach znajduje się po n liczb całkowitych, z przedziału [-100;100], oddzielonych spacją określających elementy macierzy X.
//Wyjście
//
//        Na wyjściu należy wypisać macierz wynikową XTX.

#include <cstdio>
#include<string>
#include <iostream>

using namespace std;

int main() {

    int kk, jj;
    cin >> kk;
    cin >> jj;

    const int wiersze = kk;
    const int kolumny =jj ;

    int macierz[wiersze][kolumny];
    int macierz_t[kolumny][wiersze];
    int macierz_w[kolumny][kolumny];
    string row;


    for (int i = 0; i < wiersze; i++) {
        getline(cin, row);
        for (int j = 0; j < kolumny; j++) {
            macierz[i][j] = stoi(row.substr(0, row.find(" ")));
        }
    }

    for (int j = 0; j < kolumny; j++) {
        for (int i = 0; i < wiersze; i++) {
            macierz_t[j][i] = macierz[i][j];
        }
    }

    for (int k = 0; k < kolumny; ++k) {
        for (int i = 0; i < kolumny; ++i) {
            int tmp;
            for (int j = 0; j < wiersze; ++j) {
                tmp += macierz[k][j] * macierz_t[j][i];
            }
            macierz_w[k][i] = tmp;
        }
    }


    for (int j = 0; j < kolumny; j++) {
        for (int i = 0; i < kolumny; i++) {
            cout << macierz_w[i][j];
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}