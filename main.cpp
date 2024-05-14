#include<iostream>
#include<vector>  
using namespace std;

bool XOR (bool a, bool b)
{
    if(a==b) return 0;
    else return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<bool>tab;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        tab.push_back(a);
    }
    vector<bool>::iterator pom;
    for(int i=0; i<m; i++)
    {
       pom=tab.begin();
       tab.push_back(XOR(*pom,*(pom+1)));
        tab.erase(tab.begin());

    }
    pom=tab.begin();
    for(int i=0; i<n; i++)
    {
        cout<<*pom;
        pom++;
    }
    return 0;
}