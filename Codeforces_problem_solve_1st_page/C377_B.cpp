#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n, k, sum=0 ;
    cin >>n  >>k ;
    int arr[n+5] ;
    for (int i=0 ;i<n ;++i ){
        cin >>arr[i] ;
    }
    for (int i=1 ;i<n ;++i){
        int a=arr[i] ;
        arr[i]+= max(0,(k-arr[i]-arr[i-1])) ;
        //int a = max(0,(k-arr[i]-arr[i-1])) ;
        //sum+= max(0,(k-arr[i]-arr[i-1])) ;
        sum+=(arr[i]-a) ;
        //cout <<sum <<" " ;
        //sum+=arr[i]-a ;
        //cout <<"Sum=" <<sum <<" ";
    }
    cout <<sum <<endl ;
    for (int i=0 ;i<n ;++i){
        cout <<arr[i] <<" " ;
    }
    cout <<endl ;
    return 0 ;
}

