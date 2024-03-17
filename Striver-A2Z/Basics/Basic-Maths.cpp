// 1- REVERSE A NUMBER

// Problem Link: https://www.codingninjas.com/studio/problems/reverse-bits_2181102

long reverseBits(long n){
    // 'ans' will store the value of reversed bits representation.
    long ans = 0;

    for(int i=0;i<32;i++){
        // 'k' is the i'th bit.
        int k = n & (1<<i);

        // If the i'th bit from right is Set.
        if (k>0){
            // Increase the value of ans by value of i'th bit from left.  
            ans += (long)1<<(31-i);
        }
    }  
    return ans;
}

