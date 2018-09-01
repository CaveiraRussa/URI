#include <bits/stdc++.h>
	using namespace std;
int main(){
	
	double salario,salaf,reajuste;
	
	cin>>salario;
	if (salario>=0&&salario<=400){
	
	reajuste=((salario*15)/100);
	salaf=salario+reajuste;
	printf("Novo salario: %.2f\n",salaf);
	printf("Reajuste ganho: %.2f\n",reajuste);
	printf("Em percentual: 15 %%\n");
	}
		if (salario>400&&salario<=800){
	
		reajuste=((salario*12)/100);
		salaf=salario+reajuste;
		printf("Novo salario: %.2f\n",salaf);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 12 %%\n");
		}
		if (salario>800&&salario<=1200){
	
		reajuste=((salario*10)/100);
		salaf=salario+reajuste;
		printf("Novo salario: %.2f\n",salaf);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 10 %%\n");
		}
		if (salario>1200&&salario<=2000){
	
		reajuste=((salario*7)/100);
		salaf=salario+reajuste;
		printf("Novo salario: %.2f\n",salaf);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 7 %%\n");
		}
	if (salario>2000){
	
	reajuste=((salario*4)/100);
	salaf=salario+reajuste;
	printf("Novo salario: %.2f\n",salaf);
	printf("Reajuste ganho: %.2f\n",reajuste);
	printf("Em percentual: 4 %%\n");
	}
}
