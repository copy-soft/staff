#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <cstring>

std::vector <Window> win;

void get_win (Window w);

Window rwin;
Window pwin;
Display *disp;

int main(void) {
    disp = XOpenDisplay(NULL); // Устанавливаем связь с X-сервером
    Window w = DefaultRootWindow(disp); // Получаем "самое главное" окно

    get_win (w);

    for (int i = 0; i<win.size(); ++i) {
        XTextProperty name;
        wchar_t **names;
        int count;
        if (XGetWMName(disp, win [i], &name)) {
            if (XwcTextPropertyToTextList (disp, &name,&names,&count)>=0) {
                for (int i2 = 0; i2<count; ++i2) {
                    //std::wcout<<names[i2]<<std::endl;
		    char output[256];
//const wchar_t* wc = L"Hello World" ;
sprintf(output, "%ws", names[i2] ); // did not work for me (Windows, C++ Builder)
sprintf(output, "%ls", names[i2] ); // works
char result[100];   // array to hold the result.

strcpy(result,"transset-df -n '"); // copy string one into the result.
strcat(result,output);
strcat(result,"' .75");

std::cout<<result<<std::endl;
		system(result);
                }

            }
        }
        //XFree(&name); // TODO - Написать правильное освобождение памяти в соответствии с документацией
    }

    if (disp)
        XCloseDisplay(disp);
}

void get_win (Window w) {
    Window *cwins;
    unsigned int count;
    XQueryTree(disp, w, &rwin, &pwin, &cwins, &count);

    win.push_back(w);

    for (unsigned int i = 0; i<count; ++i) {
        get_win (cwins [i]);
    }

    //XFree (&rwin);
    //XFree (&pwin);
    //XFree (&cwins);
    //XFree (&count);
}
