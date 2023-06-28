#include <iostream>
  template<class T> class shared_ptr {
  public:
    //using element_type = remove_extent_t<T>;
    //using weak_type    = weak_ptr<T>;
 
    // constructors
    constexpr shared_ptr() noexcept{};
    constexpr shared_ptr(nullptr_t) noexcept : shared_ptr() { }
    template<class Y>
      explicit shared_ptr(Y* p);
    template<class Y, class D>
      shared_ptr(Y* p, D d);
    template<class Y, class D, class A>
      shared_ptr(Y* p, D d, A a);
    template<class D>
      shared_ptr(nullptr_t p, D d);
    template<class D, class A>
      shared_ptr(nullptr_t p, D d, A a);
    //template<class Y>
      //shared_ptr(const shared_ptr<Y>& r, element_type* p) noexcept;
    //template<class Y>
      //shared_ptr(shared_ptr<Y>&& r, element_type* p) noexcept;
    shared_ptr(const shared_ptr& r) noexcept;
    template<class Y>
      shared_ptr(const shared_ptr<Y>& r) noexcept;
    shared_ptr(shared_ptr&& r) noexcept;
    template<class Y>
      shared_ptr(shared_ptr<Y>&& r) noexcept;
    //template<class Y>
      //explicit shared_ptr(const weak_ptr<Y>& r);
    //template<class Y, class D>
      //shared_ptr(unique_ptr<Y, D>&& r);
 
    // destructor
    ~shared_ptr(){};
 
    // assignment
    shared_ptr& operator=(const shared_ptr& r) noexcept;
    template<class Y>
      shared_ptr& operator=(const shared_ptr<Y>& r) noexcept;
    shared_ptr& operator=(shared_ptr&& r) noexcept;
    template<class Y>
      shared_ptr& operator=(shared_ptr<Y>&& r) noexcept;
    //template<class Y, class D>
      //shared_ptr& operator=(unique_ptr<Y, D>&& r);
 
    // modifiers
    void swap(shared_ptr& r) noexcept;
    void reset() noexcept;
    template<class Y>
      void reset(Y* p);
    template<class Y, class D>
      void reset(Y* p, D d);
    template<class Y, class D, class A>
      void reset(Y* p, D d, A a);
 
    // observers
    //element_type* get() const noexcept;
    T& operator*() const noexcept;
    T* operator->() const noexcept;
    //element_type& operator[](ptrdiff_t i) const;
    long use_count() const noexcept;
    explicit operator bool() const noexcept;
    //template<class U>
      //bool owner_before(const shared_ptr<U>& b) const noexcept;
    //template<class U>
      //bool owner_before(const weak_ptr<U>& b) const noexcept;
  };
  template<class T, class... Args>
    shared_ptr<T> make_shared(Args&&... args);                                  // T is not array
  template<class T, class A, class... Args>
    shared_ptr<T> allocate_shared(const A& a, Args&&... args);                  // T is not array
 
  template<class T>
    shared_ptr<T> make_shared(size_t N);                                        // T is U[]
  template<class T, class A>
    shared_ptr<T> allocate_shared(const A& a, size_t N);                        // T is U[]
 
  template<class T>
    shared_ptr<T> make_shared();                                                // T is U[N]
 
using namespace std;
class A{
	public:
	A(){cout<<"Constructor"<<endl;}
	~A(){cout<<"Destructor"<<endl;}
};


int main(){


        shared_ptr<A>shPtr1;// = make_shared<A>();
        //std::cout << shPtr1.use_count() << std::endl;
        //shared_ptr<A>shPtr2 = shPtr1;
        //std::cout << shPtr1.use_count() << std::endl;
        //std::cout << shPtr1.use_count() << std::endl;

return 0;
}

