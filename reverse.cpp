#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int x,n;
    cout<<"Enter Size of Array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(int x:v)
        cout<<x<<" ";
        reverse(v.begin(),v.end()-2);
    cout<<endl;
        for(int x:v)
        cout<<x<<" ";
    return 0;
}
