import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Demo5 {
	public static void main(String[] args) {
		WebDriver driver = null;
		System.setProperty("webdriver.gecko.driver", "D:\\Study\\MCA\\4th Sem\\Automation\\Week 9\\drivers\\geckodriver.exe");
		driver = new FirefoxDriver();
		String URL = "file:///D:/Study/MCA/4th%20Sem/Automation/Week%209/src/example.html";
		driver.get(URL);
//		driver.findElement(By.name("username")).sendKeys("Admin");
//		driver.findElement(By.name("userid")).sendKeys("admin123");
//		driver.findElement(By.name("account number")).sendKeys("admin123");
		
		if(driver.findElement(By.name("username")).isDisplayed()) {
			System.out.println("Element found");
		} else {
			System.out.println("Element not found");
		}
//	driver.close();
}
}
