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

// complexity: O(nlogn) => vì sort
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n];
  for(int &x : a){
    cin >> x;
  }
  sort(a, a + n);
  
  int ans = 1e9;
  // for(int i = 0; i < n; i++){
  //   if(i == 0){
  //     ans = min(ans, abs(a[i] - a[i+1]));
  //   }
  //   else if(i == n - 1){
  //     ans = min(ans, abs(a[i] - a[i-1]));
  //   }
  //   else{
  //     int diff1 = abs(a[i] - a[i+1]);
  //     int diff2 = abs(a[i] - a[i-1]);
  //     ans = min(diff1, diff2);
  //   }
  // }
  for(int i = 1; i < n; i++){ //NGẮN GỌN VÀ TỐI ƯU HƠN
    ans = min(ans, a[i] - a[i-1]);
  }
  cout << ans;
  return 0;
}

/*
cách làm:
bước 1: sort mảng
bước 2: mỗi khi duyệt phần tử nào, chỉ cần kiểm tra 2 thg bên cạnh nó => xét a[i], check a[i-1] và a[i+1]
bước 3: cập nhật min
*/