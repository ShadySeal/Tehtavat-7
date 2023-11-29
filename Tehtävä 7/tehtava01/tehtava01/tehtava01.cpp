#include <iostream>
#include <vector>
#include <string>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(const T& item) {
        elements.push_back(item);
    }

    T pop() {
        T top = elements.back();
        elements.pop_back();
        return top;
    }

    T size() const {
        return elements.size();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    std::cout << "Size of intStack: " << intStack.size() << std::endl;
    std::cout << "Popped element from intStack: " << intStack.pop() << std::endl;
    std::cout << "Size of intStack after pop: " << intStack.size() << std::endl;

    return 0;
}
