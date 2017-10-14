/*Write a program to help me compute the average score on the quiz. Build an error (If I enter a number that isn’t a valid score
(the max possible is 30) or -1, reject the input and prompt me again for input. After I’m done entering scores, in addition
to the average, it also prints out the highest and lowest scores in the class. */
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {

    double score, scoreSum, scoreAv, scoreNum, lowest, highest;
    lowest = 30;
    highest = 0;

    cout<<"Enter the score(enter -1 when you are done entering all scores): "<<endl;
    cin>>score;
    if(score >= 0 && score <=30){
        scoreNum=scoreNum+1;
        scoreSum+=score;
    } else {
	cout<<"That isn't a valid score. Try again!"<<endl;
    }

    while (score!= -1) {
        cout<<"Enter the score(enter -1 when you are done entering all scores): "<<endl;
        cin>>score;
	if(score >= 0 && score <=30){
        	scoreNum=scoreNum+1;
        	scoreSum+=score;
	} else {
		cout<<"That isn't a valid score. Try again!"<<endl;
	}
	if((score < lowest)&& (score<=30 && score>=0)){
                lowest = score;
        } else if((score > highest) && (score<=30 && score>=0)) {
                highest = score;
        } else {
                score = score;
        }
    }
    scoreAv=(scoreSum/scoreNum);
    cout<<"Here is the average score: "<<scoreAv<<endl;
    cout<<"Here is the lowest score: "<<lowest<<endl;
    cout<<"Here is the highest score: "<<highest<<endl;
    return 0;
}
