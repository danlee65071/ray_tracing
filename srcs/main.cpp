#include "RayTracing.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
        return -1;
    Parser p(argv[1]);

    std::vector<int> c = {1, 2, 3, 4, 5, 6, 7};
    int x = 5;
    c.erase(std::remove_if(c.begin(), c.end(), [x](int n) { return n < x; }), c.end());
 
    std::cout << "c: ";
    std::for_each(c.begin(), c.end(), [](int i){ std::cout << i << ' '; });
    std::cout << '\n';
 
    // the type of a closure cannot be named, but can be inferred with auto
    // since C++14, lambda could own default arguments
    auto func1 = [](int i = 6) { return i + 4; };
    std::cout << "func1: " << func1() << '\n';
 
    // like all callable objects, closures can be captured in std::function
    // (this may incur unnecessary overhead)
    std::function<int(int)> func2 = [](int i) { return i + 4; };
    std::cout << "func2: " << func2(6) << '\n';
 
    std::cout << "Emulate `recursive lambda` calls:\nFibonacci numbers: ";
    auto nth_fibonacci = [](int n)
    {
        std::function<int(int,int,int)> fib = [&](int a, int b, int n)
        {
            return n ? fib(a + b, a, n - 1) : b;
        };
        return fib(1, 0, n);
    };
    for (int i{1}; i != 9; ++i) { std::cout << nth_fibonacci(i) << ", "; }
 
    std::cout << "\nAlternative approach to lambda recursion:\nFibonacci numbers: ";
    auto nth_fibonacci2 = [](int n)
    {
        auto fib = [](auto self, int a, int b, int n) -> int
        {
            return n ? self(self, a + b, a, n - 1) : b;
        };
        return fib(fib, 1, 0, n);
    };
    for (int i{1}; i != 9; ++i) { std::cout << nth_fibonacci2(i) << ", "; }
}