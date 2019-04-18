import java.util.Scanner;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class Openchrome {
	public static void main(String[] args) {
		
		WebDriver driver = null;
		
		System.out.println("Please enter the browser");
		
		Scanner sc = new Scanner(System.in);
		String browser = sc.nextLine();
		
		
		if (browser.equals("Chrome")) {
			System.setProperty("webdriver.chrome.driver", "C:\\Users\\Vijaykumar R Pai.LAPTOP-C26T1P75\\Downloads\\Compressed\\chromedriver.exe");
			driver = new ChromeDriver();
			String URL = "https://www.google.com/";
			driver.navigate().to(URL);
			System.out.println(driver.getTitle());
			String URL2 = "https://www.naukri.com/";
			driver.navigate().to(URL2);
			driver.manage().window().maximize();
			driver.manage().deleteAllCookies();
			System.out.println("Cookies deleted");
			driver.quit();
		}
		else if (browser.equals("Firefox")) {
			System.setProperty("webdriver.gecko.driver", "C:\\Users\\Vijaykumar R Pai.LAPTOP-C26T1P75\\Downloads\\Compressed\\geckodriver.exe");
			driver = new FirefoxDriver();
			String URL = "https://www.google.com/";
			driver.navigate().to(URL);
			String URL2 = "https://www.naukri.com/";
			driver.navigate().to(URL2);
			driver.manage().window().maximize();
			driver.manage().deleteAllCookies();
			System.out.println("Cookies deleted");
			driver.quit();
		}
	}
}
