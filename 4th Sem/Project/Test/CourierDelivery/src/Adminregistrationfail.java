import java.util.concurrent.TimeUnit;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

public class Adminregistrationfail {
	public static void main(String[] args) {
		WebDriver driver = null;
		System.setProperty("webdriver.chrome.driver", "C:\\Users\\Vijaykumar R Pai.LAPTOP-C26T1P75\\Downloads\\Compressed\\chromedriver.exe");
		driver = new ChromeDriver();
		String URL = "http://localhost:3000/";
		driver.get(URL);
		driver.findElement(By.xpath("//a[@href = './register.html']")).click();
		driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
		driver.findElement(By.xpath("//a[@href = './index.html']")).click();
		driver.findElement(By.xpath("//a[@href = './register.html']")).click();
		driver.findElement(By.name("name")).sendKeys("test12");
		driver.findElement(By.name("email")).sendKeys("test12@gmail.com");
		driver.findElement(By.name("mobno")).sendKeys("fssfsdfsff");
		driver.findElement(By.name("address")).sendKeys("Blore");
		driver.findElement(By.name("password")).sendKeys("secret123");
		driver.findElement(By.name("passwordConf")).sendKeys("secret123");
		driver.findElement(By.xpath("//input[@name = 'submit']")).click();
	}
}
