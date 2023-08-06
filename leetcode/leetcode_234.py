class Solution:
  def isPalindrome(self,head:Optional[Listnode]) -> bool:
    fast = head
    slow = head
    
    # find middle
    while fast and fast.next:
      fast = fast.next.next
      slow = slow.next 
    
    # reverse second half
    prev = None
    while slow:
      # Store next
      tmp = slow.next
      # Reverse current node's pointer
      slow.next = prev
      # Move pointers one position ahead.
      prev = slow 
      slow = tmp 
      
      # check palindrome
      left, right = head, prev
      while right:
        if left.val != right.val:
          return False
        left = left.next
        right = right.next
      return True
        
    #==========================================
    # nums = []
    
    # while head:
    #   nums.append(head.val)
    #   head = head.next
      
    # l, r = 0,len(nums) - 1
    # while l <= r:
    #   if nums[l] != nums[r]:
    #     return False
    #   l += 1
    #   r -= 1
    # return True
    