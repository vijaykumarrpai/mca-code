import java.util.concurrent.TimeUnit;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

public class Deletepackage {
	public static void main(String[] args) {
		WebDriver driver = null;
		System.setProperty("webdriver.chrome.driver", "C:\\Users\\Vijaykumar R Pai.LAPTOP-C26T1P75\\Downloads\\Compressed\\chromedriver.exe");
		driver = new ChromeDriver();
		String URL = "http://localhost:3000/";
		driver.get(URL);
		driver.findElement(By.name("logemail")).sendKeys("vijaykumarrpai@gmail.com");
		driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
		driver.findElement(By.name("logpassword")).sendKeys("12345678");
		driver.findElement(By.xpath("//input[@name = 'submit']")).click();
		driver.findElement(By.xpath("//a[@href = '/index']")).click();
		driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
		driver.findElement(By.xpath("//button[@class = 'btn btn-danger']")).click();
		driver.navigate().refresh();
	}
}
