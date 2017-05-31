public class Deque{
	Node head;
	Node tail;

	Deque(){
		head = null;
		tail = null;
	}

	public void push_front(int value){
		Node temp = new Node();
		Node cur = new Node();
		temp.value = value;

		if(head == null){
			head = temp;
			tail = temp;
		}

		else{
			cur = head;
			head.prev_node = temp;
			head = head.prev_node;
			head.next_node = cur;
		}
	}

	public void push_back(int value){
		Node temp = new Node();
		Node cur = new Node();
		temp.value = value;

		if(head == null){
			head = temp;
			tail = temp;
		}

		else {
			cur = tail;
			tail.next_node = temp;
			tail = tail.next_node;
			tail.prev_node = cur;
		}
	}

	public void pop_front(){
		if(head!=null){
			head = head.next_node;
		}
		if(head == null){
			tail = null;
		}
	}

	public void pop_back(){
		System.out.println(tail.value);
		System.out.println(tail.prev_node.value);
		if (tail == null){
			head = null;
		}

		if(tail!=null){
			tail = tail.prev_node;
		}

	}

	public boolean is_empty(){
		return(tail == null);
	}

	public void show(){
		Node temp = head;
		while(temp.next_node!=null){
			System.out.print(temp.value+" ");
			temp = temp.next_node;
		}
		System.out.println();
	}
}