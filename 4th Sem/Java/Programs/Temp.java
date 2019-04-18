import java.util.Scanner;
class Temp
{
public static void main(String args[])
{
System.out.println("Enter the number between 1 to 99");
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
String[] unit={" ","One","Two","Three","Four","Five","Six","Seven","Eight",
"Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen",
"Seventeen","Eighteen","Nineteen"};
//System.out.println(unit[num]);
String[] tens={" ","Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty",
"Ninty"};
//int num=0;

// num%10;
 //num/10;
if(num < 20)
{
System.out.println(unit[num]);
}
else
{
System.out.println(tens[num / 10] + unit[num % 10]);
}
}
}
