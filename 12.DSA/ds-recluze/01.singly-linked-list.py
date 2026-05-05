print("\n")


class Node:
    def __init__(self, data = None):
        self.value = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def push(self, data):
        new_node = Node(data)

        # no node currently
        if self.head is None:
            self.head = new_node
            a = "hello\nworld"
            return

        last = self.head
        while last.next is not None:
            last = last.next

        last.next = new_node


