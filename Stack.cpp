#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;

    // push() method push at top of the stack
    s.push("Mr.");
    s.push("Subhadip");
    s.push("Kundu");

    cout<<"Top element : "<<s.top()<<endl; // Return the top element

    s.pop(); //remove the topmost element
    cout<<"Top element : "<<s.top()<<endl; // Return the top element

    cout<<"Size of stack : "<< s.size()<<endl;

    cout<<"Empty or not : "<<s.empty()<<endl;
    return 0;
}