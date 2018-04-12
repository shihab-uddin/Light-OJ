#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,d,s,x,h,tri_Ar,result=0;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>a>>b>>c>>d;
        x = fabs(a-c);
        s = (b+d+x)*0.5;
        tri_Ar = sqrt(s*(s-x)*(s-b)*(s-d));
        h = (2*tri_Ar)/x;
        result = .5*(a+c)*h;
        cout<<"Case "<<i<<": "<<setprecision(10)<<fixed<<result<<endl;
    }
    return 0;
}
