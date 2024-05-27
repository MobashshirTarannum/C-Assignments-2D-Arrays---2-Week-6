//Q4->Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
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

    //spiral
    int minr = 0;
    int maxr = m-1;
    int maxc = n-1;
    int minc = 0;
    int tne = m * n;
    int count = 0;

    while(minr<=maxr && minc<=maxc){
        //right
        for(int j =minc; j<=maxc &&  count<tne; j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        //down
        for(int i=minr; i<=maxr &&  count<tne; i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //left
        for(int j = maxc; j>=minr &&  count<tne; j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        //up
        for(int i=maxr; i>=minr &&  count<tne; i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}