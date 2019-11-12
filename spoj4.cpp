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
//Przykład
//
//        Wejście:
//
//5
//3
//1 0 1
//3 0 4
//2 1 -1
//4 3 2
//-4 3 3
//
//Wyjście:
//
//46 2 7
//2 19 14
//7 14 31
//

//
// Created by kryspjar on 12.11.2019.
//
#include <string>
#include <iostream>
#include <regex>

using namespace std;

int main() {

    int wiersze;
    int kolumny;

    cin >> wiersze;
    cin >> kolumny;

    int macierz[wiersze][kolumny];
    int macierz_t[kolumny][wiersze];
    int macierz_w[kolumny][kolumny];

    string row;
    int tmp;
    int count = 0;

    regex regex(" ");
    cin.ignore();
    for (int i = 0; i < wiersze; i++) {
        row = "";
        count = 0;
        getline(cin, row);
        vector<std::string> out(
                std::sregex_token_iterator(row.begin(), row.end(), regex, -1),
                std::sregex_token_iterator()
        );
        for (auto &s: out) {

            macierz[i][count] = atoi(s.c_str());
            count++;
        }
    }

    for (int j = 0; j < wiersze; j++) {
        for (int i = 0; i < kolumny; i++) {
            macierz_t[i][j] = macierz[j][i];
        }
    }


    for (int k = 0; k < kolumny; k++) {
        for (int i = 0; i < kolumny; i++) {
            tmp = 0;
            for (int j = 0; j < wiersze; j++) {
                tmp += macierz[j][i] * macierz_t[k][j];
            }
            macierz_w[k][i] = tmp;
        }
    }

    for (int j = 0; j < kolumny; j++) {
        for (int i = 0; i < kolumny; i++) {
            cout << macierz_w[i][j];
            if(i<2)
                cout << " ";
//            if(i==2 && j < 2)
//                cout << " ";
        }
        if (j != 2) {
            cout << endl;
        }
    }
    return 0;
}
