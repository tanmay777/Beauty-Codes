#include<iostream>
using namespace std;

void fibo(int x,int y,int n);

int main(){
    int n;
    cout<<"Enter the numbers in fibonacci series: ";
    cin>>n;
	cout<<0<<" "<<1;
    fibo(0,1,n-2);
    return 0;
}

void fibo(int x,int y, int n){
    
    if(n!=0){
        cout<<" "<<x+y;
        n--;
        fibo(y,x+y,n);
    }
    else{
        
    }
   
}
    
