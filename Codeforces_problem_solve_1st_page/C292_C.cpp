#include <bits/stdc++.h>

using namespace std ;

vector <int> v ;
int main (){
    int n ;
    char c ;
    cin >> n ;
    for (int i=1;i<=n;++i){
        cin >> c ;
        int a=c-'0' ;
        if (a==2){
            v.push_back(2) ;
        }
        else if (a==3){
            v.push_back(3) ;
        }
        else if (a==4){
            v.push_back(2) ;
            v.push_back(2) ;
            v.push_back(3) ;
        }
        else if (a==5){
            v.push_back(5) ;
        }
        else if (a==6){
            v.push_back(5) ;
            v.push_back(3) ;
        }
        else if (a==7){
            v.push_back(7) ;
        }
        else if (a==8){
            v.push_back(2) ;
            v.push_back(2) ;
            v.push_back(2) ;
            v.push_back(7) ;
        }
        else if (a==9){
            v.push_back(7) ;
            v.push_back(3) ;
            v.push_back(3) ;
            v.push_back(2) ;
        }
    }
    sort(v.rbegin(),v.rend()) ;
    int s =v.size(),j=0 ;
    while (s>=1){
        cout<<v[j++] ;
        s-- ;
    }
    return 0 ;
}
