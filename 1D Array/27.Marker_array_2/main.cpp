// Bài 27. Mảng đánh dấu 2

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự từ nhỏ đến lớn kèm theo tần suất của nó

// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

// Constraints
// 1<=N<=1000; 0<=A[i]<=10^6;

// Output Format
// In ra nhiều dòng, mỗi dòng gồm giá trị và tần suất viết cách nhau một khoảng trắng

// Sample Input 0
// 6
// 6 6 4 6 0 8 
// Sample Output 0
// 0 1
// 4 1
// 6 3
// 8 1

#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];
int main(){
  int n; cin >> n;
  int a[n];
  int max_val = -1e9;
  for(int &x : a){
    cin >> x;
    cnt[x]++;
    max_val = max(max_val, x);
  }

  for(int i = 0; i <= max_val; i++){
    if(cnt[i] != 0){
      cout << i << " " << cnt[i] << endl;
    }
  }

  return 0;
}

/*
Để hiểu cách làm hãy xem bài 26. vì logic y hệt, chỉ khác là in ra số và tần suất xuất hiện
*/