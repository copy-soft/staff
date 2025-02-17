default: #imgui/examples/example_sdl2_opengl3
	g++ main.cpp ../../a.out -I../../ -I../../backends/ -I/opt/include/SDL2/ -lSDL2 -L/opt/lib ../../backends/imgui_impl_sdl2.cpp ../../backends/imgui_impl_opengl3.cpp -lGL

