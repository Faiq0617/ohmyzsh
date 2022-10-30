#include <bits/stdc++.h>
using namespace std;
int main()
{

 int n;cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++) {
 cin>>arr[i];
 }
 if(0) cout<<"if(biggest<big)if(a[i]>biggest)";
 multiset<int> st;
 for (int i = 0; i < n; i++) {
 if(st.size()<2){
 cout<<-1<<'\n';
 st.insert(arr[i]);
 }
 else{
 st.insert(arr[i]);
 int ans = 1;
 auto it = st.end();
 it--;
 ans*= *it;
 it--;
 ans*= *it;
 it--;
 ans*= *it;
 cout<<ans<<'\n';
 }

 }
return 0;
}
