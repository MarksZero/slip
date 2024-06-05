#include "desempaquetado.h"

void desempaqueta(byte frame[], int len_fr){


    int len_frame = len_fr;

    byte arr[len_frame];
    int len_arr = 0;

    int j = 1; // recorrer el arreglo frame ignorando el primero 0xc0

    while (j < len_frame-1) { // se ignora el ultimo al sr 0xc0
        if (frame[j] == 0xdb) {
            if (frame[j + 1] == 0xdc) {
                arr[len_arr++] = 0xc0;
                j += 2;
            } else if (frame[j + 1] == 0xdd) {
                arr[len_arr++] = 0xdb;
                j += 2;
            }
        } else {
            arr[len_arr++] = frame[j];
            j++;
        }
    }
    cout << "Version original: ";
    for (int i = 0; i < len_arr; i++) {
        printf("%x ", arr[i]);
    }
    cout << endl;
}