#include<iostream>
#include<string>
using namespace std;

class Month{
public:
  void setMonth();
  void input();
  void outputMonthNum();
  void outputMonthName();
  void nextMonth();
private:
  string month;
  int monthNum;
};

//Take in and set the month
void Month::setMonth(char one, char two, char three){
  //char one, two, three;
  /*cout<<"Enter the first letter: "<<endl;
  cin>>one;
  cout<<"Enter the second letter: "<<endl;
  cin>>two;
  cout<<"Enter the third letter: "<<endl;
  cin>>three;*/
  int i=0;
  month[i]=one;
  month[i+1]=two;
  month[i+2]=three;
}

//Change the month to the respective number
void Month::input(){
  int i=0;
  if(month[i]=='j'&&month[i+1]=='a'){
    monthNum=1;
  } else if(month[i]=='f'){
    monthNum=2;
  } else if(month[i]=='m'&&month[i+1]=='a'&&month[i+2]=='r'){
    monthNum=3;
  } else if(month[i]=='a'&&month[i+1]=='p'){
    monthNum=4;
  } else if(month[i]=='a'&&month[i+1]=='a'&&month[i+2]=='y'){
    monthNum=5;
  } else if(month[i]=='j'&&month[i+1]=='u'&&month[i+2]=='n'){
    monthNum=6;
  } else if(month[i]=='j'&&month[i+1]=='u'&&month[i+2]=='l'){
    monthNum=7;
  } else if(month[i]=='a'&&month[i+1]=='u'){
    monthNum=8;
  } else if(month[i]=='s'){
    monthNum=9;
  } else if(month[i]=='o'){
    monthNum=10;
  } else if(month[i]=='n'){
    monthNum=11;
  } else if(month[i]=='d'){
    monthNum=12;
  }
}
//Return the month as a number
void Month::outputMonthNum(){
  cout<<"Here is the monthNum: "<<monthNum<<endl;
}

// Output the month name
void Month::outputMonthName(){
  cout<<"This is the month: ";
  for(int i=0;i<3;i++){
    cout<<month[i];
  }
  cout<<endl;
}

// Find the next month
void Month::nextMonth(){
  if(monthNum<12){
    monthNum++;
  } else {
    monthNum = 1;
  }
  int newMonth = monthNum;
  cout<<"Here is the new month: "<<newMonth<<endl;
}

int main(){
  Month a;
  a.setMonth("j","a","n");
  a.input();
  a.outputMonthName();
  a.outputMonthNum();
  a.nextMonth();

  return 0;
}
