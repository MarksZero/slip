
#include "empaquetado.h"

void emapaque(byte arr[], int len) {

    int tam = len * 2 + 2;

    byte frame[tam];

    int j = 0; // recorrer el arreglo arr
    int k = 1; // llenar el arreglo frame

    frame[0] = 0xc0; // Agregar 0xc0 al principio

    while (j < len) {
        if (arr[j] == 0xc0) {
            frame[k++] = 0xdb;
            frame[k++] = 0xdc;
            j++;
        } else if (arr[j] == 0xdb) {
            frame[k++] = 0xdb;
            frame[k++] = 0xdd;
            j++;
        } else {
            frame[k++] = arr[j];
            j++;
        }
    }

    frame[k] = 0xc0; // Agregar 0xc0 al final

    cout << endl;
    for (int i = 0; i <= k; ++i) {
        printf("%x ", frame[i]);  // el %x es para imprimir en hexadecimal
    }

}