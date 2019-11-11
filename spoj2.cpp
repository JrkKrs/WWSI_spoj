//
// Created by kryspjar on 02.11.2019.
//

#include <iostream>

using namespace std;

int maina(void) {
    int min = 101;

    int i = 0;
    int iSave = 0;
    while (true) {
        i++;
        int tmp;
        cin >> tmp;
        if (tmp == 0) {
            break;
        }
        if (min >= tmp) {
            min = tmp;
            iSave = i;
        }


    }
    cout << min;
    cout << "\n";
    cout << iSave;


    return 0;
}