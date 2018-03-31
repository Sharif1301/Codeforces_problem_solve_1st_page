#include <bits/stdc++.h>

using namespace std ;

int main(){
    int s,v1,v2,t1,t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int result1=(s*v1)+(t1*2);
    int result2=(s*v2)+(t2*2);
    if (result1==result2)cout<<"Friendship"<<endl;
    else if (result1<result2)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    return 0;
}
