//Give an integer array arr, move all zeros to the end of it while maintaining the relative order of non - zero elements 
// note you must do it without creating a copy of the array 
//input:  3 0 2 0 1 5
//output: 3 2 1 5 0 0 
#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>&arr){
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
int j=0;
bool flag = false;
while(j!=i){
    if(arr[j]==0 && arr[j+1]!=0){
        swap(arr[j],arr[j+1]);
        flag=true;  
    }
    j++;  
}
if(!flag){
        break;
    }

    }
    return;
}
int main(){
    int n;
    cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];

}
sort(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
return 0;
}