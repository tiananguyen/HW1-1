#include<iostream>
#include<string>
#include<cmath>
#include<sstream>
using namespace std;


class ZipCode{
public:
  //Two Constructors
  ZipCode(int zip);
  ZipCode(string bar);
  //Two Member Functions
  void zipCodeChange(int zipcode);
  void barCodeChange(string barcode);
private:
  int zipcode;
  string barcode;
};


// E N C O D E
// Set value equal to zipcode
ZipCode::ZipCode(int zip){
  zipcode = zip;
}

// Change Zip Code to Bar Code
void ZipCode::zipCodeChange(int zipcode){
  string zip1, zip2, zip3, zip4, zip5, zipNew2="";
  int zip[27], zipNew[5];
  int count=0;

  //Change int to string
  std::ostringstream s;
  s << zipcode;
  zipNew2.append(s.str());

  // Find cooresponding code for each number and output zip code
  zip[0]=1;
  for(int i=0;i<6;i++){
    if(zipNew2[i]=='0'){
      zip[1+count]=0;
      zip[2+count]=0;
      zip[3+count]=0;
      zip[4+count]=0;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='1'){
      zip[1+count]=0;
      zip[2+count]=0;
      zip[3+count]=0;
      zip[4+count]=1;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='2'){
      zip[1+count]=0;
      zip[2+count]=0;
      zip[3+count]=1;
      zip[4+count]=0;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='3'){
      zip[1+count]=0;
      zip[2+count]=0;
      zip[3+count]=1;
      zip[4+count]=1;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='4'){
      zip[1+count]=0;
      zip[2+count]=1;
      zip[3+count]=0;
      zip[4+count]=0;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='5'){
      zip[1+count]=0;
      zip[2+count]=1;
      zip[3+count]=0;
      zip[4+count]=1;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='6'){
      zip[1+count]=0;
      zip[2+count]=1;
      zip[3+count]=1;
      zip[4+count]=0;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='7'){
      zip[1+count]=1;
      zip[2+count]=0;
      zip[3+count]=0;
      zip[4+count]=0;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='8'){
      zip[1+count]=1;
      zip[2+count]=0;
      zip[3+count]=0;
      zip[4+count]=1;
      zip[5+count]=0;
    }
    if(zipNew2[i]=='9'){
      zip[1+count]=1;
      zip[2+count]=0;
      zip[3+count]=1;
      zip[4+count]=0;
      zip[5+count]=0;
    }
    count+=5;
  }
  zip[26]=1;

  // Output zip code
  cout<<"Here is the barcode: "<<endl;
  cout<<zip[0]<<" ";
  for(int i=1; i<27; i++){
    cout<<zip[i]<<" ";
  }
  cout<<zip[26]<<endl;
}

// D E C O D E
// Get string barcode and return
ZipCode::ZipCode(string bar){
  barcode = bar;
}

// Change Bar Code to Zip Code
void ZipCode::barCodeChange(string barcode){
  string zip1="", zip2="", zip3="", zip4="", zip5="";
  int zipInt1, zipInt2, zipInt3, zipInt4, zipInt5;

  // Change string to int and put each number of barcode into an int array
  for(int i=1;i<6;i++){
    zip1+=barcode[i];
  }
  for(int i=6;i<11;i++){
    zip2+=barcode[i];
  }
  for(int i=11;i<16;i++){
    zip3+=barcode[i];
  }
  for(int i=16;i<21;i++){
    zip4+=barcode[i];
  }
  for(int i=21;i<26;i++){
    zip5+=barcode[i];
  }

// Find the different zipcode numbers and output zip code
    // Find zip1 number
    if(zip1=="00010"){
      zipInt1=1;
    }
    if(zip1=="00100"){
      zipInt1=2;
    }
    if(zip1=="00110"){
      zipInt1=3;
    }
    if(zip1=="01000"){
      zipInt1=4;
    }
    if(zip1=="01010"){
      zipInt1=5;
    }
    if(zip1=="01100"){
      zipInt1=6;
    }
    if(zip1=="10000"){
      zipInt1=7;
    }
    if(zip1=="10010"){
      zipInt1=8;
    }
    if(zip1=="10100"){
      zipInt1=9;
    }
    // Find zip2 number
    if(zip2=="00010"){
      zipInt2=1;
    }
    if(zip2=="00100"){
      zipInt2=2;
    }
    if(zip2=="00110"){
      zipInt2=3;
    }
    if(zip2=="01000"){
      zipInt2=4;
    }
    if(zip2=="01010"){
      zipInt2=5;
    }
    if(zip2=="01100"){
      zipInt2=6;
    }
    if(zip2=="10000"){
      zipInt2=7;
    }
    if(zip2=="10010"){
      zipInt2=8;
    }
    if(zip2=="10100"){
      zipInt2=9;
    }
    // Find zip3 number
    if(zip3=="00010"){
      zipInt3=1;
    }
    if(zip3=="00100"){
      zipInt3=2;
    }
    if(zip3=="00110"){
      zipInt3=3;
    }
    if(zip3=="01000"){
      zipInt3=4;
    }
    if(zip3=="01010"){
      zipInt3=5;
    }
    if(zip3=="01100"){
      zipInt3=6;
    }
    if(zip3=="10000"){
      zipInt3=7;
    }
    if(zip3=="10010"){
      zipInt3=8;
    }
    if(zip3=="10100"){
      zipInt3=9;
    }
    // Find zip4 number
    if(zip4=="00010"){
      zipInt4=1;
    }
    if(zip4=="00100"){
      zipInt4=2;
    }
    if(zip4=="00110"){
      zipInt4=3;
    }
    if(zip4=="01000"){
      zipInt4=4;
    }
    if(zip4=="01010"){
      zipInt4=5;
    }
    if(zip4=="01100"){
      zipInt4=6;
    }
    if(zip4=="10000"){
      zipInt4=7;
    }
    if(zip4=="10010"){
      zipInt4=8;
    }
    if(zip4=="10100"){
      zipInt4=9;
    }
    // Find zip5 number
    if(zip5=="00010"){
      zipInt5=1;
    }
    if(zip5=="00100"){
      zipInt5=2;
    }
    if(zip5=="00110"){
      zipInt5=3;
    }
    if(zip5=="01000"){
      zipInt5=4;
    }
    if(zip5=="01010"){
      zipInt5=5;
    }
    if(zip5=="01100"){
      zipInt5=6;
    }
    if(zip5=="10000"){
      zipInt5=7;
    }
    if(zip5=="10010"){
      zipInt5=8;
    }
    if(zip5=="10100"){
      zipInt5=9;
    }
    //Output the zip code
    cout<<"Here is the zip code: "<<endl;
    cout<<zipInt1<<zipInt2<<zipInt3<<zipInt4<<zipInt5<<endl;
}



int main() {
  ZipCode a(12345), b("110000100001000010000100001");
  a.zipCodeChange(12345);
  b.barCodeChange("110000100001000010000100001");

  return 0;
}
