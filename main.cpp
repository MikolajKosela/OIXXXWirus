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
    string a; cin>>a;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]=='1') tab.push_back(1);
        else tab.push_back(0);
    }
    vector<bool>::iterator pom;
    pom=tab.begin();
    for(int i=0; i<n; i++)
    {
        cout<<*pom;
        pom++;
    }
    cout<<endl<<endl;
//kon
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