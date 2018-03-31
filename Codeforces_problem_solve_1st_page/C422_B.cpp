#include <bits/stdc++.h>
using namespace std ;
int main (){
    int n,m,i,j,pos=0,k=0,k_min=99999999;
    cin>>n>>m;
    char s[n+5],t[m+5];
    cin>>s;
    cin>>t;
    for(i=0;i<=(m-n);i++){
        for(j=0;j<n;j++){
            if(s[j]!=t[i+j])k++;
        }
        if(k<k_min){
            k_min=min(k_min,k);
            pos=i;
        }
        k=0;
    }
    cout<<k_min<<endl ;
    for (int c=0;c<n;c++){
        if(s[c]!=t[c+pos])cout<<(c+1)<<" ";
    }
    cout<<endl;
    return 0;
}
