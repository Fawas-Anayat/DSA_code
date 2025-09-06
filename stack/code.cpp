//----------program 1----------
//the basic implementation of the stack using array
/*#include <iostream>
#define MAX 50
using namespace std;
int arr[MAX];
int top=-1;
void push(int x)
{
    if (MAX-1==top)
    {
        cout<<"stack overflow"<<endl;
        return;
    }
    arr[++top]=x;
}
void pop()
{
    if (top==-1)
    {
        cout<<"stack underflow"<<endl;
        return;
    }
    top--;
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    for(int x=0;x<=top;x++)
    {
        cout<<arr[x]<<endl;
    }
}*/
//---------------------------------------------------------------------------

//------------------------------program 2----------------------------------
/*check whether a given string is palindrome or not
#include <iostream>
#define MAX 100
using namespace std;

char arr[MAX];
int top = -1;

// Push one character into stack
void push(char c) {
    if (top == MAX - 1) {
        cout << "Stack overflow!" << endl;
        return;
    }
    arr[++top] = c;
}

// Pop one character from stack
char pop() {
    if (top == -1) {
        cout << "Stack underflow!" << endl;
        return '\0'; // return null character
    }
    return arr[top--];
}

// Function to check palindrome
bool isPalindrome(string st) {
    // Push all characters into stack
    for (int i = 0; i < st.length(); i++) {
        push(st[i]);
    }

    // Compare string with stack (reverse order)
    for (int i = 0; i < st.length(); i++) {
        if (st[i] != pop()) {
            return false; // mismatch → not palindrome
        }
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str))
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is NOT a Palindrome." << endl;

    return 0;
}
*/

//-------------------------------------------------------------------------
//------------------------program 3----------------------------------------
//WAP to reverse a number using the stack
#include <iostream>
#define MAX 50
using namespace std;

int arr[MAX];
int top = -1;

// Push into stack
void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!" << endl;
        return;
    }
    arr[++top] = x;
}

// Pop from stack
int pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    return arr[top--];
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Push digits
    int temp = num;
    while (temp > 0) {
        push(temp % 10);  // push last digit
        temp /= 10;
    }

    // Pop digits → correctly form reversed number
    int reversed = 0;
    int multiplier = 1;
    while (top != -1) {
        reversed += pop() * multiplier;
        multiplier *= 10;
    }

    cout << "Original Number: " << num << endl;
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
