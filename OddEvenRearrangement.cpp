#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rearrangement(int a[0],int n){
    sort(a,a+n);
    int temp[n];
    int OddPosition = (n+1)/2;
    int EvenPosition =OddPosition;
    for (int i = 0; i < (n+1)/2; i++)
    {
        temp[2*i] = a[--OddPosition];  
    }
    for (int i = 0; i < (n+1)/2; i++)
    {
        temp[2*i+1] =a[EvenPosition++];
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=temp[i];
    }
    

    
}
int main(){
    int a[]={1, 2, 1, 4, 5, 6, 8, 8} ;
    int n=sizeof(a)/sizeof(a[0]);
    rearrangement(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}