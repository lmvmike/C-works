//
//
#include <string>
#include <cmath>
using namespace std;
class DollarAmount {
  public:
    //initialize amount from an int64_t value
    explicit DollarAmount(int64_t value) : amount{value} { }

    //add right's dollar amount to this object's amount
    void add(DollarAmount right) {
    //can access private data of other objects of the same class
    amount += right.amount;
     }

    //subtract right's amount from this object amount
     void subtract(DollarAmount right){
      //can access private data of other objects of the same class
      amount -= right.amount;
     }

    //uses integer arithmetic to calculate interest amount,
    //then calls add with the interest amount
    void addInterest(int rate, int divisor){
    //create DollarAmount representing the interest
     DollarAmount interest{
        (amount * rate + divisor / 2 ) / divisor
     };

    add(interest);
  }

  //return a strin reprecentation of a DollarAmnount object
 string toString() const{
    string dollars{to_string(amount / 100)};// uses division and reminder operator to get the amount's dollar portion respectiovely
    string cents{to_string(abs(amount % 100))};// uses division and reminder operator to get the amount's cents portion respectiovely
    return dollars + "." + (cents.size() == 1 ? "0" : "") + cents; // abs is a operation for absolute value using cmath library
    }
  private:
  int64_t amount{0};// dollar amount in pennies int64 works for big data aprox quatrillion. it used to bee long long data type
};