#include "../include/uftree.hpp"

#include <functional>
#include <iostream>

UnionFindTree::UnionFindTree(int n) : par(n), sizes(n, 1), N(n) {
  for (int i = 0; i < n; i++) par[i] = i;
}

// 要素xが属するグループの根ノードのIDを見つける
int UnionFindTree::find(int x) {
  if (par[x] == x)
    return x;
  else
    return par[x] = find(par[x]);
}

// 要素x, yが属するグループ同士を統合する
void UnionFindTree::unite(int x, int y) {
  x = find(x);
  y = find(y);
  if (x == y) return;

  if (sizes[x] < sizes[y]) {
    par[x] = y;
    sizes[y] += sizes[x];
  } else {
    par[y] = x;
    sizes[x] += sizes[y];
  }
}

// グループのリストを表示する
// (IDが小さい順に表示される, O(n^2)なので最速の実装ではない)
void UnionFindTree::show() {
  std::cout << "Groups : " << std::endl;
  std::function<void(int)> f = [&](int x) {
    std::cout << x << ',';
    for (int y = 0; y < N; y++) {
      if (par[y] == x && y != x) f(y);
    }
  };
  for (int i = 0; i < N; i++) {
    if (par[i] == i) {
      f(i);
      std::cout << std::endl;
    }
  }
}

// 要素x, yが同じグループに属するかどうか
bool UnionFindTree::same(int x, int y) { return find(x) == find(y); }

// 要素xが所属するグループに含まれる要素の数
int UnionFindTree::size(int x) { return sizes[find(x)]; }

