#include <iostream>

#include <uftree.hpp>

int main() {
  UnionFindTree uf(5);  // 0~4の5つの要素について

  uf.unite(0, 2);  // 0と2は同じグループ
  uf.unite(2, 4);  // 2と4は同じグループ
  uf.unite(1, 3);  // 1と3は同じグループ

  // 1と2は同じグループ？
  std::cout << "same(1, 2) : " << (uf.same(1, 2) ? "True" : "False") << std::endl;
  // 3が所属するグループのメンバーの数は？
  std::cout << "size(3) : " << uf.size(3) << std::endl;
  // グループのリストを表示
  uf.show();

  return 0;
}

