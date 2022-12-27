#include "password.h"
#include <iostream>

using namespace std;

pair<BigInt, BigInt> pub_key{
        "10001",
        "2C7421C67F2697D51E6B3472B2B452D4D16AF8E832DA03531459163C3EED7D9B07276B76995CAEE1B13CDFEC4E9A1C1DCF9EC91CFBAB663583280967B916EDF2BD67E8422187103AC371AB3A85C56C9EE5DE828163BC579A06895FB448EDB5BFC4EA5F03B310B8DD8482C32679D3BDD57F53B2F5678607FD4E335E036D1D2125"
};
pair<BigInt, BigInt> pri_key{
        "1A29A3333AE450D9FA542803154FF1AC15307B1BD5C9DFC906A1C3E76335CD05EFB8F093558169DFA4BB6A229EC42EA610EAA7FCA9D5DF8AC10D5033BE8853345496CF9B36A0975F4F857CA6E3F98E300308AD1D66637F725FD03988D310146AB8AF374E367DD7BD9E3AC7BD42E35530AD248695906F21E8CAC6B60BC6B5C1A1",
        "2C7421C67F2697D51E6B3472B2B452D4D16AF8E832DA03531459163C3EED7D9B07276B76995CAEE1B13CDFEC4E9A1C1DCF9EC91CFBAB663583280967B916EDF2BD67E8422187103AC371AB3A85C56C9EE5DE828163BC579A06895FB448EDB5BFC4EA5F03B310B8DD8482C32679D3BDD57F53B2F5678607FD4E335E036D1D2125"
};

int main() {
    BigInt txt = string("123456789");

    BigInt c = encrypt_rsa(txt, pub_key);
    cout << c << endl;

    BigInt m = decrypt_rsa(c, pri_key);
    cout << m << endl;

    system("pause");
    return 0;
}
