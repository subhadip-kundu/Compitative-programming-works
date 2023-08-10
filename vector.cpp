#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    // Capacity define that memory alocation for number of element
    vector<int>v;
    cout<<"Capacity : "<< v.capacity()<<endl; //Capacity : 0
    
    v.push_back(1);
    cout<<"Capacity : "<< v.capacity()<<endl; //Capacity : 1

    v.push_back(2);
    cout<<"Capacity : "<< v.capacity()<<endl; //Capacity : 2

    v.push_back(3);
    cout<<"Capacity : "<< v.capacity()<<endl; //Capacity : 4

    // Size define number of element in this vector
    cout<<"Size : "<<v.size()<<endl; //Size : 3

    cout<<"Elements at 2nd index : "<<v.at(2)<<endl; //Elements at 2nd index : 3

    cout<<"Front : "<< v.front()<<endl; // Element at the first index
    cout<<"back : "<< v.back()<<endl; // Element  at the last index

    // Copy the whole vector into a new vector
    vector<int>new_copy(v); //new_copy vector will contain all the element of vector v;

    // Itreate a vector
    for(int i:new_copy){
        cout<<i<<" ";
    }

    v.pop_back(); // pop the last element 

    v.clear(); // It will clear all the elements but not decrease the capacity of the vector

    return 0;
}