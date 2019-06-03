#pragma once

#include <vector>

class UnionFindTree {
private:
  const int N;           // 要素数
  std::vector<int> par;  // 各ノードの親のID（根ノードは自分を参照）
  std::vector<int> sizes;  // 各ノードを根とする木のサイズ（根でないノードには無関係）

public:
  UnionFindTree(int n);

  int find(int x);
  void unite(int x, int y);
  bool same(int x, int y);
  void show();
  int size(int x);
};

