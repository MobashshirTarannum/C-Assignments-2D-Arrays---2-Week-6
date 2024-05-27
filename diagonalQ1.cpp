//Q1->Write a program to print the elements of both the diagonals in a square matrix.
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
    //output
     for(int i=0;i<=m-1; i++){
        for(int j=0;j<=n-1; j++){
            if(i==j || i+j==n-1) cout<<arr[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
        }
}
    
