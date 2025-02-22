#include <cstdint>


template <class T, class Tag = decltype([] {})>
struct strong_type_alias { /**/};


namespace private_ { struct my_uint64_tag {}; }

using my_strong_type = strong_type_alias<uint64_t, private_::my_uint64_tag>;

int main(){



return 0;

}
