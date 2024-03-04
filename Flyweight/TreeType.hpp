#ifndef TREE_TYPE_HPP_INCLUDED
#define TREE_TYPE_HPP_INCLUDED

#include <string>

// External state (extrinsic state) : position of the tree
struct TreePosition {
  int x;
  int y;
};

// Flyweight : TreeType (Intrinsic state)
class TreeType {
private:
  std::string m_name;
  std::string m_color;

public:
  TreeType(const std::string& name, const std::string& color);
  void draw(const TreePosition& position);
};

#endif  // TREE_TYPE_HPP_INCLUDED
