#include <iostream>
#include <queue>
#include <map>
#include <cstdlib>

using namespace std;

struct Order {
    string name;
    int tableNumber;
    string menu;
};

int main() {
    queue<Order> orders;
    map<int, bool> tableNumbers; 
    int option = 0;
    system("cls");
    while (option != 3) {
    	cout << "Silahkan pilih list berikut..." << endl;
        cout << "1. Order" << endl;
        cout << "2. Tampilkan Pesanan" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih : ";
        cin >> option;
        cout << endl;
        
        if (option == 1) {
            Order newOrder;
            cout << "Name: ";
            cin.ignore();
            getline(cin, newOrder.name);
            cout << "Nomer Meja: ";
            cin >> newOrder.tableNumber; 
            if (tableNumbers.count(newOrder.tableNumber) && tableNumbers[newOrder.tableNumber] == true) { 
                system("cls");
				cout << "Nomor meja sudah dipesan sebelumnya." << endl;
                continue;
            }
            cout << "Menu makanan yang tersedia. " << endl;
            cout << "1. Nasi Goreng" << endl;
            cout << "2. Ayam Penyet" << endl;
            cout << "3. Ayam Bakar" << endl;
            cout << "4. Ayam Krispi" << endl;
            cout << "5. Mie Goreng" << endl;
            cout << "Pilih menu: ";
            int menuOption;
            cin >> menuOption;
            switch(menuOption) {
                case 1: system("cls");
                    newOrder.menu = "Nasi Goreng";
                    break;
                case 2: system("cls");
                    newOrder.menu = "Ayam Penyet";
                    break;
                case 3: system("cls");
                    newOrder.menu = "Ayam Bakar";
                    break;
                case 4: system("cls");
                    newOrder.menu = "Ayam Krispi";
                    break;
                case 5: system("cls");
                    newOrder.menu = "Mie Goreng";
                    break;
                default:
                    cout << "Maaf, pilihan tidak tersedia pada menu." << endl;
                    break;
            }
            orders.push(newOrder);
            tableNumbers[newOrder.tableNumber] = true; 
            cout << "Pesanan telah ditambahkan ke dalam antrean." << endl << endl;
        } else if (option == 2) {
            if (!orders.empty()) {
            	system("cls");
                Order servedOrder = orders.front();
                orders.pop();
                tableNumbers[servedOrder.tableNumber] = false; 
                cout << "Pesanan  : " << servedOrder.name << " Meja ke-" << servedOrder.tableNumber << " (" << servedOrder.menu << ")" << endl << endl;
            } else {
            	system("cls");
                cout << "Tidak ada pesanan." << endl << endl;
            }
        }
    }  
    
    return 0;
}
