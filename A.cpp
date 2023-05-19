class A{
	public:
		template<typename T>
		A(T&& t)
		:b_(std::move(t))
		{}
	private:
		B b_;


};
template<typename T>
class A{
	public:
		A(T&& t)
		:b_(std::forward<T>(t))
		{}
	private:
		B b_;
};
class A{
        public:
                template<typename T>
                A(T&& t)
                :b_(std::forward<T>(t))
		,c_(std::forward<T>(t))
                {}
        private:
                B b_;
		C c_;


};
class A{
        public:
                template<typename T2, typename T2>
                A(T1&& t1, T2&& t2)
                :b_(std::forward<T1>(t1))
		,c_(std::foeward<T2>(t2))
                {}
        private:
	B b_;
	C c_;


};

