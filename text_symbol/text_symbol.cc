void GlobalFunction(){
    return;
}
static void StaticFunction(){
    return;
}

class SomeClass
{
public:
    void MemberFunction();
    static void StaticFunction();
};

void SomeClass::MemberFunction(){
    return;
}
void SomeClass::StaticFunction(){
    return;
}
namespace {
    void AnonymousFunction(){
        return;
    }
}
void Use(){
    StaticFunction();
    AnonymousFunction();
}


