#include <iostream>

int greatest(int,int,int,int);

using namespace std;

int main() {
    
    int a, b, c, d,ans;
    cin>>a>>b>>c>>d;
    ans=greatest(a,b,c,d);
    cout<<ans;
    return 0;
}

int greatest(int a,int b,int c,int d){
    if(a>b && a>c && a>d){
        return (a);
    }else if(b>c && b>d){
        return (b);
    }else if(c>d){
        return (c);
    }else{
        return (d);
    }
    return 0;
}
