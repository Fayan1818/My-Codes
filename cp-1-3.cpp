#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
   

    int ans =0;

    for(int i=0;i<n;i++){
        ans = ans ^ nums[i];
        ans = ans ^ i;
    }

    ans = ans ^ n;

    cout <<ans ;

    return 0;
}