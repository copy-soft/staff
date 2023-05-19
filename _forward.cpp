#include <iostream>

using namespace std;

template<class T, T v>
struct _integral_constant
{
    static constexpr T value = v;
    using value_type = T;
    using type = _integral_constant; // using injected-class-name
    constexpr operator value_type() const noexcept { return value; }
    constexpr value_type operator()() const noexcept { return value; } // since c++14
};

  using _true_type =  _integral_constant<bool, true>;
  using _false_type = _integral_constant<bool, false>;


template< class T > struct _remove_reference      { typedef T type; };
template< class T > struct _remove_reference<T&>  { typedef T type; };
template< class T > struct _remove_reference<T&&> { typedef T type; };
template< class T >
using _remove_reference_t = typename _remove_reference<T>::type;
template<class T> struct _is_lvalue_reference     : _false_type {};
template<class T> struct _is_lvalue_reference<T&> : _true_type {};
template< class T >
inline constexpr bool _is_lvalue_reference_v = _is_lvalue_reference<T>::value;
template<typename T>
void bar(const T& v) { cout << "by const ref" << endl; }

template<typename T>
void bar(T& v) { cout << "by lvalue ref" << endl; }

template<typename T>
void bar(T&& v) { cout << "by rvalue ref" << endl; }

// FUNCTION TEMPLATE forward
template <class _Ty>
[[nodiscard]] constexpr _Ty&& _forward(
    _remove_reference_t<_Ty>& _Arg) noexcept
{
    cout << "forward an lvalue as either an lvalue or an rvalue" << endl;
    return static_cast<_Ty&&>(_Arg);
}

template <class _Ty>
[[nodiscard]] constexpr _Ty&& _forward(
    _remove_reference_t<_Ty>&& _Arg) noexcept
{
    static_assert(!_is_lvalue_reference_v<_Ty>, "bad forward call");
    cout << "forward an rvalue as an rvalue" << endl;
    return static_cast<_Ty&&>(_Arg);
}

// FUNCTION TEMPLATE move
template <class _Ty>
[[nodiscard]] constexpr _remove_reference_t<_Ty>&& _move(_Ty&& _Arg) noexcept
{
    cout << "forward _Arg as movable" << endl;
    return static_cast<_remove_reference_t<_Ty>&&>(_Arg);
}

template<typename T>
void foo(T&& p)
{
    bar(p);
    bar(_move(p));
    bar(_forward<char>(p));
}

int main()
{
    int i{0};
    foo(i); // lvalue: T - int&, p - int&
    foo(0); // rvalue: T - int, p - int&&
    typedef _integral_constant<int, 2> two_t;
    typedef _integral_constant<int, 4> four_t;
    	 
    static_assert(not std::is_same<two_t, four_t>::value, "two_t and four_t are equal!");
	
}
