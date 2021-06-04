  
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string l;string d;
	ofstream fout;
	fout.open("data");
	cin>>l;
	fout<<l<<endl;
	fout.close();
	ifstream fin;
	fin.open("data");
	fin>>d;
	cout<<d;
}
