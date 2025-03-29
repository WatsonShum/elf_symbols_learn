
extern int ExternalValue; // 这是一个外部符号
int UninitializedValue; // 这是一个未初始化的全局变量
void FunctionDeclaration();
void FunctionDeclaration();
extern void FunctionDeclaration();
extern void ExternFunctionDeclaration();
int main()
{
    ExternalValue = 100;
    FunctionDeclaration();
    ExternFunctionDeclaration();
    return 0;
}