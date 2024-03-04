#include "Forest.hpp"

void Forest::plantTree(const std::string& name, const std::string& color, int x, int y) {
  TreeType* type = m_treeFactory.getTreeType(name, color);
  Tree*     tree = new Tree(type, {x, y});
  m_trees.push_back(tree);
};

void Forest::draw() {
  for (short i(0); i < m_trees.size(); i++) {
    m_trees[i]->draw();
  }
};
