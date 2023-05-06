#include <iostream>
#include <fstream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        string filename = "file" + to_string(i) + ".txt";

        // Abrir el archivo en modo de agregar
        ofstream archivo(filename, ios::app);

        for (int j = 0; j < i; j++) {
            archivo << "Texto para el archivo " << i << " - línea " << j + 1 << endl;
        }

        archivo.close();
    }

    return 0;
}


