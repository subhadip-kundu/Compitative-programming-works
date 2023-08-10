#include <iostream>
#include <set>
using namespace std;

int main()
{
    /*
    1.A standard container made up of unique keys, which can be retrieved in logarithmic time.
    2.It return value in sorted order.

    */
    set<int> s;

    s.insert(9);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(1);

    for (int i : s)
    {
        cout << i << endl;
    }

    s.erase(s.begin()); // It will remove the first element

    for (int i : s)
    {
        cout << i << endl;
    }

    cout << "5 is present or not : " << s.count(2) << endl; // present or not

    set<int>::iterator itr = s.find(4);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    
    return 0;
}