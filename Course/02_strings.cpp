#include<iostream>

using namespace std;


int main() {
    

    cout << "This is a line\n";
    cout << "Hello" << endl;

    string phrase = "This is BC.";
    
    // find length of a string
    cout << phrase.length();

    // work with char
    cout << phrase[2] << endl;
    phrase[0] = 'B';
    cout << phrase << endl;

    // find(substring to look for, where to start)
    cout << phrase.find("is", 3) << endl;

    // substring
    string phrasesub;
    phrasesub = phrase.substr(3, 6);
    cout << phrasesub << endl;

}