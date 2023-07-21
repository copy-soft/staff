all:
	#g++ set1.cpp;./a.out
	#g++ set2.cpp;./a.out
	#g++ set3.cpp;./a.out
	#g++ factory.cpp -fpermissive -o fack
	#g++ factory1.cpp -o fack1
	#g++ point.cpp -g
	#g++ job.cpp
	#g++ der.cpp -g
	g++ sin.cpp -std=c++20; ./a.out

all1:
	g++ inheritancefromvector.cpp
	./a.out
