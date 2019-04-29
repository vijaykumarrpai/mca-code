import java.util.concurrent.TimeUnit;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Createpackage {
	public static void main(String[] args) throws InterruptedException {
		WebDriver driver = null;
		System.setProperty("webdriver.gecko.driver", "C:\\Users\\Vijaykumar R Pai.LAPTOP-C26T1P75\\Downloads\\Compressed\\geckodriver.exe");
		driver = new FirefoxDriver();
		String URL = "http://localhost:3000/";
		driver.get(URL);
		driver.findElement(By.name("logemail")).sendKeys("vijaykumarrpai@gmail.com");
		driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
		driver.findElement(By.name("logpassword")).sendKeys("12345678");
		driver.findElement(By.xpath("//input[@name = 'submit']")).click();
		driver.findElement(By.xpath("//a[@href = '/create']")).click();
		driver.findElement(By.name("personname")).sendKeys("agent2");
		driver.findElement(By.name("packagename")).sendKeys("PC2");
		driver.findElement(By.name("packageno")).sendKeys("7234872381");
		driver.findElement(By.xpath("//input[@name = 'submit']")).click();
		driver.findElement(By.xpath("//a[@href = '/index']")).click();
		Thread.sleep(2000);
		driver.close();
	}
}