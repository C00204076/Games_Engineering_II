public class BurgerJoint 
{
	static Burger[] burger = new Burger[1];
	static int buf;
	static int p = 0;
	static int c = 0;
	static int n = 500;
	public static class Producer extends Thread
	{
		int a = 0;
		public void run()
		{
			System.out.println("Producer Starting");
			while(p < n){
				while(p != c)
				{
					//System.out.println("Short order cook spinning");
				}
				a = (int)Math.random() * 100;
				System.out.println("Making a Burger: " + p);
				buf = a;
				
				p = p + 1;
				//burger[p] = new Burger();
			}
			System.out.println("Finished Making Burgers");
		}
	}
	
	public static class Consumer extends Thread
	{
		int b = 0;
		public void run()
		{
			System.out.println("Consumer Starting");
			while(c < n)
			{
				while(p <= c)
				{
					//System.out.println("Starving waiting on a burger!");
				}
				System.out.println("Eating Burger: " + c);
				b = buf;
				c = c + 1;
				//burger.buffer[c] = 0;
			}
			
			System.out.println("Finished Making Burgers");
		}
	}
	
	
	public static class Burger extends Thread
	{
		/*protected int numSlots;
		public int[] buffer;
		
		public Burger()
		{
			/*if(numSlots <= 0)
			{
				throw new IllegalArgumentException("numSlots <= 0");
			}
			
			this.numSlots = numSlots;
			buffer = new int[numSlots];
		}*/
		
	}
	
	public static void main(String[] args) 
	{		
		Producer producer = new Producer();
		Consumer consumer = new Consumer();
		producer.start();
		consumer.start();
	}
}
