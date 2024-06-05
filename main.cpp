#include "empaquetado.h"
#include "desempaquetado.h"

#define byte unsigned char
using namespace std;

int main() {

    cout << "Empaquetado: "<<endl;
    int arr[] = {0x23, 0x12, 0xc0, 0x1a, 0x5c, 0xaf};
    emapaque(arr, (sizeof(arr) / sizeof(arr[0])));

    cout << "\n\nDesempaquetado: "<<endl;
    byte frame[] = {0xc0, 0x23, 0x12, 0xdb, 0xdc, 0x1a, 0x5c, 0xaf, 0xc0};
    desempaqueta(frame, (sizeof(frame) / sizeof(frame[0])));

    return 0;
}
