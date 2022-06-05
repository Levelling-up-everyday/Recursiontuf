//Arrays are passsed using refrence automatiacally
#include<bits/stdc++.h>
using namespace std;
void f(int arr[],int i,int n)
{
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    f(arr,i+1,n);
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];
    f(arr,0,size);
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}
//Palindrome same logic as that of reverse
#include<bits/stdc++.h>
using namespace std;
bool f(string &s,int i)
{
    if(i>=s.length()/2)
    return true;
    if(s[i]!=s[s.length()-i-1])
    return false;
    return f(s,i+1);
}
int main()
{
    string s;
    cin>>s;
    cout<<f(s,0);
}
