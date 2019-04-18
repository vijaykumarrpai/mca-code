import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Demo3 {
	public static void main(String[] args) {
		WebDriver driver = null;
		System.setProperty("webdriver.gecko.driver", "/home/student/Downloads/geckodriver");
		driver = new FirefoxDriver();
		String URL = "https://opensource-demo.orangehrmlive.com/";
		driver.get(URL);
		driver.findElement(By.id("txtUsername")).sendKeys("Admin");
		driver.findElement(By.id("txtPassword")).sendKeys("admin123");
		driver.findElement(By.id("btnLogin")).click();
		driver.close();
}
}