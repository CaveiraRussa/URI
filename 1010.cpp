#include <bits/stdc++.h>
	using namespace std;

int main(){
	int np1,np2,quant1,quant2;
	double preco1,preco2,total;

	cin>>np1>>quant1>>preco1;
	cin>>np2>>quant2>>preco2;
	
	total=(quant1*preco1)+(quant2*preco2);
	
	printf ("VALOR A PAGAR: R$ %.2f\n", total);
}
