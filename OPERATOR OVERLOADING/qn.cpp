#include<iostream>
#include<vector>
using namespace std;

class A {
   protected:
   int a, b;

   public: 
   A(int a=0, int b=1) : a(a), b(b) {}
};

class B : public A {
   vector<int> sequence;

   public:
   B(int a=0, int b=1) : A(a, b) {}

   void fibo(int user_N, int limit) {
      sequence.push_back(a);
      sequence.push_back(b);

      int c;
      for(int i = 2; i < user_N; i++) {
         c = a + b;
         if(c > limit) break; // Stop if the value exceeds the limit
         sequence.push_back(c);
         a = b;
         b = c;
      }
      
      for(int num : sequence) {
         cout << num << " ";
      }
      cout << endl;
   }

   void printByIndex(int index) {
      if(index < sequence.size()) {
         cout << "Fibonacci number at index " << index << " is: " << sequence[index] << endl;
      } else {
         cout << "Invalid index." << endl;
      }
   }
};

int main() {
   int user_N, limit, index;
   
   cout << "Enter the Nth term: ";
   cin >> user_N;

   cout << "Enter the limit (number where the sequence should stop): ";
   cin >> limit;

   B obj;
   obj.fibo(user_N, limit);

   cout << "Enter the index to retrieve the Fibonacci number: ";
   cin >> index;

   obj.printByIndex(index);

   return 0;
}
