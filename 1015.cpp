#include <bits/stdc++.h>
	using namespace std;
int main(){
 double x1,y1,x2,y2,raiz,distancia;
	cin>>x1>>y1;
	cin>>x2>>y2;
   raiz=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
   distancia=sqrt(raiz);

	printf("%.4f\n",distancia);
}
