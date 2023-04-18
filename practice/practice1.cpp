#include <iostream>
using namespace std;

int main() {
    
    
    int l,n,x,y;
    
    cin>> l;
    while(l--)
    {
        cin>> n>> x >>y;
        for ( int i=2; i<n; i++ ){
            if( i%x == 0  && i%y !=0){
                cout<< i<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}