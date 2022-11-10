#include <iostream>
#include "Cproceso.cpp"
#include "Interface.cpp"

using namespace std;

int main() {
    Cproceso* obj1 = new Cproceso(5, 7);
	Cproceso* obj2 = new Cproceso(5, 11);
	Cproceso* obj3 = new Cproceso(0, 0);
	imprimirObjeto(*obj1);
	imprimirObjeto(*obj2);
	racional(*obj1, *obj2);
	
    return 0;

}
