#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string>q;

    q.push("Mr.");
    q.push("Subhadip");
    q.push("Kundu");

    cout<<"First element : "<<q.front();
    cout<<"First element : "<<q.back();

    q.pop(); //Removes first element.

    cout<<"Size of the queue : "<< q.size();
    return 0;
}