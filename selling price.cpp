#include <iostream>
using namespace std;

int main() {
  float buying_price, selling_price;

  cout << "Enter the buying price: ";
  cin >> buying_price;

  cout << "Enter the selling price: ";
  cin >> selling_price;

  if (selling_price > buying_price) {
    float profit = selling_price - buying_price;
    cout << "Seller has made a profit of " << profit << endl;
  } else if (selling_price < buying_price) {
    float loss = buying_price - selling_price;
    cout << "Seller has incurred a loss of " << loss << endl;
  } else {
    cout << "Seller has neither made a profit nor incurred a loss." << endl;
  }

  return 0;
}
