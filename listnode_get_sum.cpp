#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

struct ListNode{
    int val; //节点值
    ListNode* next; //指向下一个节点的指针

    //构造函数
    ListNode(int value):val(value),next(nullptr){}
};
int getSum(ListNode* head){
    int ans = 0;
    while(head != nullptr){
        ans += head->val;
        head = head->next;
    }
}

int main(){
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);

    node1->next = node2;
    node2->next = node3;

    int sum = getSum(node1);
    cout << "sum of the linked list:" << sum << endl;

    delete node1;
    delete node2;
    delete node3;
    return 0;
}
