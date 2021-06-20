def reverseBetween(head: ListNode, m: int, n: int) -> ListNode:
    
    # Comparing with Problem 206: just need to find the start position 
    # then reverse (same as 206)
    
    dummy = ListNode(0)
    dummy.next = head
    
    pre = dummy
    cur = dummy.next
    
    # find the position
    for i in range(1,m):
        cur = cur.next
        pre = pre.next
    
    
    # reverse
    for i in range(n-m):
        temp = cur.next
        cur.next = temp.next
        temp.next  = pre.next
        pre.next = temp
    
    return dummy.next