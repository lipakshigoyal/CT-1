//name:lipakshi  roll no:2010990423    set no-04 question:01
#include<iostream>
#include <unordered_set>
using namespace std;


int Minimum1(int array1[], int n)
{
    int minimum = n;
    unordered_set<int> set;
    for (int i = n - 1; i >= 0; i--)
    {
        if (set.find(array1[i]) != set.end()) {
            minimum = i;
        }
        else {
            set.insert(array1[i]);
        }
    }
    if (minimum == n) {
        return -1;
    }
    return minimum;
}

int main()
{
    int array1[] = {5,6,3,4,3,6,4};
    int a = sizeof(array1) / sizeof(array1[0]);
    int minimum= Minimum1(array1, a);
    if (minimum != a) {
        cout << "The minimum index of the repeating element is " << minimum;
    }
    else {
        cout << "Invalid Input";
    }
    return 0;
}
