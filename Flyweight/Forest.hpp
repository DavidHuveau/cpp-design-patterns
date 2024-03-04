#ifndef FOREST_HPP_INCLUDED
#define FOREST_HPP_INCLUDED

#include "TreeFactory.hpp"
#include "Tree.hpp"
#include <vector>

class Forest {
private:
  TreeFactory m_treeFactory;
  std::vector<Tree*> m_trees;

public:
  void plantTree(const std::string& name, const std::string& color, int x, int y);
  void draw();
};

#endif  // FOREST_HPP_INCLUDED
