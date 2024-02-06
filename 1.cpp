#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int i = 1;
    
    while (i <= 10) {
        // Menghapus output sebelumnya dengan mengirim karakter backspace
        for (int j = 0; j < 10; j++) {
            cout << "\b";
        }
        
        // Menampilkan output baru
        cout << "i = " << i << endl;
        
        i++;
        
        // Menunggu input dari pengguna sebelum melanjutkan loop
        getch();
    }
    
    return 0;
}

