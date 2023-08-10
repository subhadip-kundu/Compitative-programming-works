#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l; // List work like a double linked list
    list<int>ll(5,100); // Work

    // Method support
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    l.pop_back();
    l.pop_front();

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin()); //Erase one element fron begin

    cout<<"Size of the list is : "<<l.size();

    return 0;
}