#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;
void display(list<int> &lst)
{
	list<int> :: iterator p;
	for(p=lst.begin();p!=lst.end();p++)
		cout<<*p<<", ";
}
int main()
{
	list<int> list1;		//Empty List
	list<int> list2(5);		//Empty list of size 5
	for(int i=0;i<3;i++)
		list1.push_back(rand()/100);
	list<int> :: iterator p;
	for(p=list2.begin();p!=list2.end();p++)
		*p=rand()/100;
	cout<<"List 1: ";
	display(list1);
	cout<<"\nList 2: ";
	display(list2);
	list1.push_back(200);	//Adding element at the end of the list1
	list1.push_front(100);	//Adding element at the beginning of the list1
	list2.pop_front();		//Removing element from front of list2
	cout<<"\nModified List 1: ";
	display(list1);
	cout<<"\nModified List 2: ";
	display(list2);
	list<int> listA, listB;
	listA=list1;
	listB=list2;
	list1.merge(list2);
	cout<<"\nMerged Unsorted List: ";
	display(list1);
	listA.sort();
	listB.sort();
	listA.merge(listB);
	cout<<"\nMerged Sorted List: ";
	display(listA);
	listA.reverse();		//Reversing a list
	cout<<"\nReversed Merged Sorted List: ";
	display(listA);
	return 0;
}
