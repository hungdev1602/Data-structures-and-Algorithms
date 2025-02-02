// Bài 10. DFS trên đồ thị có hướng

// Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh. Hãy 
// thực hiện in ra danh sách các đỉnh được duyệt theo thuật toán DFS(s).

// Input Format
// Dòng đầu tiên là 2 số n và m và s, tương ứng với số lượng đỉnh, cạnh của đồ thị 
// và đỉnh bắt đầu duyệt. Các đỉnh của đồ thị được đánh số từ 1 tới n. m dòng tiếp 
// theo mỗi dòng chứa đỉnh u, v (u != v) tương ứng với một cạnh của đồ thị.

// Constraints
// 1<=s<=n<=1000; 1<=m<=n*(n-1)/2;

// Output Format
// In ra các đỉnh được duyệt theo thuật toán DFS(s). Chú ý trong quá trình mở rộng 
// các đỉnh của thuật toán DFS luôn lựa chọn duyệt các đỉnh có thứ tự nhỏ hơn 
// trước.

// Sample Input 0
// 5 10 4
// 5 1
// 4 5
// 4 2
// 4 3
// 1 5
// 3 5
// 5 3
// 3 1
// 1 4
// 5 2
// Sample Output 0
// 4 2 3 1 5

#include <bits/stdc++.h>
using namespace std;

int n, m, st;
vector<int> adj[1005];
bool used[1005];
void dfs(int u){
  cout << u << " ";
  used[u] = true;
  for(int v : adj[u]){
    if(!used[v]){
      dfs(v);
    }
  }
}

int main(){
  cin >> n >> m >> st;
  for(int i = 0; i < m; i++){
    int x, y; cin >> x >> y;
    adj[x].push_back(y);
  }
  for(int i = 0; i <= n; i++){
    sort(adj[i].begin(), adj[i].end());
  }
  return 0;
}