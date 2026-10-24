#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *next;
    Node(int x){
        val = x;
        next = nullptr;
    }
};
    Node* deleteduplicate(Node *head){
        Node* curr = head;
        while(curr != nullptr && curr->next != nullptr ){
            if(curr->val == curr->next->val){
                Node* temp = cu
                curr->next = curr->next->next;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
    int main(){
curr- local
curr local
include local
cout local
count snippet
count_if snippet
cout snippet
accumulate snippet
continue keyword