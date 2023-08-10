#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max-heap
    priority_queue<int> maxi;

    maxi.push(9);
    maxi.push(1);
    maxi.push(3);
    maxi.push(0);

    int size = maxi.size();
    for (int i = 0; i < size; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    /* -------------------------------------------------------------- */

    // Mean-heap
    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(9);
    mini.push(1);
    mini.push(3);
    mini.push(0);

    int n = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Is it empty : "<<mini.empty();
    
    return 0;
}