#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    int max=0;
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]&arr[j])>max)
                max = arr[i]&arr[j];
        }
    }
    cout<<max;
}
