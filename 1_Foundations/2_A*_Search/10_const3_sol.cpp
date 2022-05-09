int main()
{
    int i = 2;  // "i can be evaluated at compile time."
    i++;                  // "But changing a constexpr variable triggers an error."
}

//   OUTPUT  : No ERROR
