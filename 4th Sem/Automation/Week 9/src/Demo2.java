import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Demo2 {
	public static void main(String[] args) {
		WebDriver driver = null;
		System.setProperty("webdriver.gecko.driver", "D:\\Study\\MCA\\4th Sem\\Automation\\Week 9\\drivers\\geckodriver.exe");
		driver = new FirefoxDriver();
		String URL = "http://www.seleniummaster.com/seleniumguestbook/Guestbook.aspx";
		driver.get(URL);
		driver.findElement(By.id("nameTextBox")).sendKeys("Vijaykumar R Pai");
		driver.findElement(By.id("emailTextBox")).sendKeys("vijaykumarrpai@rediff.com");
		driver.findElement(By.id("messageTextBox")).sendKeys("Hello");
		driver.findElement(By.id("submitButton")).click();
		driver.close();
	}
}
