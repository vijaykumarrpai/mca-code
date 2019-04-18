import java.util.concurrent.TimeUnit;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.firefox.FirefoxDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

public class Demo {
public static void main(String[] args) {
	WebDriver driver = null;
	System.setProperty("webdriver.gecko.driver", "/home/student/Downloads/geckodriver");
	driver = new FirefoxDriver();
	String URL = "https://accounts.google.com/";
	String expectedTitle = "Sign in – Google accounts";
	driver.get(URL);
	String actualTitle = driver.getTitle();
	System.out.println(actualTitle);
	if(actualTitle.equals(expectedTitle)) {
		System.out.println("Passed");
	} else {
		System.out.println("Failed");
		}
	driver.findElement(By.id("identifierId")).sendKeys("vijaykumarrpai@gmail.com");
	driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
	driver.findElement(By.xpath("//span[@class = 'RveJvd snByac']")).click();
	WebDriverWait wait = new WebDriverWait(driver, 20);
//	driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
	WebElement password = driver.findElement(By.name("password"));
	wait.until(ExpectedConditions.elementToBeClickable(password));
    password.sendKeys("12345678");
	driver.findElement(By.xpath("//span[@class = 'RveJvd snByac']")).click();
	driver.manage().timeouts().implicitlyWait(50, TimeUnit.SECONDS);
	driver.close();
	}
}
