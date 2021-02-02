#include <iostream>
using namespace std;

string respuesta(string n) {
    if (n == "elhectorius" || n == "si" || n == "Si" || n == "SI" || n == "sí" || n == "Sí" || n == "SÍ")
        return "- Tremendo comedor de tula";
    return "- Adelante Sr. Administrador";
}

int main() {
    string name;

    cout << "- Eres elhectorius?\n+ ";
    getline(cin, name);
    cout << respuesta(name) << endl;

    return 0;
}