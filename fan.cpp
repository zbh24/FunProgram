
//模板，泛型
//STL就是标准模板库
//STL模板的使用#include<vector> #include<algorithm>
//c++的模板是用泛型写的，这样什么类型都能使用

template <typename X>	//或者这样声明template <class X>
X f(X a) {		//X ->X
	return a;
}

int main() {

	int x = f<int> (100);
	double y = f<double> (3.14);
	cout<<x<<y<<endl;
	return 0;

}
//////////////////////////////
template <class T>
class Array{
	
public:
	Array(int);
}

template <class T>
Array<T>::Array(int a) {
	
}

int main() {

	Array<int> a(100);
}
