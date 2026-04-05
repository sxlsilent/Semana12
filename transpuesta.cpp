//ejercicio2: transpuesta de una matriz


#include <iostream>
#include <iomanip>
using namespace std;

int main() {



    int matriz[3][3] = {
        {2, 1, 3},
        {8, 9, 6},
        {0, 7, 9}
    };



    int transpuesta[3][3];


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpuesta[i][j] = matriz[j][i];
        }
    }


    cout << "Matriz original:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(4) << matriz[i][j];
        }
        cout << endl;
    }

    cout << "\nMatriz transpuesta:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(4) << transpuesta[i][j];
        }
        cout << endl;
    }

    return 0;
}
