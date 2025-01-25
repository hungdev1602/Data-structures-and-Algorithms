// Bài 7. Cặp số 2
// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm độ chênh lệch nhỏ nhất giữa 2 phần tử trong mảng.

// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;

// Constraints
// 1<=N<=1000; 0<=A[i], X<=10^3;
// Output Format
// In ra độ chênh lệch nhỏ nhất giữa 2 phần tử bất kì trong mảng

// Sample Input 0
// 8
// 69 96 93 27 84 32 78 56 
// Sample Output 0
// 3
// Giải thích đáp án: cặp số có độ chênh lệch nhỏ nhất là: 96 và 93, độ chênh lệch là 3
#include <bits/stdc++.h>
using namespace std;

int pairOfNumber(int a[], int n){
  int ans = 1e9;
  // B1
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      // B2
      if(abs(a[i] - a[j]) < ans){
        ans = abs(a[i] - a[j]);
      }
    }
  }
  return ans;
}

int main(){
  int n; cin >> n;
  int a[n];
  for(int &x : a){
    cin >> x;
  }
  cout << pairOfNumber(a, n);

  return 0;
}

/* Cách làm:
B0: gán đáp án lúc đầu bằng 1^9 vì sẽ check số nhỏ hơn, logic nên vậy
B1: duyệt tất cả các cặp trong mảng
B2: nếu trị tuyệt đối abs(a[i] - a[j]) nhỏ hơn đáp án hiện tại thì sẽ gán đáp án là abs(a[i] - a[j])
*/