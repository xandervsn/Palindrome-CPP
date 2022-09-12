#include <iostream>
#include <cstring>
#include <regex>
#include <cctype>

using namespace std;

int main(){
  char input[81] = {"\0"};
  
  cout << "Enter a word: ";
  cin >> input;

  int length = strlen(input);
  char forwards[length];
  for(int i=0; i < length; i++){
    forwards[i] = tolower(input[i]);
  }

    char backwards[length];
  for(int i=length-1; i >= 0; i--){
    backwards[i] = tolower(input[i]);
  }

  cout << forwards << ", " << backwards;

  if(strcmp(forwards, backwards) == 0){
    cout << "palindrome!";
  }else{
    cout << "not a palindrome.";
  }



  return 0;
}
