#include <iostream>
struct DC {
  explicit DC() noexcept(false) = default;
};
struct CA {
  CA& operator=(const CA&) noexcept(false) = default;
};
CA& (CA::*mfpa)(const CA&) noexcept = &CA::operator=;
int main(){


	static_assert(std::is_trivially_default_constructible_v<DC>);
	static_assert(std::is_nothrow_default_constructible_v<DC>);
	static_assert(!noexcept(CA() = CA()));

	return 0;
}
