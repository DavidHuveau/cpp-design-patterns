#ifndef TREE_HPP_INCLUDED
#define TREE_HPP_INCLUDED

#include "TreeType.hpp"

class Tree {
private:
  TreeType* m_treeType;
  TreePosition m_position;

public:
  Tree(TreeType* type, const TreePosition& pos);
  void draw();
};

#endif  // TREE_HPP_INCLUDED
