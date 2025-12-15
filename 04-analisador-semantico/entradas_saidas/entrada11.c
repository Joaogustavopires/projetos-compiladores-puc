int func(char b) {
	if(b <= 3 || !1)
		b = 'c';
	else
		b = 'd';
    endif
}

int main() {
	int c = 1;
	func();
	return 0;
}