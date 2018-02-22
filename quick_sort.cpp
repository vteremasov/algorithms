#include "iostream"
#include <vector>
using namespace std;

vector<int> quick_sort(vector<int> list) {
  if(list.size() < 2) return list;

  int pivot = list[0];
  vector<int> less;
  vector<int> bigger;

  for (int i = 1; i < list.size(); i++) {
    if(list[i] > pivot) {
      bigger.push_back(list[i]);
    } else {
      less.push_back(list[i]);
    }
  }
  bigger = qSort(bigger);
  less = qSort(less);
  less.push_back(pivot);
  less.insert(less.end(), bigger.begin(), bigger.end());

  return less;
}

int main () {
  vector<int> list;
  int input;

  cout << "Inter a list to sort" << endl;
  while (cin >> input) {
    list.push_back(input);
  }

  list = quick_sort(list);

  for (int i = 0; i < list.size(); i++) {
    cout << list[i] << " ";
  }

  return 0;
}
