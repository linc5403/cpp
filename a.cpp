/*
 * ============================================================================
 *
 *       Filename:  a.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/18/2020 11:32:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lin chuan , linch1982@gmail.com
 *   Organization:  
 *
 * ============================================================================
 */
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    void sort(int x, int y, int z);
    cin >> x >> y >> z;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    sort(x, y, z);
    return 0;
}

void sort(int x, int y, int z) {
    int temp;
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (z < x) {
        cout << z << ',' << x << ',' << y << endl;
    } else if (z < y) {
        cout << x << ',' << z << ',' << y << endl;
    } else {
        cout << x << ',' << y << ',' << z << endl;
    }
}
