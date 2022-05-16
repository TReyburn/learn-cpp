#include "iostream"

using namespace std;

int main() {
  int roomWidth{ 0 };
  cout << "Enter the width of the room: ";
  cin >> roomWidth;

  int roomLength{ 0 };
  cout << "Enter the length of the room: ";
  cin >> roomLength;

  cout << "Square footage: " << (roomWidth * roomLength);

  return 0;
}