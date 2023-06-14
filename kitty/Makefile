all:
	g++ -fpic -c kitty.cpp
	./swig -c++ -python kitty.i
	g++ -I/usr/include/python3.11 -c kitty_wrap.cxx -fpic
	g++ -fPIC -shared *.o -o _kitty.so
	./py.py
