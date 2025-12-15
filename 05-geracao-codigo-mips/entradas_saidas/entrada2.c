int f() {
	return 10;
}

int main() {
	int a, b, z;
	b = f();
	a = 33 - b;
	if(a < b)
		z = 5;
	else
		z = 0;
	endif
}
