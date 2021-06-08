#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
   map<int,int> a;
    a.insert(pair<int,int> (12,10));
    a.insert(pair<int,int> (2,1));
    //auto *itr;
    for(auto itr=a.begin();itr!=a.end();itr++)
    {
        cout<<itr->first<<endl;
    }

}
