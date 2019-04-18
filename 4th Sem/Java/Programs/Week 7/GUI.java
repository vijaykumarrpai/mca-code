import java.util.*;
import java.io.*;
import java.awt.*;
abstract class Button
{
	int size = 11,height = 1,width = 4;
	String name = "Caption", color = "Green", font = "Verdana", style = "Bold", edge = "Black outline Round edges";
	void style()
	{
		System.out.println();
		System.out.println("The name of button is : " +name);
		System.out.println("The color of button is : " +color);
		System.out.println("The font of button is : " +font);
		System.out.println("The size of button is : " +size);
		System.out.println("The height of Button is : " +height);
		System.out.println("The width of Button is : " +width);
		System.out.println("The edge of button is : " +edge);
		System.out.println("The style of button is : " +style);
	}
	abstract void caption();
}
class Cancellation extends Button
{
	String capt="Cancellation successful";
	void caption()
	{
		System.out.println("Cancellation : " +capt);
	}
}
class Reservation extends Button
{
	String capt="Reservation successful";
	void caption()
	{
		System.out.println("Reservation : " +capt);
	}
}
class GUI
{
	public static void main(String[] args) {
		Reservation r=new Reservation();
		r.style();
		r.caption();
		Cancellation c=new Cancellation();
		c.style();
		c.caption();
	}
}