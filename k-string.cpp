#include<iostream>

using namespace std;

char A[20];

void k_string(int n,int k){
    if(n<1)
        cout<<A<<endl;
    else{
        for(char i='a';i<'a'+k;i++){
            A[n-1]=i;
            k_string(n-1,k);
        }
    }
}

          
int main(){
    int n,k;
    cout<<"Enter the number of characters in the string: "<<endl;
    cin>>n;
    cout<<"Enter the number of characters for the permutation: "<<endl;
    cin>>k;
    k_string(n,k);
    return 0;
}
