template <class T>
class i_am_class{
public:
enum class ee{
	hello
};
void f(){

using ee = i_am_class<T>::ee;
}

};

void f(){
i_am_class<int>().f();

}

int main(){


}
