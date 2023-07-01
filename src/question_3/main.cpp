#include <assert.h>

void test1(int i){
	i++;
}
void test2(int &i){
	i++;
}

int main(){
	int initial = 0;

	int i1 = initial;
	test1(i1);
	assert(i1 == initial);

	int i2 = initial;
	test2(i2);
	assert(i2 != initial);
}