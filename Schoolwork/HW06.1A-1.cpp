#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    int size, score[size], i=0;
    double scoreSum=0, scoreAv=0, scoreNum=0;
    
    cout<<"Enter the score(enter -1 when you are done entering all scores): "<<endl;
    cin>>score[i];
    
    while (score[i]!= -1) {
        scoreSum+=score[i];
        scoreNum++;
        i++;
        cout<<"Enter the score(enter -1 when you are done entering all scores): "<<endl;
        cin>>score[i];
    }
    scoreAv=scoreSum/scoreNum;
    cout<<"Here is the average score: "<<scoreAv<<endl;
    return 0;
}