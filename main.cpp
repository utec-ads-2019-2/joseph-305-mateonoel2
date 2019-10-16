#include <iostream>
#define unt unsigned int
using namespace std;

long respuestas[14]= {0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};

/*void calcularRespuestas() {
    for (unt k = 0; k < 14; k++) {
        long m = k + 1;
        bool saved = false;

        while (!saved) {
            long killPos = 0;
            bool goodGuysSaved = true, goodGuyKilled = false;

            for (unt i = 0; i < k and !goodGuyKilled; i++) {
                killPos = (killPos + m - 1) % (2 * k - i);
                if (killPos < k) {
                    goodGuysSaved = false;
                    goodGuyKilled = true;
                }
            }
            if (goodGuysSaved) {
                respuestas[k] = m;
                saved = true;
            }
            ++m;
        }
    }
}*/

int main() {
    unt k;
  //calcularRespuestas();
       while (cin >> k and k != 0)
         cout << respuestas[k] << '\n';
    return EXIT_SUCCESS;
}