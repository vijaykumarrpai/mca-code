// class Demo{
//       int  value1;
//       int  value2;

//      Demo(int a){
//       value1 = a;
//       System.out.println("Inside 2nd Constructor");
//     }

//     Demo(int a,int b){
//     value1 = a;
//     value2 = b;
//     System.out.println("Inside 3rd Constructor");
//    }

//    public void display(){
//       System.out.println("Value1 === "+value1);
//       System.out.println("Value2 === "+value2);
//   }

//   public static void main(String args[]){
//     Demo d1 = new Demo(0);
//     Demo d2 = new Demo(30);
//     Demo d3 = new Demo(30,40);
//     d1.display();
//     d2.display();
//     d3.display();
//  }
// }

// class ABC{
//   public void myMethod()
//   {
//  System.out.println("Overridden method");
//   }	   
// }
// class Demo extends ABC{
//   public void myMethod(){
//  //This will call the myMethod() of parent class
//  super.myMethod();
//  System.out.println("Overriding method");
//   }
//   public static void main( String args[]) {
//  Demo obj = new Demo();
//  obj.myMethod();
//   }
// }

abstract class AbstractDemo{
  public void myMethod(){
     System.out.println("Hello");
  }
  abstract public void anotherMethod();
}
public class Demo extends AbstractDemo{

  public void anotherMethod() { 
       System.out.print("Abstract method"); 
  }
  public static void main(String args[])
  { 
     //error: You can't create object of it
     AbstractDemo obj = new Demo();
     obj.anotherMethod();
  }
}