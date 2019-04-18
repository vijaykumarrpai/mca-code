import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Demo6 {
	public static void main(String[] args) {
		WebDriver driver = null;
		System.setProperty("webdriver.gecko.driver", "D:\\Study\\MCA\\4th Sem\\Automation\\Week 9\\drivers\\chromedriver.exe");
		driver = new FirefoxDriver();
		String URL = "https://www.verizonwireless.com/";
		driver.get(URL);
		
		driver.findElement(By.id("gnavAccountMenu")).click();
	}
}
