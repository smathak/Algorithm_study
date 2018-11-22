#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.size();
    vector<int> a;
    for (int i=0; i<n; i++) a.push_back(i);
    
    sort(a.begin(),a.end(), [](int a, int b){
        return a>b;
    });
    
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
   return 0;
}