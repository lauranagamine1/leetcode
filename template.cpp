#include <bits/stdc++.h>
using namespace std;

int main() {

}

// PRINT CONTAINER USING TEMPLATES
template <typename Container>
void print(const Container& container) {
    auto it = container.begin();
    auto end = container.end();
    while (it != end) {
        cout << *it;
        ++it;
        if (it != end) cout << ", ";
    }
    cout << endl;
}