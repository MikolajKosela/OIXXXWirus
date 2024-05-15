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
    //wczytanie długości wirusa i ilości mutacji
    int n,m;
    cin>>n>>m;
    //wczytanie wirusa i zapisanie go w wektorze
    vector<bool>tab(n);
    string a; cin>>a;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]=='1') tab[i]=1; 
        else tab[i]=0; 
    }
    //utworzenie iteratora pomocniczego, który wskazuje na początek wektora 
    vector<bool>::iterator pom=tab.begin();
    //mutacja
    for(int i=0; i<m; i++)
    {
       tab.push_back(XOR(*pom,*(pom+1)));
        tab.erase(pom);

    }
    //wypisywanie wektora
    for(int i=0; i<n; i++)
    {
        std::cout<<*pom;
        pom++;
    }
    return 0;
}