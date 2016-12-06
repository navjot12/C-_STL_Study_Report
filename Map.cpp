#include<iostream>
#include<map>
#include<string>
#include<stdexcept>
using namespace std;
int main()
{
	string name;
	int number;
	map<string, int> phone;;
	cout<<"\nEnter three sets of Names & Phone Numbers:\n";
	for(int i=0; i<3; i++)
	{
		cin>>name;
		cin>>number;
		phone[name]=number;
	}
	cout<<"\nInserting Name: Aleyna & Number: 4949";
	phone["Aleyna"]=4949;								//Insert another element
	cout<<"\nInserting Name: Bose & Number: 5511";
	phone.insert(pair<string, int> ("Bose", 5511));		//Since each element of a map is a pair
	cout<<"\nSize of Map: "<<phone.size();
	cout<<"\n\nTherefore, Telephone Records are: ";
	map<string, int> ::iterator p;
	for(p=phone.begin();p!=phone.end();p++)
		cout<<"\n"<<(*p).first<<" : "<<(*p).second;
	cout<<"\n\nEnter Name whose Number is to be found: ";
	cin>>name;
	try
	{
		number=phone.at(name);
		cout<<"\nNumber: "<<number;
	}
	catch(std::out_of_range &e)
	{
		cout<<"\nRecord for this name does not exist in the phonebook. ";
	}
	return 0;
}
