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
    int n;
    cin>>n;
    vector<bool>tab;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        tab.push_back(a);
    }
    vector<bool>::iterator pom = tab.begin();
    cout<<*pom;
    return 0;
}