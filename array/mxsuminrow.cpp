#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int arr[m][n];   // fixed size array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // print matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int colIndex=-1;
    int sum = INT_MIN;

    // find row with max sum
    for(int j=0;j<m;j++){
        int colsum=0;
        for(int i=0;i<n;i++){
            colsum+=arr[j][i];
        }
        if(colsum<sum){
            sum=colsum;
            colIndex=j;
        }
    }

    cout<<"Row with max sum: "<<colIndex<<endl;
    cout<<"Max row sum = "<<sum<<endl;

    return 0;
}
