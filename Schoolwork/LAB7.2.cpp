//Find Protein in DNA
#include<iostream>
#include<string>
using namespace std;

string partString(string s, int startPos, int length);
int findProtein(string protein, string dna);

int main() {
    string protein, dna, s2;
    int startPos, length, same;

    cout<<"Enter the DNA: "<<endl;
    cin>>dna;

    cout<<"Enter the protein: "<<endl;
    cin>>protein;

    same=findProtein(protein,dna);
    cout<<"Here is the index: "<<same<<endl;
    return 0;

}

string partString(string s, int startPos, int length) {
    string part;
    for(int i=startPos; i<startPos+length; i++){
        part = part+s[i];
    }
    return part;
}

int findProtein(string protein, string dna){
    string str;
    bool found=false;
    int index;
    for(int i=0; i<dna.length()-protein.length();i++){
        str=partString(dna, i, protein.length());
        if(str==protein){
            index=i;
            found=true;
            break;
        }
    }
    if(found==false){
        index=-1;
    }
    return index;
}
