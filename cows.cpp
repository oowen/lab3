#include<vector>
#include<algorithm>
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(){
	const int size = 8;
	int weight,num;
	vector<int>v(size);

	ifstream in("file.in",ios::in);
	if(!in)
	{
		cerr<<"file not exist"<<endl;
		exit(1);
	}
	in>>num;
	for(int i=0;i<num;i++)
	{
		in>>weight;
		v[i]=weight;
	}
	sort(v.begin(),v.end());
	cout<<v[3]+v[4]+v[5]+v[6]+v[7]<<endl;
	return 0;
}



