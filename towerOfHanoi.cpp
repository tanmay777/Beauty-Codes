#include<iostream>
using namespace std;

void towerOfHanoi(int,char, char, char);

int main(){
    int n;
    cout<<"Enter the number of disks: ";
    cin>>n;
    towerOfHanoi(n,'A','C','B');
}

void towerOfHanoi(int n, char A,char C,char B){
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;
        return;
    }
    towerOfHanoi(n-1,A,B,C);
    cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;
    towerOfHanoi(n-1,B,C,A);
}
