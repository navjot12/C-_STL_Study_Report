#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;			//Default Constructor
	string s2("New");	//Using String literal
	string s3(s2);		//Using preexisting string
	cout<<"Enter a string: ";
	cin>>s1;
	cout<<"\nString s1= "<<s1<<"\ts2= "<<s2<<"\ts3= "<<s3;
	cout<<"\n\nConcatenating string s1 & s2: ";
	s3=s1+s2;
	cout<<"\nTherefore, the concatenated string is: "<<s3<<"\thaving length: "<<s3.length();
	cout<<"\n\nEnter another string: ";
	string s4;
	cin>>s4;
	cout<<"\nInserting this string into the concatenated string: ";
	s3.insert(s1.length(),s4);
	cout<<"\nTherefore, modified concatenated string is: "<<s3<<"\thaving length: "<<s3.length();
	cout<<"\n\nRemoving 3 characters from concatenated string: ";
	s3.erase(2,3);
	cout<<"\nNow concatenated string is: "<<s3<<"\thaving length: "<<s3.length();
	cout<<"\n\nEnter another string: ";
	cin>>s4;
	cout<<"\nReplacing middle 3 characters of concatenated string with this string";
	s3.replace(1,3,s4);
	cout<<"\nNow, the concatenated string is: "<<s3<<"\thaving length: "<<s3.length();
	s4="ONE TWO THREE FOUR";
	cout<<"\n\nConsidering new string: ";
	for(int i=0; i<s4.length(); i++)
		cout<<s4.at(i);
	cout<<"\n\nTWO is found at: "<<s4.find("TWO");
	cout<<"\nE is found first at: "<<s4.find_first_of('E');
	cout<<"\nR is found last at: "<<s4.find_last_of('R');
	cout<<"\nSubstring between indices 2 and 10 is: "<<s4.substr(2,8);
	return 0;
}
