#ifndef BEVERAGE_MAKER_HPP_INCLUDED
#define BEVERAGE_MAKER_HPP_INCLUDED

class BeverageMaker {
public:
  void makeBeverage();
  //  Abstract methods to be implemented by subclasses
  virtual void brew()          = 0;
  virtual void addCondiments() = 0;

protected:
  // Common methods
  void boilWater();
  void pourInCup();
};

#endif  // BEVERAGE_MAKER_HPP_INCLUDED
