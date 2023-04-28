#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main() {
    string input;
    int count_pairs = 0;
    pair<string,string> wyvili[5000];
    
    while(getline(cin,input) && !input.empty()){
        for(int i = 0; i < input.length(); i++){
            if(input[i] == ' '){
                wyvili[count_pairs].first = input.substr(0,i);
                wyvili[count_pairs].second = input.substr(i+1,input.length());
                count_pairs++;
            }
        }
    }
    
    while(getline(cin,input) && !input.empty()){
        string word = "";
        string output = "";
        input += ' '; 
        for(int i = 0; i < input.length(); i++){
            if(isalnum(input[i])){ 
                word += input[i];
            } else {
                for(int j = 0; j < count_pairs; j++){
                    if(wyvili[j].first == word){
                        output += wyvili[j].second;
                        word = "";
                    }
                }
                if(word != ""){
                    output += word;
                    word = "";
                }
                output += input[i];
            }
        }       
        
        cout << output << endl;
    }
    
    return 0;
}
