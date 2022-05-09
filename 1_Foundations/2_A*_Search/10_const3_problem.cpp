int main()
{
    constexpr int i = 2;  // "i can be evaluated at compile time."
    i++;                  // "But changing a constexpr variable triggers an error."
}


/**   OUTPUT  : ERROR

 In function ‘int main()’:
 error: increment of read-only variable ‘i’
      i++;   
       ^~
 */
