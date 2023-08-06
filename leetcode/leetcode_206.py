class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional
        # Base case: If the head is None or the list has only one node
        # it is already reversed, so we simply return the head.
        if not head or not head.next:
            return head
        
        # Recursive case:
        # Reverse the rest of the list from head.next onwards and get the new head (newHead) of the reversed list.
        newHead = self.reverseList(head.next)
        
        # Now, the next node (head.next) in the original list should point back to the head node.
        head.next.next = head
        
        # Finally, we make the head node the last node in the reversed list by setting its next pointer to None.
        head.next = None
        
        # Return the new head of the reversed list.
        return newHead

# Create the linked list: 1 -> 2 -> 3 -> None
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)

# Create an instance of the Solution class
sol = Solution()

# Call the reverseList function and get the new head of the reversed list
reversed_head = sol.reverseList(head)