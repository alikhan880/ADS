public class Queue{

	Node head;
	Node tail;

	Queue(){
		head = null;
		tail = null;
	}

	public boolean is_empty(){
		return (tail==null);
	}

	public void push(int value){
		Node temp = new Node();
		temp.value = value;

		if(head==null){
			head = temp;
			tail = temp;
		}

		else{
			tail.next_node = temp;
			tail = tail.next_node;
		}

	}

	public void pop(){
		if (head != null){
			head = head.next_node;
		}
		if (head == null){
			tail == null;
		}
	}

	public void show(){
		Node temp_node = head;
		while(temp_node != null){
			System.out.print(temp_node.value+" ");
			temp_node = temp_node.next_node;
		}
		System.out.println();
	}
}