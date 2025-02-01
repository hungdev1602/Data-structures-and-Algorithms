#include <bits/stdc++.h>
using namespace std;

// complexity: O(n)
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
  for(int i = 0; i < n; i++){
    ans += d[a[i]] * d[k - a[i]]; //bước 2
    d[a[i]] = 0; //bước 3
  }
  cout << ans;
}

/*
Giải thích:

bước 1: ta sẽ đếm tần suất xuất hiện của từng phần tử
bước 2: ta sẽ lấy tần suất của số a[i] hiện tại nhân với số k - a[i], (vì a[i] + (k - a[i]) == k)
bước 3: phải reset tần suất của a[i] hiện tại về 0, vì nếu tính lại a[i] là chúng ta sẽ tính thừa
*/