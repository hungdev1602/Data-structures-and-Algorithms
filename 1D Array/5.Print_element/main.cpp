// Bài 5. In phần tử

// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là in ra các phần tử là số chẵn ở chỉ số chẵn, 
// nếu mảng không tồn tại phần tử như vậy thì in ra "NONE".

// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;

// Constraints
// 1<=N<=1000; -10^3<=A[i]<=10^3;

// Output Format
// In ra các số cách nhau một khoảng trắng hoặc in ra NONE nếu không tìm thấy số thỏa mãn điều kiện của đầu bài.

// Sample Input 0
// 5
// -971 107 458 222 200 
// Sample Output 0
// 458 200 

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
  ios::sync_with_stdio(false);
	cin.tie(nullptr);

  int n; cin >> n;
  int a[n];
  for(int &x : a){
    cin >> x;
  }
  bool check = false;
  for(int i = 0; i < n; i+=2){ //nhảy cóc 2 lần (i+=2), vì chỉ cần check chỉ số chẵn
    if(a[i] % 2 == 0){ //đoạn này sẽ ko cần check i % 2 == 0 vì i sẽ luôn chẵn
      cout << a[i] << " ";
      check = true;
    }
  }
  if(!check)
    cout << "NONE";
  return 0;
}

