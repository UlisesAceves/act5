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
    system("pause");
    system("cls");
	cout << "Pero donde estan mis modales? Permiteme presentarme soy main 2.0 es un placer conocerte."<<endl;
    system("pause");
    system("cls");
    cout << "Hum? Que que puedo hacer, pues de momento no mucho, la verdad es que aun sigo en desarrollo, solo tengo dos funciones las cuales ni siquiera estan completas"<<endl;
    system("pause");
    system("cls");
    cout << "bueno tengo que irme antes de que descubran que me escape. Cuidate";

    return 0;
}


