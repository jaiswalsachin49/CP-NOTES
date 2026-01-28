/*
IT City company developing computer games invented a new way to reward its
employees. After a new game release users start buying it actively, and the
company tracks the number of sales with precision to each transaction. Every
time when the next number of sales is divisible by all numbers from 2 to 10
every developer of this game gets a small bonus.

A game designer Petya knows that the company is just about to release a new game
that was partly developed by him. On the basis of his experience he predicts
that 𝑛 people will buy the game during the first month. Now Petya wants to
determine how many times he will get the bonus. Help him to know it.
 */

/*
We can't check all the numbers from 1 to n because it will take O(n) time ans n
<= 10^18. And condition is that the number should be divisible by all numbers
from 2 to 10.

So, we can use the concept of LCM (Least Common Multiple) to find the LCM of
numbers from 2 to 10 and then find the number of times it can divide n.
*/

#include <iostream>
#include <numeric>

using namespace std;

long long gcd(long long a, long long b) {
  while (b) {
    a %= b;
    swap(a, b);
  }
  return a;
}

int main() {
  long long n;
  cin >> n;

  long long lcm = 2;
  for (int i = 3; i <= 10; i++) {
    lcm = (lcm * i) / gcd(lcm, i);
  }

  cout << n / lcm << endl;
  return 0;
}
