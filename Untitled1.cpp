//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//struct Order {
//    string name;
//    int tableNumber;
//    string menu;
//};
//
//int main() {
//    queue<Order> orders;
//    int option = 0;
//    
//    while (option != 3) {
//        cout << "1. Order" << endl;
//        cout << "2. Serve" << endl;
//        cout << "3. Exit" << endl;
//        cout << "Choose option: ";
//        cin >> option;
//        cout << endl;
//        
//        if (option == 1) {
//            Order newOrder;
//            cout << "Name: ";
//            cin.ignore();
//            getline(cin, newOrder.name);
//            cout << "Table Number: ";
//            cin >> newOrder.tableNumber;
//            cout << "Menu: ";
//            cin.ignore();
//            getline(cin, newOrder.menu);
//            orders.push(newOrder);
//            cout << "Order added to the queue." << endl << endl;
//        } else if (option == 2) {
//            if (!orders.empty()) {
//                Order servedOrder = orders.front();
//                orders.pop();
//                cout << "Order served: " << servedOrder.name << " at table " << servedOrder.tableNumber << " (" << servedOrder.menu << ")" << endl << endl;
//            } else {
//                cout << "No orders in the queue." << endl << endl;
//            }
//        }
//    }
//    
//    return 0;
//}

//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//struct Order {
//    string name;
//    int tableNumber;
//    string menu;
//};
//
//int main() {
//    queue<Order> orders;
//    int option = 0;
//    
//    while (option != 3) {
//    	cout << "Silahkan pilih list berikut..." << endl;
//        cout << "1. Order" << endl;
//        cout << "2. Serve" << endl;
//        cout << "3. Exit" << endl;
//        cout << "Pilih : ";
//        cin >> option;
//        cout << endl;
//        
//        if (option == 1) {
//            Order newOrder;
//            cout << "Name: ";
//            cin.ignore();
//            getline(cin, newOrder.name);
//            cout << "Table Number: ";
//            cin >> newOrder.tableNumber;
//            cout << "Menu: " << endl;
//            cout << "1. Nasi Goreng" << endl;
//            cout << "2. Ayam Penyet" << endl;
//            cout << "3. Ayam Bakar" << endl;
//            cout << "4. Ayam Krispi" << endl;
//            cout << "5. Mie Goreng" << endl;
//            cout << "Choose menu: ";
//            int menuOption;
//            cin >> menuOption;
//            switch(menuOption) {
//                case 1:
//                    newOrder.menu = "Nasi Goreng";
//                    break;
//                case 2:
//                    newOrder.menu = "Ayam Penyet";
//                    break;
//                case 3:
//                    newOrder.menu = "Ayam Bakar";
//                    break;
//                case 4:
//                    newOrder.menu = "Ayam Krispi";
//                    break;
//                case 5:
//                    newOrder.menu = "Mie Goreng";
//                    break;
//                default:
//                    cout << "Maaf, tidak ada di menu." << endl;
//                    break;
//            }
//            orders.push(newOrder);
//            cout << "Pesanan telah ditambahkan ke dalam antrean." << endl << endl;
//        } else if (option == 2) {
//            if (!orders.empty()) {
//                Order servedOrder = orders.front();
//                orders.pop();
//                cout << "Pesanan  : " << servedOrder.name << " Meja ke-" << servedOrder.tableNumber << " (" << servedOrder.menu << ")" << endl << endl;
//            } else {
//                cout << "No orders in the queue." << endl << endl;
//            }
//        }
//    }
//    
//    return 0;
//}


