#include<iostream> 
	using namespace std; 
	int main() { 


	string s="qwertyuiopasdfghjklzxcvbnmq"; 	
	
	char c; 	
	cin >> c;

 
	for(int i=0; i<26; i++) 
	if(c==s[i]) 
	cout<<s[i+1]; 


return 0;
}