__attribute__((import_module("my_module"), import_name("my_function")))
extern "C" void my_func(const char* message);


extern "C" int sum(int op1, int op2)
{
  my_func("abcd");
  return op1 + op2;
}
