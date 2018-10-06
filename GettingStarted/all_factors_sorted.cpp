#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	cout<<sqrt(n)<<endl;
	vector<int> factors;
	//vector<int>::iterator it=factors.begin();
	//factors.push_back(1);
	//factors.push_back(n);
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			cout<<i<<" ";
			if(i!=sqrt(n)) factors.push_back(n/i);
		}
		
		//cout<<"i = "<<i<<" n/i = "<<n/i<<endl;
	}
	for(int i=factors.size()-1;i>=0;i--) cout<<factors[i]<<" ";
	cout<<endl;
	return 0;
}