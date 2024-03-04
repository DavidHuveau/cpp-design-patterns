#include "TreeType.hpp"

#include <iostream>

using namespace std;

TreeType::TreeType(const std::string& name, const std::string& color) : m_name(name), m_color(color){};

void TreeType::draw(const TreePosition& position) {
  cout << "Drawing " << m_color << " " << m_name << " tree at position (" << position.x << ", " << position.y << ")" << endl;
};
