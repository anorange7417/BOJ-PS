/*
 *  1541   
 */
#include <string>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

int main(){
  string s;
	getline(cin, s);
	int dab=0;
	bool check= true; 
	for (int i =0 ; i<s.size(); i++){
		if ( s[i] == '-'){
			check = false; 
		}else if (s[i]=='+') {
			
		}else {
			string temp; 
			while ( s[i] != '+' && s[i] != '-' && i != s.size() ){
				temp+= s[i];
				i++;
			}
			i--;
			if (check){
				 dab+=stoi(temp);
			}else {
				dab-=stoi(temp);
			}
			
		}
	}
	cout << dab<< endl;

}
