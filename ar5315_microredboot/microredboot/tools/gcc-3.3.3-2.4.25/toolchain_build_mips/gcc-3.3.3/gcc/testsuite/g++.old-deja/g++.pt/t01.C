// Build don't link: 

template <class A> class B { public: A a; };
static B<int> b_int;

int foo () { return b_int.a; }
