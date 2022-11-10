#include "Interface.h"
#include <iostream>
using namespace std;

void racional(Cproceso numer, Cproceso deno){
	int a, b, c, d;
	a = numer.getNum();
	b = numer.getDen();
	c = deno.getNum();
	d = deno.getDen();
	numer.setNum((a * d) + (b * c));
	deno.setDen(b * d);
	cout << numer.getNum() << "/" << deno.getDen() << endl;
}
void imprimirObjeto(Cproceso objeto){
	cout << objeto.getNum() << "/" << objeto.getDen() << endl;
}
