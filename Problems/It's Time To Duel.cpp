#include <iostream>
#include <string>
using namespace std;


int main(){
int testcase;

cin >> testcase;
for(int i=0;i<testcase;i++){
int n;
int flag=0; 
cin >> n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int j=0;j<n-1;j++){
    if(arr[j]==0 && arr[j+1]==0){
        flag=1;
        break;

    }
    

}
if(flag!=1){
for(int j=0;j<n;j++){
    if(arr[j]==0){
        flag=0;
        break;    
    }
    else flag=1;

}
}

if(flag==1){
    printf("YES \n");
}
else printf("NO \n");

}
}

