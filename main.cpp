#include <bits/stdc++.h>
using namespace std;

void println(auto a){
    std::cout<<a<<std::endl;
}

void print(auto a){
    std::cout<<a;
}

int sum(int a, int b){
    return a+b;
}
string result(string foo, string bar, function<string(string, string)> Func){
    auto result = Func(foo, bar);
    return "<h1>"+foo+"</h1><br>h1>"+bar+"</h1><br>"+result;
}


string marinafunc(string foo, string bar ){
    return "Σ="+std::to_string(std::stoi( foo )+std::stoi(bar));
}

string guest(string foo, string bar ){
    return "";
}

int main()
{
    println(sum(3,5));
    print("there works");
    string foo="4";
    string bar ="8";
    println(result(foo,bar, marinafunc));
    println(result(foo,bar, guest));
}

