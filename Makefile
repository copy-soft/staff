all:
	#g++ set1.cpp;./a.out
	#g++ set2.cpp;./a.out
	#g++ set3.cpp;./a.out
	g++ factory.cpp -fpermissive
	#g++ point.cpp -g
	#g++ job.cpp
	#g++ der.cpp -g
	#output: 
	./a.out

all1:
	g++ inheritancefromvector.cpp
	./a.out
