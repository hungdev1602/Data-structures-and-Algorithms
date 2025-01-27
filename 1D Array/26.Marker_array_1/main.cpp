// Bài 26. Mảng đánh dấu 1

// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?

// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints
// 1<=N<=1000; 0<=A[i]<=10^6;

// Output Format
// In ra số lượng các giá trị khác nhau xuất hiện trong mảng

// Sample Input 0
// 5
// 3 9 4 0 9 
// Sample Output 0
// 4
// Sample Input 1
// 5
// 1 7 8 1 7 
// Sample Output 1
// 3

// complexity: O(n)
#include <bits/stdc++.h>
using namespace std;

// B1, max 10^6
int cnt[1000001]; //marker array

int main(){
  int n; cin >> n;
  int a[n];

  //biến max_val này được tạo ra để xem số lớn nhất trong mảng a[], 
  //vì khi duyệt mảng đánh dấu => chỉ cần lặp đến số lớn nhất trong a[] là được
  int max_val = -1e9; 

  for(int i = 0; i < n; i++){
    cin >> a[i];
    cnt[a[i]]++; // B2
    max_val = max(max_val, a[i]); //tìm số lớn nhất trong a[]
  }
  int ans = 0;
  for(int i = 0; i <= max_val; i++){ //duyệt đến max_val là được
    // B3
    if(cnt[i] != 0){
      ans++;
    }
  }
  cout << ans;
  return 0;
}

/*
Cách làm:
B1: tạo 1 mảng đánh dấu, tất cả giá trị của mảng = 0
B2: tăng vị trí a[i] của mảng đánh dấu lên 1, điều này có nghĩa là số a[i] đã xuất hiện
B3: duyệt mảng đánh dấu, nếu vị trí i của mảng đánh dấu != 0, có nghĩa là có số này trong mảng a[i], tăng đáp án lên 1
*/