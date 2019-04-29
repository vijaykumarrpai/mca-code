import java.util.concurrent.TimeUnit;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Adminloginfail {
	public static void main(String[] args) throws InterruptedException {
		WebDriver driver = null;
		System.setProperty("webdriver.gecko.driver", "C:\\Users\\Vijaykumar R Pai.LAPTOP-C26T1P75\\Downloads\\Compressed\\geckodriver.exe");
		driver = new FirefoxDriver();
		String URL = "http://localhost:3000/";
		driver.get(URL);
		driver.findElement(By.name("logemail")).sendKeys("vijaykumarrpai@gmail.com");
		driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
		driver.findElement(By.name("logpassword")).sendKeys("987654321");
		driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
		driver.findElement(By.xpath("//input[@name = 'submit']")).click();
		Thread.sleep(2000);
		driver.close();
	}
}