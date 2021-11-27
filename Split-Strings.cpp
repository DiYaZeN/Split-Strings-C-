#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<std::string> solution(const std::string &s)
{
  
  string  str=s;
  int StrSize=str.size();
  vector<string> NewString;

  if (StrSize%2!=0){
    str.push_back('_');
  }
  
  StrSize=str.size();
  
  for(int i=0;i<StrSize/2;i++){
    string sub=str.substr(0,2);
    NewString.push_back(sub);
    str.erase(0,2);
  }
    
    return NewString;// Your code here
}
