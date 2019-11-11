#include <iostream>
using namespace std;

int main1(void) {
    int max=0;

    int i = 0;
    while(true)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
        {
            break;
        }
        if(max < tmp)
        {
            max = tmp;
        }


    }
    cout << max;


    return 0;
}