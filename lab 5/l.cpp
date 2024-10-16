#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  string s;

  cin >> s; 

  //s = abb

  char ch = s[0]; //ch = a
  
  reverse(s.begin(), s.end()); //s = bba;

  //"abc" + "dbe" = "abcde" --> concacenation 
  
  string s1 = ch + s; //s1 = a + bba = abba

  string s2 = s; //s2 = abba

  reverse(s1.begin(), s1.end()); //s1 = abba(reversed)


  //if(abba == abba)
  if(s2 == s1) cout << "YES";
  else cout << "NO";

 
  return 0;
}