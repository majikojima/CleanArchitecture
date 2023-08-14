#include <iostream>
#include <string>

// interface
class Formatter{
public:
    virtual std::string format() = 0;
};

class Message{
private:
    Formatter* formatter;

public:
    Message(Formatter* fmt) : formatter(fmt) {}

    void send(){
        std::cout << formatter->format() << std::endl;
    }
};

class HellWorldFormatter : public Formatter{
public:
    std::string format() override{
        return "Hell World";
    }
};

class GoodMorningFormatter : public Formatter{
public:
    std::string format() override{
        return "Good Morning";
    }
};

int main(){
    Message message1(new HellWorldFormatter());
    message1.send();

    Message message2(new GoodMorningFormatter());
    message2.send();

    return 0;
}