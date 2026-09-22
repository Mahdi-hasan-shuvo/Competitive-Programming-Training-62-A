#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, pair<string, double> > st;
    st.first=30;
    st.second.first ="MAHDI";
    st.second.second=3.50;
    cout << "ID: " << st.first << "\n";
    cout << "Name: " << st.second.first << "\n";
    cout << "CGPA: " << st.second.second << "\n";
    
    return 0;
}
