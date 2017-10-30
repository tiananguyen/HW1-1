#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    int size, score[size], i=0;
    double scoreSum=0, scoreAv=0, scoreNum=0;
    
    cout<<"Enter the score(enter -1 when you are done entering all scores): "<<endl;
    cin>>score[i];
    if(score[i] >= 0 && score[i] <= 30) {
        scoreSum+=score[i];
        scoreNum++;
        i++;
    } else {
	cout<<"That isn't a valid score. Try again!"<<endl;
    }
    
    while (score[i]!= -1) {
        cout<<"Enter the score(enter -1 when you are done entering all scores): "<<endl;
        cin>>score[i];
        if(score[i] >= 0 && score[i] <= 30) {
            scoreSum+=score[i];
            scoreNum++;
            i++;
        } else {
            cout<<"That isn't a valid score. Try again!"<<endl;
        }
    }
    scoreAv=scoreSum/scoreNum;
    cout<<"Here is the average score: "<<scoreAv<<endl;
    return 0;
}