#include <bits/stdc++.h>
	using namespace std;

int main(){
	char nome[30];
	double salfx,vendas,salf;

	cin>>nome>>salfx>>vendas;
	
	salf=salfx+(vendas*15/100);
	
	printf ("TOTAL = R$ %.2f\n", salf);
}
