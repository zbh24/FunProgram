class A<T1,T2> {
	T1 first;
	T2 Second;
	A(T1 first,T2 second) {
		this.first = first;
		this.second = second;
	}
	
	public static void main(String []args) {
		A<int,char> a = new A<int,char>; 
	}
}