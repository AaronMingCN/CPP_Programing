class A {
	public:
		int i;
	protected:
		void f1();
		int j;
	private:
		int k;
};

class B: public A {
	public:
		void f2();
	protected:
		void f3();
	private:
		int m;
};

class C: protected B {
	public:
		void f4();
	private:
		int n;
};
