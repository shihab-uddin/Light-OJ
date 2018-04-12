#include<bits/stdc++.h>
#define pi 2*acos(0.0)

using namespace std;

int main(){
    int t;
    double r,edge, cir_area, squre_area, result=0;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>r;
        cir_area = pi*r*r;
        edge = 2*r;
        squre_area = edge*edge;
        result = squre_area-cir_area;
        cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<<result<<endl;
    }
    return 0;
}
