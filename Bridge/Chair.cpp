#include <iostream>
#include "Chair.hpp"

using namespace std;

Chair::Chair(MaterialInterface* material) : Furniture(material) {
};

void Chair::produce() const {
  cout << "Creating chair... ";
  m_material->applyMaterial();
};
