import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Demo5 {
	public static void main(String[] args) {
		WebDriver driver = null;
		System.setProperty("webdriver.gecko.driver", "/home/student/Downloads/geckodriver");
		driver = new FirefoxDriver();
		String URL = "file:///home/student/vijay/automation/week9/Week9/example.html";
		driver.get(URL);
//		driver.findElement(By.name("username")).sendKeys("Admin");
		driver.findElement(By.name("userid")).sendKeys("admin123");
		driver.findElement(By.name("account number")).sendKeys("admin123");
		
		if(driver.findElement(By.name("username")).isDisplayed()) {
			System.out.println("Element found");
		} else {
			System.out.println("Element not found");
		}
//	driver.close();
}
}
