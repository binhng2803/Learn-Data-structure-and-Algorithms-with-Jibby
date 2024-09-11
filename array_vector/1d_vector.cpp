#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int> v2(4, 10);

    v.pop_back();
    v.push_back(6);

    v2.insert(v2.begin() + 2, 100);

    cout << "===============v===============" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    cout << "===============v2===============" << endl;
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << endl;
    }

    cout << "===============v.size===============" << endl;
    cout << v.size() << endl;

    cout << "===============v.capacity===============" << endl;
    cout << v.capacity() << endl;
    
}

