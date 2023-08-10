#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(9);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);

    cout<<"Is 3 present : "<< binary_search(v.begin(),v.end(),3)<<endl; //Inbuild 

    cout<<"Upper bound : "<< upper_bound(v.begin(),v.end(),3)-v.begin()<<endl; //Finds the last position in which __val could be inserted without changing the ordering.
    cout<<"Lower bound : "<< lower_bound(v.begin(),v.end(),3)-v.begin()<<endl; //Finds the last position in which __val could be inserted without changing the ordering.

    string name="Subhadip";
    reverse(name.begin(),name.end());
    cout<<name<<endl; //Reverse a sequence.

    //Before Rotate
    for(int i : v){
        cout<<i;
    }cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    
    //After Rotate
    for(int i : v){
        cout<<i;
    }cout<<endl;
    return 0;
}