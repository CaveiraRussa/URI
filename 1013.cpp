#include <bits/stdc++.h>
	using namespace std;

int main(){
	int a,b,c,maior,maiorab;

	cin>>a>>b>>c;
	maiorab= (a+b+abs(a-b))/2;
	maior= (maiorab+c+abs(maiorab-c))/2;
	
	
	cout<<maior<<" eh o maior"<<endl;
}
