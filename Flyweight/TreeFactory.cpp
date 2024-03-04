#include "TreeFactory.hpp"

using namespace std;

TreeType* TreeFactory::getTreeType(const string& name, const string& color) {
  if (m_treeTypes.find(name) == m_treeTypes.end()) {
    m_treeTypes[name] = new TreeType(name, color);
  }
  return m_treeTypes[name];
};
