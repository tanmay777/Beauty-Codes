#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int xor_result(int,int);

int main() {
    int x,y;
    cout<<"Enter the number to find the XOR \n";
    cin>>x>>y;
    int result=xor_result(x,y);
    cout<<"XOR is "<<result;
    cout<<endl;
    return 0;
}

int xor_result(int x,int y){
    vector <int> x1,y1,result;
    int temp=x;
    int final_result=0;
    while(temp!=0)
    {
        x1.push_back(temp%2);
        temp=temp/2;
    }
    reverse(x1.begin(),x1.end());
    temp=y;
    
    while(temp!=0)
    {
        y1.push_back(temp%2);
        temp=temp/2;
    }
    reverse(y1.begin(),y1.end());
    
 /*   for(vector<int>::iterator i=x1.begin();i!=x1.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    for(vector<int>::iterator i=y1.begin();i!=y1.end();i++)
        cout<<*i<<" ";
    cout<<endl;
   */ 
    if(x1.size()>y1.size())
    {
        reverse(y1.begin(),y1.end());
        y1.resize(x1.size());
        reverse(y1.begin(),y1.end());
    }
    else{
        reverse(x1.begin(),x1.end());
        x1.resize(y1.size());
        reverse(x1.begin(),x1.end());
    }
    cout<<"Binary representation of x is ";
    for(vector<int>::iterator i=x1.begin();i!=x1.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    cout<<"Binary representation of y is ";
    for(vector<int>::iterator i=y1.begin();i!=y1.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    
    int max_size=(x1.size()>y1.size()?x1.size():y1.size());
    
    //cout<<"max size is"<<max_size;
    for(int i=0;i<max_size;i++){
        if(x1[i]!=y1[i])
            result.push_back(1);
        else
            result.push_back(0);
    }

    cout<<"Binary representation of result is ";
    for(vector<int>::iterator i=result.begin();i!=result.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    reverse(result.begin(),result.end());
    vector<int>::iterator k;
    int j;
    for(k=result.begin(),j=0;k!=result.end();k++,j++){
        final_result+=pow(2,j)*(*k);       
    }
    return final_result;
}
