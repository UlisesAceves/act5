#include <iostream>

using namespace std;

int main() {
    char nombre[50];
    int edad;
	cout << "Hello World!" << endl;
    cout << "Cual es tu  nombre? "<<endl;
    fgets(nombre,sizeof(nombre),stdin);
    cout << "Asi que te llamas: "<<nombre<<endl;
    cout << "Y dime que edad tienes? "<<endl;
    cin>>edad;
    cout << "Asi que en 5 años tendras: "<<edad+5<<" Interesante"<<endl;
	return 0;
}


