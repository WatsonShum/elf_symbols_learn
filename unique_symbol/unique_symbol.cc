inline int GlobalValue = 1; 
struct SomeClass { 
     static int inline InlineSttaicMethod() { return InlineStaticField; } 
     static inline int InlineStaticField = 2; 
     static int StaticField;
};

int SomeClass::StaticField = 4; // static member initialization

int main() { 
    return GlobalValue + SomeClass::InlineSttaicMethod(); 
}