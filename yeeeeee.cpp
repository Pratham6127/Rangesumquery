#include<bits/stdc++.h>
using namespace std;

vector<int> rangesum(vector<int>& array){

    vector<int>ps(array.size());

    ps[0]=array[0];

    for(int i=1;i<array.size();i++){

        ps[i]=ps[i-1]+array[i];





    }
    return ps;

    

    
}
int main(){

    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    vector<int>array(n);

    cout<<"Enter the elements of the array";

    for(int i=0; i<array.size();i++){

        cin>>array[i];
    }

    int q;

    cout<<"Enter the number of queries";
    cin>>q;


    vector<int>result=rangesum(array);

    while(q!=0){

        int i,j;
        cout<<"Enter i";
        cin>>i;

        cout<<"Enter j";
        cin>>j;

        if(i==0){

            cout<<result[j];
        }
        else{
            cout<<result[j]-result[i-1];
        }
        q--;


    }
    return 0;

    
}