#include <bits/stdc++.h>
using namespace std;

int main() {
    string part1;
    string part2="Hasan";
    cout << "Input Frist Name : " ;
    cin >> part1;
    string s = part1 + " " + part2; 
    cout << "You Full Name : " << s << "\n";
  cout << string(50, '-') << "\n";
     for(int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
  } 
    cout << "\nThe Sort Na me : ";
    sort(s.begin(), s.end());
    cout << s << "\n"; 
    return 0;
}
