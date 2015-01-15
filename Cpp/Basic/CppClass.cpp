#include "CppClass.h"

using namespace std;
class OtherCppClass;

int main(int argc, char** argv) {
  OtherCppClass instance;
  instance.attribute = "Six";
  instance.setElement(6);
  instance.func();
  if(argc == 0){
    cout << argv[0];
  }
  return 0;
}
