import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.mysql.cj.jdbc.CallableStatement;

public class CallableStatementExample {
	public static void main(String args[]) {
		Connection con = null;
		CallableStatement cstmt = null;
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
		String query = "{call getStudentInfo(?,?,?,?,?)}";
		try {
			cstmt = (CallableStatement) con.prepareCall(query);
			
			/*cstmt.setInt(1, Integer.parseInt(args[0]));
			cstmt.setString(2, args[1]);
			cstmt.setString(3, args[2]);
			cstmt.setString(4, args[3]);
			cstmt.setInt(5, Integer.parseInt(args[4]));
			cstmt.setInt(6, Integer.parseInt(args[5]));*/
			
		boolean isDBResults=cstmt.execute();

			// 4. Process the results returned by SQL Query			
			if(isDBResults) {
				System.out.println("Result is of type DB Results");
				rs = cstmt.getResultSet();
				while(rs.next()) {
					int usn=rs.getInt("usn");
					String fname=rs.getString("firstname");
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
					System.out.println("--------------------");
				}
			} else {
				System.out.println("Cannot Process!");
			}
		
		} catch (SQLException e) {
			// TODO Auto-generated catch block
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
				if (cstmt != null) {
					cstmt.close();
				}
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
	}

}
