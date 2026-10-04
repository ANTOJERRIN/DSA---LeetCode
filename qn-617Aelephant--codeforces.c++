#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<=5)
    {
        cout<<1;
    }
    if(x>5)
    {
        int steps=x/5;
        if(x%5!=0)
        {
            steps++;

        }
    }
    cout<<steps;
    return 0;
}