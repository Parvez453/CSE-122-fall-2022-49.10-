/**CODE NAME : Boy or Girl
CODE NO : 236A
**/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    set<char>b;
    for(int i=0;i<a.size();i++){
        b.insert(a[i]);
    }
    if(a.size()%2==0) cout<<"chat with her!";
    else cout<<"Ignore him!";
    return 0;
}
