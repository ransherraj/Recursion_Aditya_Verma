#include <bits/stdc++.h>
using namespace std;
void insertion(stack<int>&st,int temp)
{
  if(st.size() == 0)
  {
    st.push(temp);
    return;
  }
  int x=st.top();
  st.pop();
  insertion(st,temp);
  st.push(x);
}
void reverseStack(stack<int>&st)
{
  if(st.size() == 0) {
      return;
  }
  int temp = st.top();
  st.pop();
  reverseStack(st);
  insertion(st, temp);
  return;

}
int main()
{
    int n; 
    cin>>n;
    stack<int>st;
    for(int i = 0; i < n ; i++){
        int x; cin>>x;
        st.push(x);
    }
    
    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
   }
    return 0;
}

/* 
Input: 
5
1 2 3 4 5

Output:  1 2 3 4 5 

*/
