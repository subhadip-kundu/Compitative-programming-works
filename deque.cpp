#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(1); // Add element at the end
    d.push_back(2); // Add element at the end
    d.push_front(3); // Add element at the front
    d.push_front(4); // Add element at the front

    for(int i:d){
        cout<<i<<" ";
    }

    d.pop_back(); // Remove element at the end
    d.pop_front(); // Remove element at the front

    for(int i:d){
        cout<<i<<" ";
    }

    // Below methods work as like in vector
    cout<<"Print first element : " << d.at(1)<<endl;

    cout<<"Front most element : " << d.front()<<endl;
    cout<<"Back most element : " << d.back()<<endl;

    cout<<"Empty or not : "<< d.empty();

    // Erase method
    d.erase(d.begin(),d.begin()+1);// Will erase element in the range


    return 0;
}