#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "- Eres elhectorius?\n+ ";
    getline(cin, name);

    if ("elhectorius" == name) {
        cout << "- Tremendo comedor de tula" << endl;
        return 0;
    }
    cout << "- Adelante don admin" << endl;

    return 0;
}