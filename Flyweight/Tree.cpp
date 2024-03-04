#include "Tree.hpp"

Tree::Tree(TreeType* type, const TreePosition& pos) : m_treeType(type), m_position(pos){};

void Tree::draw() {
  m_treeType->draw(m_position);
};
