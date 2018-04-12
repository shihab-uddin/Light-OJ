#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,a,n;
    cin>>T;
    for(int i=1; i<=T; i++){
        cin>>n;
        if(n<10){
            a = 0;
            cout<<a<<" "<<n<<endl;
        }else{
            n = n-10;
            a = 10;
            cout<<a<<" "<<n<<endl;
        }

    }
    return 0;
}
