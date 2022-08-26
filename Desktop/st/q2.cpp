//name:Lipakshi roll no:2010990423 set no:04 question:02

#include <bits/stdc++.h>
using namespace std;
bool cons(int array1[], int n)
{
    sort(array1,array1+n);
    for(int i=1;i<n;i++)
    {
        if(array1[i]!=array1[i-1]+1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[]= {5, 4, 2, 3, 1, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(cons(arr, n) == true)
        cout<<" The Array contains elements integers from ";
    else
        cout<<" The Array does not contains consecutive elements integers as element is repeated";
    return 0;
}
