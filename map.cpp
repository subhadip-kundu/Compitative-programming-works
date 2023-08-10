#include <iostream>
#include <map>
using namespace std;

int main()
{
    /* --   Most of the operation in map use logn complexcity  --  */
    map<int, string> m;

    m[1] = "Mr.";
    m[13] = "Subhadip";
    m[2] = "Kundu";

    m.insert({5, "Bheem"}); // Attempts to insert a std::pair into the map.

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13 : " << m.count(13) << endl;

    m.erase(13); // Erases elements according to the provided key.
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5); // The function returns an iterator or a constant iterator which refers to the position where the key is present in the map. If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end().
    for (auto it = m.find(3); it != m.end(); it++)
    {

        cout << it->first << '\t' << it->second << endl;
    }
    return 0;
}