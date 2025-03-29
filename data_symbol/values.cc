int value = 42;
static int s_value = 42;
int unintializedValue;
static int uninitializedStaticValue;
namespace
{
    int valueInAnonymousNamespace = 42;
}
namespace named
{
    int valueInNamedNamespace = 42;
}
void someFunction()
{
    static int functionStaticValue = 300; // 这也是局部符号
    int functionLocalValue = 300;
}

class MyClass
{
public:
    static int classStaticValue;
};
int MyClass::classStaticValue = 400; 