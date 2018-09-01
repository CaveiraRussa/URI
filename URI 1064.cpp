#include <bits/stdc++.h>
	using namespace std;
int main(){
	
	int i,positivo;
	float a, media;	
	positivo=0;
	for (i=1; i<=6;i++) {
		cin>>a;
		if (a>0){
		positivo=positivo+1;
		media=media+a;
		}
	}
	cout<<positivo<<" valores positivos"<<endl;
	printf("%.1f\n",media/positivo);
}
