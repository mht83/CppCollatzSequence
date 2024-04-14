//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>

int collatz_len(long long int a) {
    int counter = 0;
    while (1) {
        if (a == 1) { break; }
        (a % 2 == 0) ? a /= 2 : a = 3 * a + 1;
        counter++;
        
    }
    return counter;
}

int main()
{
    long long int num = 1000000;
    int max_seq_len = 1,seq_num = 1;
    for(int i=2; i<num ; ++i)
    {
        int seq_len = collatz_len(i);
        if (seq_len > max_seq_len) {
            max_seq_len = seq_len;
            seq_num = i;
        }
    }
    std::cout << "max len is: "<< max_seq_len<<" and its from the number :"<< seq_num;
    return 0;
}

