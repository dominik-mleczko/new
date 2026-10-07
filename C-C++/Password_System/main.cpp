
#include <iostream>
using namespace std;

int main () {
    int password;
    cout << "Type the Password:" << endl;
    cin >> password;

    if (password == 123) {
        cout << "Welcome" << endl;
    }
    else {
        cout << "Wrong Password" << endl;
    }

}
