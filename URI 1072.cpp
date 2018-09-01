#include <bits/stdc++.h>
	using namespace std;
int main(){
	
	int i,n,a,in,out;
in=0;
out=0;	
	cin>>n;
	
	for (i=1; i<=n;i++) {
		cin>>a;
		if (a>=10&&a<=20){
		in=in+1;
		}else
		out=out+1;
}
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;

}	
