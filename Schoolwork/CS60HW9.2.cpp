#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct StudentInfo{
  string name;
  int grade;
};

int main() {
  char ans;
  int gra, count=0, i=0;
  string str;
  vector<StudentInfo> records;

  // User Input
  do{
    cout<<"Enter the student name: "<<endl;
    cin>>str;
    cout<<"Enter the student grade: "<<endl;
    cin>>gra;
    records.push_back(StudentInfo());
    records[i].name = str;
    records[i].grade=gra;
    i++;
    cout<<"Do you want to do it again?"<<endl;
    cin>>ans;
    count++;
  }while(ans=='y');

  int max = records[0].grade;
  int min = records[0].grade;
  int avg = 0;
  int total = 0;

  // Sort name
  string temp;
  int temp1;
  vector<StudentInfo>::iterator iter1;
  vector<StudentInfo>::iterator iter2;
  for(iter1 = records.begin(); iter1!=records.end();iter1++){
    for(iter2 = records.begin(); iter2<iter1;iter2++){
      if(iter1->name>iter2->name){
        temp = (iter2+1)->name;
        (iter2+1)->name = iter2 ->name;
        iter2->name = temp;
        temp1 = (iter2+1)->grade;
        (iter2+1)->grade = iter2 ->grade;
        iter2->grade = temp1;
      }
    }
  }

  // Finding min, max, and average
  vector<StudentInfo>::iterator iter;
  cout<<endl;
  cout<<"Here is the list of students and their grade: "<<endl;
  for(iter = records.begin(); iter!=records.end();iter++){
    // Find min and max
    if(iter->grade>max){
      max=iter->grade;
    }
    if(iter->grade<min){
      min=iter->grade;
    }
    // Find average
    total+=iter->grade;
    //Output
    cout<<iter->name<<" ";
    cout<<iter->grade<<endl;
  }
  cout<<"Here is the maximum: "<<max<<endl;
  cout<<"Here is the minimum: "<<min<<endl;
  avg=total/count;
  cout<<"Here is the average: "<<avg<<endl;

  return 0;
}
