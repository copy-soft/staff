
#include "dice.hpp"

using namespace dnd;

dice::dice(int sides) {
    nums = sides;
}

int dice::roll() const {
    if (nums > 0) {
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::default_random_engine generator(seed);

        std::uniform_int_distribution<int> distribution(1, nums);

        return distribution(generator);
    } else {
        return nums;
    }
}

bool dice::operator==(const dice &a) const {
    return nums == a.nums;
}

bool dice::operator!=(const dice &a) const {
    return nums != a.nums;
}

dice dnd::d0(0);
dice dnd::d1(1);
dice dnd::d2(2);
dice dnd::d4(4);
dice dnd::d6(6);
dice dnd::d8(8);
dice dnd::d10(10);
dice dnd::d12(12);
dice dnd::d20(20);
dice dnd::d100(100);

dmap dices = {
        {0, dnd::d0},
        {1, dnd::d1},
        {2, dnd::d2},
        {4, dnd::d4},
        {6, dnd::d6},
        {8, dnd::d8},
        {10, dnd::d10},
        {12, dnd::d12},
        {20, dnd::d20},
        {100, dnd::d100}
};
