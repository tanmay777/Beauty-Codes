#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3};
    int arr1[]={4,5,6};
    int arr2[]={7,8,9};
    int *ptr[3]={arr,arr1,arr2};
    
    for(int i=0;i<3;i++){
        cout<<*(*(ptr+i)+1)<<" ";
    }

    cout<<"\nAddress of ptr is"<<ptr;

}

