#include <iostream>

using namespace std;

int main() {
    char nombre[50];
    int edad;
	cout << "Hello World!" << endl;
    cout << "Cual es tu  nombre? ";
    fgets(nombre,sizeof(nombre),stdin);
    cout << "Asi que te llamas: "<<nombre<<endl;

	return 0;
}

