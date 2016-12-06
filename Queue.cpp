#include<iostream>
#include<queue>
#include<cstdlib>
using namespace std;
int main ()
{
	queue <string> names;	//Declare a queue
	names.push("Gayle");	//Add some values to the queue
	names.push("Kohli");
	names.push("de Villiers");
	names.push("Watson");
	names.push("Sarfaraz");
	cout << "Welcome to Royal Challengers Bangalore!";
	cout << "\nOn the Batting Crease is "<< names.front ();
	names.pop ();
	cout << "\nThere are currently " << names.size () << " players in the dugout. ";
	cout << "\nThe next person in the queue is " << names.front ();
    cout << "\n" << names.back () << " is the last person in the queue."; 
	return 0;
}
