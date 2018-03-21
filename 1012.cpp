#include <bits/stdc++.h>
	using namespace std;
	#define PI 3.14159
int main(){
	double a,b,c,triangulo,trapezio,retangulo,quadrado,circulo;
	cin>>a>>b>>c;
    triangulo= (a*c)/2;
	trapezio=(a+b)*c/2;	
	circulo= PI*(c*c);
	quadrado=(b*b);
	retangulo= a*b;
	printf ("TRIANGULO: %.3f\n", triangulo);
	printf ("CIRCULO: %.3f\n", circulo);
	printf ("TRAPEZIO: %.3f\n", trapezio);
	printf ("QUADRADO: %.3f\n", quadrado);
	printf ("RETANGULO: %.3f\n", retangulo);
}
