#include <bits/stdc++.h>
	using namespace std;
int main(){
	
	double salario,imposto,resto;
	
	cin>>salario;
	
	salario=salario-2000;
	if (salario<=0){
	
	cout<<"Isento"<<endl;
	}
		if (salario=1000){
	
		imposto=((salario*8)/100);
		}
		if (salario>2000&&salario<=3500){
	
		imposto=((salario*18)/100);
		}
		
	if (salario>3500){
	
	imposto=((salario*28)/100);
	}
	printf("R$ %.2f\n",imposto);
}
