class Bank {
private:
    vector<long long> balances;
    int n;
    
    bool isValidAccount(int account) const {
        return account >= 1 && account <= n;
    }
    
public:
    Bank(vector<long long>& balance) {
        balances = balance;
        n = balances.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        if (!isValidAccount(account1) || !isValidAccount(account2))
            return false;
        if (balances[account1 - 1] < money)
            return false;
        balances[account1 - 1] -= money;
        balances[account2 - 1] += money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if (!isValidAccount(account))
            return false;
        balances[account - 1] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if (!isValidAccount(account))
            return false;
        if (balances[account - 1] < money)
            return false;
        balances[account - 1] -= money;
        return true;
    }
};
