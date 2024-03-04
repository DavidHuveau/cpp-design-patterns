#ifndef TREE_FACTORY_HPP_INCLUDED
#define TREE_FACTORY_HPP_INCLUDED

#include <map>

#include "TreeType.hpp"

// Flyweight Factory : TreeFactory
class TreeFactory {
private:
  std::map<std::string, TreeType*> m_treeTypes;

public:
  TreeType* getTreeType(const std::string& name, const std::string& color);
};

#endif  // TREE_FACTORY_HPP_INCLUDED
