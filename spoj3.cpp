//ASD_1_3 - Najmniejsza i największa liczba w ciągu
//
//Dany jest ciąg liczb całkowitych. Liczby w ciągu mogą się powtarzać.
//
//Należy znaleźć najmniejszą i największą liczbę w ciągu. Dla liczby najmniejszej należy podać jej najwcześniejsze położenie w ciągu, zaś dla liczby największej, jej ostatnie położenie w ciągu.
//Wejście
//
//        Na wejściu znajduje się znajduje się ciąg liczb całkowitych z przedziału [-500;500]. Każdy element ciągu podany jest w osobnej linii.
//Wyjście
//
//        Na wyjściu należy wypisać w osobnych liniach cztery liczby całkowite oznaczające kolejno:
//
//Wartość najmniejszej liczby w danym ciągu
//Najwcześniejsze położenie liczby najmniejszej
//Wartość największej liczby w danym ciągu
//Ostatnie położenie liczby największej
//
//Przykład
//
//        Wejście:
//
//4
//-3
//7
//2
//-1
//11
//-3
//7
//11
//2
//4
//
//Wyjście:
//
//-3
//2
//11
//9




#include <iostream>

using namespace std;

int main() {
    int max = -999;
    int max_pos = 0;
    int min = 999;
    int min_pos = 0;

    int x;

    for (int i = 1; i < 999; i++) {


        cin >> x;
        if (x == 999)
            break;

//        if (x >= -500 && x <= 500) {
        if (max <= x) {
            max = x;
            max_pos = i;
        }
        if (min > x) {
            min = x;
            min_pos = i;
        }
//        }
    }
    cout << min << "\n";
    cout << min_pos << "\n";
    cout << max << "\n";
    cout << max_pos;

    return 0;

}