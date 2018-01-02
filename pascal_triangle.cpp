#include<iostream>

using namespace std;

void pascal_develop(int n,int arr[][10]){
    arr[0][0]=1;
    arr[1][0]=1;
    arr[1][1]=1;
    for(int i=2;i<n;i++)
    {
        arr[i][0]=1;
        arr[i][i]=1;
        for(int j=1;j<i;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
    }
}

int main(){
    int n;
    cout<<"Enter the size of pascal's triangle"<<endl;
    cin>>n;
    int arr[10][10]={0};
    pascal_develop(n,arr);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
