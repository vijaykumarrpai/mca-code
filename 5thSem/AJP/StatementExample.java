import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class StatementExample {

	public static void main(String args[]) {
		Connection con = null;
		Statement stmt = null;
		ResultSet rs = null;

		// 1.Load the Driver
		try {
			Class.forName("com.mysql.cj.jdbc.Driver").newInstance();
		} catch (Exception e) {
			System.out.println("Where is your MySQL JDBC Driver?");
			e.printStackTrace();
			return;
		}
		// 2. Get DB Connection via Driver
		System.out.println("MySQL JDBC Driver Registered!");

		try {
			con = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/student", "root", "system");

		} catch (SQLException e) {
			System.out.println("Connection Failed! Check output console");
			e.printStackTrace();
			return;
		}

		// 3. Issue SQL queries via Connection
		//String query = "INSERT INTO student(usn,firstname,lastname,dept,age,percentage) VALUES (49, 'Rekha','Joshi', 'MCA', 20, 85)";
		String query = "select * from student";
		try {
			stmt = con.createStatement();
			boolean isDBResults = stmt.execute(query);

			// 4. Process the results returned by SQL Query
			if (isDBResults) {
				System.out.println("Result is of type DB Result");
				rs = stmt.getResultSet();	
				//rs.absolute();
				while (rs.next()) {					
					int usn = rs.getInt("usn");
					String fname = rs.getString("firstname");
					String lname = rs.getString("lastname");
					String dept = rs.getString("dept");
					int age = rs.getInt("age");
					int percent = rs.getInt("percentage");

					// Print all the values
					System.out.println("USN: " + usn);
					System.out.println("First Name: " + fname);
					System.out.println("Lastname: " + lname);
					System.out.println("Department: " + dept);
					System.out.println("Age: " + age);
					System.out.println("Percentage: " + percent);
				}
			} else {
				System.out.println("Result is of type integer count");
				int count = stmt.getUpdateCount();
				System.out.println("Rows affected count: " + count);
			}

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
