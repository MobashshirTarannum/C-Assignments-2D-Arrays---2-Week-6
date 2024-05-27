//Q3->Write a program to print the matrix in wave form.
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the no of rows";
    cin>>m;
    int n;
    cout<<"enter the no of columns";
    cin>>n;
    int arr[m][n];
    
    //input
    for(int i=0;i<=m-1; i++){
        for(int j=0;j<=n-1; j++){
            cin>>arr[i][j];
        }
    }

    //wave print
     for(int j=0;j<=n-1; j++){
        if(j%2!=0){//odd
        for(int i=0;i<=m-1; i++){
            cout<<arr[i][j]<<" ";
        }
        }
        else{ //even
            for(int i=m-1;i>=0; i--){
            cout<<arr[i][j]<<" ";
            }
        }
    }
}