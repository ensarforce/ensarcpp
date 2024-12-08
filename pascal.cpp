#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, p1, p2;
	vector<int> v1 = {1};
	vector<int> v2;
	cout<<"Unesite broj redova: ";
	cin>>n;
	for(auto i=0;i<n;i++)
	{	
		for(auto j=0;j<n-i;j++)
		{
			cout<<" ";
		}
		for(auto i:v1) #need an alignment fix for multi-digit numbers
		{
			cout<<i<<" ";
		}
		p1=1;p2=0;
		
		v1.swap(v2);
		v2.push_back(0);
		v2.insert(v2.begin(), 0);
		v1.resize(0);
		for(auto j=0;j<v2.size()-1;j++)
		{
			v1.push_back(v2[p1]+v2[p2]);
			p1++;
			p2++;
		}
		cout<<endl;
	}
}
