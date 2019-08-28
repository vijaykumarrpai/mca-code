import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class MyFirstJDBC {

	public static void main(String args[]) {
		Connection con = null;		
		Statement stmt = null;
		ResultSet rs = null;
		
		// 1.Load the Driver
		
		/*
		 * try { Class.forName("com.mysql.cj.jdbc.Driver"); } catch (Exception e) {
		 * System.out.println("Where is your MySQL JDBC Driver?"); e.printStackTrace();
		 * return; }
		 */

		// 2. Get DB Connection via DriverManager
		System.out.println("MySQL JDBC Driver Registered!");

		try {
			con = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/student?useSSL=false", "root", "system");

		} catch (SQLException e) {
			System.out.println("Connection Failed! Check output console");
			e.printStackTrace();
			return;
		}

		// 3. Issue SQL queries via Connection
		if (con != null) {
			// System.out.println("You made it, take control your database now!");
			try {
				String query = "select * from student";
				stmt = con.createStatement();
				rs = stmt.executeQuery(query);
				
				// 4. Process the results returned by SQL Query
				while (rs.next()) {
					int usn = rs.getInt("usn");
					String fname = rs.getString("firstname");
					String lname = rs.getString("lastname");
					String dept = rs.getString("dept");
					int age = rs.getInt("age");
					int percentage = (int) rs.getDouble("percentage");

					System.out.println("USN: " + usn);
					System.out.println("First Name: " + fname);
					System.out.println("Lastname: " + lname);
					System.out.println("Department: " + dept);
					System.out.println("Age: " + age);
					System.out.println("Percentage: " + percentage);
				}
			} catch (SQLException e) {
				e.printStackTrace();
			} finally {
				// 5. Close all JDBC Objects
				try {
					if (con != null) {
						con.close();
					}
					if (rs != null) {
						rs.close();
					}
					if (stmt != null) {
						stmt.close();
					}
				} catch (SQLException e) {
					e.printStackTrace();
				}
			}
		}
	}
}
