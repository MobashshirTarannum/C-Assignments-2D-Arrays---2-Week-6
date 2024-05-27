//Q2->Write a program to rotate the matrix by 90 degrees anti-clockwise.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of ";
    cin>>n;
    int arr[n][n];
    //input
    for(int i=0;i<=n-1; i++){
        for(int j=0;j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
        cout<<endl;
    
        //transpose
        for(int i=0;i<=n-1; i++){
           for(int j=0;j<=n-1; j++){
             if(i>j){//i!=j  i>j
             swap(arr[i][j],arr[j][i]);
              }
            }
        }  
        
    //reverse each colum
    for(int k=0; k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
           swap(arr[i][k],arr[j][k]); 
           i++;
           j--;
        }
    }


     for(int i=0;i<n; i++){
        for(int j=0;j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}