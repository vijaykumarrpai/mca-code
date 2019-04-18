import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Demo4 {
public static void main(String[] args) {
	WebDriver driver = null;
	System.setProperty("webdriver.gecko.driver", "/home/student/Downloads/geckodriver");
	driver = new FirefoxDriver();
	String URL = "https:www.google.com";
	driver.get(URL);
	
	List<WebElement> allLinks = driver.findElements(By.tagName("a"));
	System.out.println("All links found on web page are : " + allLinks.size() + "links");
	
	for(WebElement link : allLinks) {
		System.out.println(link.getAttribute("href"));
		System.out.println(link.getText());
	}
}
}
