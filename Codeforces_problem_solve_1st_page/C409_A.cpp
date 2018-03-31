#include <bits/stdc++.h>

using namespace std ;

int main(){
    //freopen("in.txt","r",stdin);
    char s[105] ;
    int i,j=0,counter=0;
    cin>>s;
    int l=strlen(s);
    for (i=0;i<l;i++){
        if (s[i]=='V'&&s[i+1]=='K'){
            counter++;
            s[i]=s[i+1]='#' ;
            i+=1 ;

        }
    }
    for (i=0;i<l;i++){
        if (s[i]=='V'&&s[i+1]=='V'){
            i+=1 ;
            j=1 ;
        }
        else if (s[i]=='K'&&s[i+1]=='K'){
            i+=1 ;
            j=1 ;
        }
    }
    cout<<(counter+j)<<endl ;
    return 0;
}
