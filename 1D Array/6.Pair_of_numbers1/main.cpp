// Bài 6. Cặp số 1
// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số 
// A[i], A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước.

// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng; Dòng thứ 3 là số nguyên K

// Constraints
// 1<=N<=1000; 0<=A[i], X<=10^3;

// Output Format
// In ra số lượng cặp thỏa mãn

// Sample Input 0
// 5
// 1 2 3 1 2
// 3
// Sample Output 0
// 4

// Complexity: O(n^2)
#include <bits/stdc++.h>
using namespace std;
int countPair(int a[], int n, int k){
  int cnt = 0;
  // B1
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      // B2
      if(a[i] + a[j] == k){
        // B3
        cnt++;
      }
    }
  }
  return cnt;
}
int main(){
  int n, k; cin >> n;
  int a[n];
  for(int &x : a){
    cin >> x;
  }
  cin >> k;
  cout << countPair(a, n, k);
  return 0;
}

/*
Cách làm:
B1: duyệt từng phần tử hiện tại và các phần tử sau nó
B2: check xem có a[i] + a[j] == k hay ko?. Duyệt 2 vòng for lồng nhau để duyệt tất cả các cặp
B3: nếu có tăng đáp án lên 1, nếu ko thì skip sang số a[j] tiếp theo
 */