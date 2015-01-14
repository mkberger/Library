#include "OtherCppClass.h"

using namespace std;

void OtherCppClass::func() {
	cout << "An instance of OtherCppClass is created in CppClass, its values are populated, & its methods are called\n";
	return;
}

void OtherCppClass::setElement(int s) {
	this->element = s;
	return;
}
