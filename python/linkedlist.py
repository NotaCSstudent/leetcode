class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
def Insert_Node(root, data):
    if(root == None):
        root = Node(data)
        return root
    root.next = Insert_Node(root.next,data)
    return root


def Remove_Node(root):
    if(root.next == None)
head = None
head = Insert_Node(head,1)
head = Insert_Node(head,2)
head = Insert_Node(head,3)
head = Insert_Node(head,4)


temp = head

while(temp != None):
    print(temp.data)
    temp = temp.next

Remove_Node(head)


temp = head

while(temp != None):
    print(temp.data)
    temp = temp.next