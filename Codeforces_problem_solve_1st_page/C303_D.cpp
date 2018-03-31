#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n,a,sum=0,counter=0 ;
    cin >> n ;
    vector <int> v ;
    for (int i = 0 ;i < n ; ++i){
        cin >> a ;
        v.push_back(a) ;
    }
    sort(v.begin(),v.end()) ;
    for (int i = 0 ; i < n ; ++i){
        if (sum<=v[i]){
            counter++ ;
            sum=sum+v[i] ;
        }
    }
    cout << counter <<endl ;
    return 0 ;
}
