#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";				//Random Access to Elements
}
int main()
{
	vector<int> v;
	cout<<"\nInitial Size of Vector: "<<v.size();
	int i, x;
	cout<<"\nEnter five integer values: ";
	for(i=0; i<5; i++)
	{
		cin>>x;
		v.push_back(x);
	}
	cout<<"\nTherefore, the vector is: ";
	for(i=0;i<v.size();i++)
		cout<<v.at(i)<<" ";						//using 'at' function
	cout<<"\nSize of Vector: "<<v.size();
	v.push_back(5);								//pushing another element
	cout<<"\nVector after pushing \'5\': ";
	display(v);									//function display
	cout<<"\nSize of Vector: "<<v.size();
	vector<int> :: iterator itr = v.begin();	//iterator points to first element
	itr=itr+3;									//iterator points to 4th element
	v.insert(itr, 2, 90);						//insert function
	cout<<"\nVector after inserting 90 twice at 4th position: ";
	display(v);
	v.erase(v.begin()+3, v.begin()+5);			//for erase 4th & 5th element
	cout<<"\nVector after deletions: ";
	display(v);
	cout<<"\nSize of Vector: "<<v.size();
	cout<<"\nVector after popping an element: ";
	v.pop_back();
	display(v);
	cout<<"\nSize of Vector: "<<v.size();
	return 0;
}
