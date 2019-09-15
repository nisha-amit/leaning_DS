#include <iostream>
#include <set>
#include <iterator>
using namespace std;


int shortestSubstring(string s) {
  set<char> st;
  int len1,len = s.length();
  for(int i =0; i < len ; i++){
    st.insert(s[i]);
  }
  len1 = st.size();
  // for(int i=0;i<len-len1;i++){
  // }
  set<char>::iterator itr;
  for(itr = st.begin(); itr!=st.end(); itr++){
    cout << *itr << " ";
  }
  return len1;
}

int main(){
  string a = "aabcce";
  cout << shortestSubstring(a) << "\n";
}
