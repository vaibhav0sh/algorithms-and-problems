// 1- PRINT 1 TO N WITHOUT LOOP
void recursiveFunction(int x, vector<int>& ans) {
    if(x == 0) {
        return;
    }
    
    // Call recursive function
    recursiveFunction(x - 1, ans);
    
    // Insert element in the array
    ans.push_back(x);
}

vector<int> printNos(int x) {
    // Declaring empty integer array
    vector<int> ans;
    
    // Calling recursive function
    recursiveFunction(x, ans);
    
    return ans;
}

// 2- return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’

vector<long long> factorialNumbers(long long n) {
    vector<long long> ans;
     long long i=1;
    long long fact = 1;
    while(fact<=n){
        ans.push_back(fact);
        fact*=(i+1);
        i++;
    }
    return ans;
}
