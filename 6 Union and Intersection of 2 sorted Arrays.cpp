#include <iostream>

using namespace std;

int main()
{
    int A1[] = {1, 2, 3, 4, 6};
    int A2[] = {3, 4, 5, 6, 7, 8};

    int n, m, p;
    n = sizeof(A1)/sizeof(A1[0]);
    m = sizeof(A2)/sizeof(A2[0]);
    //n = 5;
    //m = 4;

    cout<<"Elements of Array 1 are: ";
    for(p=0; p<n; p++)
    {
        cout<<A1[p]<<" ";
    }
    cout<<"\nElements of Array 2 are: ";
    for(p=0; p<m; p++)
    {
        cout<<A2[p]<<" ";
    }

    int i=0, j=0;
    cout<<"\nUnion of Array 1 and Array 2 are: ";
    
    while(i<n && j<m)
    {
        if(A1[i] < A2[j])
        {
            cout<<A1[i]<<" ";
            i++;
        }
        else if(A1[i] > A2[j])
        {
            cout<<A2[j]<<" ";
            j++;
        }
        else if(A1[i] == A2[j])
        {
            cout<<A1[i]<<" ";
            i++; j++;
        }
    }
    while(i<n)
    {
        cout<<A1[i]<<" ";
        i++;
    }
    
    while(j<m)
    {
        cout<<A2[j]<<" ";
        j++;
    }
    cout<<"\nIntersection of Array 1 and Array 2 are: ";
    i = 0;
    j = 0;
    while(i < n && j < m)
    {
        if(A1[i] < A2[j])
        {
            i++;
        }
        else if(A1[i] > A2[j])
        {
            j++;
        }
        else if(A1[i] == A2[j])
        {
            cout<<A1[i]<<" ";
            i++; j++;
        } 
    }

    return 0;
}