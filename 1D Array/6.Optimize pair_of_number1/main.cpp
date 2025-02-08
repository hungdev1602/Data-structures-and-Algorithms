#include <bits/stdc++.h>
using namespace std;
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
// complexity: O(k/2), duyệt chỉ đến k/2
int d[1001];
int main(){
  int n, k; cin >> n;
  int a[n];
  for(int &x : a){
    cin >> x;
    d[x]++; //bước 1
  }
  cin >> k;
  int ans = 0;
  for(int x = 0; x <= k/2; x++){ //bước 2
    int y = k - x;
    if(x != y){
      ans += d[x] * d[y];
    }
    else{ //bước 3
      ans += (d[x] * (d[x] - 1)) / 2;
    }
  }
  cout << ans;
}

/*
Giải thích:

bước 1: ta sẽ đếm tần suất xuất hiện của từng phần tử
bước 2: ta chỉ đếm từ 0 đến k/2, và lấy tần suất của x và y nhân với nhau là có ngần ấy cặp tổng x+y = k
bước 3: nếu x và y bằng nhau, thì ta đếm tổ hợp chặp 2 của d[x]
*/