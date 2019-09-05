import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class PreparedStatementExample1 {


	public static void main(String args[]) {
		Connection con = null;
		PreparedStatement pstmt = null;
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
		String query = "select * from student where usn=?";
		try {
			pstmt = con.prepareStatement(query);
			String strusn=args[0];
			int usn1=Integer.parseInt(strusn);
			pstmt.setInt(1, usn1);
			rs=pstmt.executeQuery();

			// 4. Process the results returned by SQL Query			
				if (rs.next()) {
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
				
			} else {
				System.out.println("No records found!");
			}

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
