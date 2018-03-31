#include <bits/stdc++.h>

using namespace std ;

int main (){
    int n,m,result=0 ;
    cin >> n >>m ;
    while ((n!=0&&m!=0)&&(n+m)>=3){
        if (n>m){
            n=n-2 ;
            m-- ;
            result++ ;
        }
        else{
            m=m-2 ;
            n-- ;
            result++ ;
        }
    }
    cout << result << endl ;
    return 0 ;
}
