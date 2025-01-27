// Bài 8. Liệt kê các giá trị khác nhau
// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị khác nhau trong mảng theo thứ tự xuất hiện, 
// mỗi giá trị chỉ liệt kê 1 lần. Ở thời điểm hiện tại các bạn có thể for trâu để giải bài này, sau này sẽ dùng cách tối ưu hơn.

// Gợi ý : Duyệt qua từng chỉ số i của mảng, nếu kiểm tra được đây là giá trị đầu tiên mà bạn gặp thì sẽ in ra giá trị này, 
// tức là trước đó trong đoạn từ 0 tới chỉ số i - 1 ko có giá trị nào giống A[i], 
// ví dụ mảng A = {1, 1, 3, 1, 5, 1, 8}, khi bạn xét số 5 bạn sẽ ra nó vì trước nó ko có giá trị nào giống nó cả. 
// Để mà kiểm tra có in ra giá trị A[i] hay không bạn làm 1 vòng for duyệt từ chỉ số 0 tới chỉ số i - 1 và kiểm tra xem có giá trị nào bằng với A[i] hay ko, 
// nếu ko có thì hãy in ra, có thể kiểm tra bằng cách sử dụng 1 biến đánh dấu.

// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;

// Constraints
// 1<=N<=1000; 0<=A[i], X<=10^3;

// Output Format
// In ra các giá trị khác nhau theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê 1 lần.

// Sample Input 0
// 9 
// 1 2 3 4 1 2 3 4 5
// Sample Output 0
// 1 2 3 4 5

// complexity: O(n^2)
#include <bits/stdc++.h>
using namespace std;
void printValues(int a[], int n){
  for(int i = 0; i < n; i++){
    bool check = false;
    for(int j = 0; j < i; j++){
      if(a[j] == a[i]){
        check = true;
        break;
      }
    }
    if(!check){
      cout << a[i] << " ";
    }
  }
}
int main(){
  int n; cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  printValues(a, n);
  return 0;
}