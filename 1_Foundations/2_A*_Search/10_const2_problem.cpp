int main()
{
    const int i = 2; // "I promise not to change this."
    i++;             // "I just broke my promise."
}


/**   OUTPUT  : ERROR

 In function ‘int main()’:
 error: increment of read-only variable ‘i’
    i++;         
     ^~
 */
