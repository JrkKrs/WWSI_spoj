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


#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int work = 1;
    int i = 1;

    int max = 0;
    int max_pos = 0;
    int min = 0;
    int min_pos = 0;
    int min_pos_lock = 0;

    int liczba;

    while (work == 1) {
        cin >> liczba;
//        if (!scanf_s("%d", &liczba)) {
//            work = 2;
//            break;
//        }
        if (liczba == 0) {
            work = 2;
            break;
        }
        if (liczba >= -500 && liczba <= 500) {
            if (max <= liczba) {
                max = liczba;
                max_pos = i;
            }
            if (min > liczba) {
                if (min != liczba) {
                    min_pos = i;
                }
                min = liczba;
            }
        }
//        else
//        {
//            work = 2;
//            break;
//        }

        i++;
    }
    cout << min;
    cout << "\n";
    cout << min_pos;
    cout << "\n";
    cout << max;
    cout << "\n";
    cout << max_pos;

    return 0;
}