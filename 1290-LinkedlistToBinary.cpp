#include <iostream>                       // Includes the library needed for cout
using namespace std;                      // Allows us to write cout instead of std::cout

struct ListNode {                          // Defines the structure of one linked list node
    int val;                               // Stores the node's value: 0 or 1
    ListNode* next;                        // Stores the address of the next node
};                                         // Ends the ListNode structure

class Solution {                           // Defines a class named Solution
public:                                    // Makes the function accessible from outside the class

    int getDecimalvalue(ListNode* head) {   // Receives the address of the first node and returns an integer

        int result = 0;                    // Initializes the decimal result to 0
        ListNode* temp = head;             // Copies head's address into temp; traversal starts at the first node

        while (temp != nullptr) {          // Repeats while temp points to a valid node

            result = result * 2 + temp->val; // Doubles the previous result and adds the current binary digit
            temp = temp->next;             // Copies the next node's address into temp, moving forward

        }                                  // Ends the loop when temp becomes nullptr

        return result;                     // Returns the final decimal number to the caller
    }                                      // Ends the getDecimalvalue function

};                                         // Ends the Solution class; semicolon is required

int main() {                               // Program execution starts here

    ListNode third = {1, nullptr};         // Creates third node: val = 1, next = nullptr
    ListNode second = {0, &third};         // Creates second node: val = 0, next stores third's address
    ListNode first = {1, &second};         // Creates first node: val = 1, next stores second's address

    Solution solution;                     // Creates an object named solution from the Solution class
    cout << solution.getDecimalvalue(&first); // Passes first node's address, calls the function, and prints its return value

    return 0;                              // Ends the program successfully
}                                          // Ends the main function





// #include<iostream>

// using namespace std;

// struct node{
//     int data;
//     node* next;
// };

// int main(){
    
//     node* head=new node{10,nullptr};
//     head->next = new node{20,nullptr};
//     head->next->next = new node{30,nullptr};
//     node* temp=head;

//     while(temp!=nullptr){
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }

//     delete head;
//     delete temp->next;
//     delete temp->next->next;

//     return 0;

// }