#include <iostream>
#include <vector>
//#include <chrono>
#include "logdur.h"

using namespace std;


template <typename T>
class Vector {
public:
    Vector(size_t size, T value)
        : data_(size, value) {
    }
    Vector(const Vector& rhs) {
        cout << "copy constructor was called\n";
    }
    Vector(Vector&& rhs) noexcept {
        cout << "move constructor was called\n";
    }
    size_t size() {
        return data_.size();
    }

private:
    vector<T> data_;
};

int main() {
    Vector<uint8_t> big_vector(1e9, 0);

    {
        LogDuration ld("vector copy");
        Vector<uint8_t> r(move(big_vector));
    }
    cout << "size of big_vector is " <<  big_vector.size() << '\n';
}

