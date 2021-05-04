#include <iostream>

#define ll  long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll bound=3,t;
    cin>>t;
    while(bound<t)
    {
        t-=bound;
        bound*=2;
    }
    cout<<(bound-t+1);
}