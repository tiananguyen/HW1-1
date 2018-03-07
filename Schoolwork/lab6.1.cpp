#include<iostream>
#include<string>
using namespace std;

template<typename T1, typename T2>
int count_exact(T1 a[], T2 size, T1 find);
template<typename T1, typename T2>
int count_range(T1 a[], T2 size, T1 low, T1 high);

int main(){
  int a[6] = {6,2,3,2,6,2};
  string b[5] = {"ab","bc","c","a","b"};
  string e = "ab";
  string h = "bc";
  int c = count_exact(a, 6, 6);
  int d = count_exact(b, 5, e);
  cout<<c<<endl;
  cout<<d<<endl;
  int f = count_range(a, 6, 2, 4);
  cout<<f<<endl;
  int g = count_range(b, 5, e, h);
  cout<<g<<endl;

  return 0;

}

/* In the following code
 * T1 has to have ==
 * T2 has to have =, <, ++
 */
template<typename T1, typename T2>
int count_exact(T1 a[], T2 size, T1 find){
  int count = 0;
  for(T2 i=0; i<size; i++){
    if(a[i]==find){
      count++;
    }
  }
  return count;
}

/* In the following code
 * T1 has to have <=, >=
 * T2 has to have =, <, ++
 */
template<typename T1, typename T2>
int count_range(T1 a[], T2 size, T1 low, T1 high){
  int count = 0;
  for(T2 i=0; i<size; i++){
    if(a[i]<=high && a[i]>=low){
      count++;
    }
  }
  return count;
}
