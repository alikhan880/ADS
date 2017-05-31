public class Test{
	public static void main(String[] args) {
		Deque d = new Deque();
		d.push_front(5); 
		d.show(); //5
		d.push_back(1);
		d.show(); //5 1
		d.push_back(2); 
		d.show();	// 5 1 2 
		d.push_front(6);
		d.show(); // 6 5 1 2
		d.pop_front(); 
		d.show();	// 5 1 2 
		d.pop_back();
		d.show(); // 5 1
	}
}