#include<iostream>
#include<bitset>
#include<string>
using namespace std;
int main()
{
	bitset<15> b;
	bitset<15> c;
	b[0]=1;
	b.set(4);
	b.set(9);
	b[11]=1;
	b.set(13);
	c=b;
	string mystring = b.to_string<char, string::traits_type, string::allocator_type>();
	cout<<"Therefore, the bitset is: "<<mystring;
	cout<<"\nAll: "<<b.all();
	cout<<"\nAny: "<<b.any();
	cout<<"\nNone: "<<b.none();
	cout<<"\nCount: "<<b.count();
  	cout<<"\n\nSetting bitset. ";
  	b.set();
  	mystring = b.to_string<char, string::traits_type, string::allocator_type>();
  	cout<<"Therefore, the bitset is: "<<mystring;
  	cout<<"\nAll: "<<b.all();
	cout<<"\nAny: "<<b.any();
	cout<<"\nNone: "<<b.none();
	cout<<"\nCount: "<<b.count();
  	cout<<"\n\nResetting bitset. ";
  	b.reset();
  	mystring = b.to_string<char, string::traits_type, string::allocator_type>();
  	cout<<"Therefore, the bitset is: "<<mystring;
	cout<<"\nAll: "<<b.all();
	cout<<"\nAny: "<<b.any();
	cout<<"\nNone: "<<b.none();
	cout<<"\nCount: "<<b.count();
	return 0;
}
