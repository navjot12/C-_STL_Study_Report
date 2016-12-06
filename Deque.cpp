#include<iostream>
#include<deque>
#include<cstdlib>
using namespace std;
void display(deque<int> &d)
{
	deque<int> :: iterator p;
	for(p=d.begin();p!=d.end();p++)
		cout<<*p<<", ";
}
int main()
{
	deque <int> d;
	for(int i=0;i<3;i++)
		d.push_back(rand()/100);
	cout<<"Inserting Elements at the Back\nDeque: ";
	display(d);
	for(int i=0;i<3;i++)
		d.push_front(rand()/100);
	cout<<"\nInserting Elements at the Front\nDeque: ";
	display(d);
	deque<int> :: iterator p=d.end();
	d.insert(p,100);
	cout<<"\nInserting 100 at the End\nDeque: ";
	display(d);
	cout<<"\nDeque Size: "<<d.size();
	cout<<"\nAccessing position 3 of Deque randomly: "<<d[2];
	return 0;
}
