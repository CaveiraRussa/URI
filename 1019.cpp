#include <bits/stdc++.h>
	using namespace std;

int main()
{
    int n, hr, min, sec;
cin >>n;
    hr = n/ 3600;
    n = n % 3600;

    min = n / 60;
    n = n % 60;

    sec = n;

cout<<hr<<":"<<min<<":"<<sec<<endl;

}
