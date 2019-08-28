import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class DeleteExample {


	public static void main(String args[]) {
		Connection con = null;		
		Statement stmt = null;
		ResultSet rs = null;
		
		// 1.Load the Driver
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
		} catch (Exception e) {
			System.out.println("Where is your MySQL JDBC Driver?");
			e.printStackTrace();
			return;
		}

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
				String query = "delete from student where usn=50";
				stmt = con.createStatement();
				int updateCount = stmt.executeUpdate(query);
				
				// 4. Process the results returned by SQL Query
				System.out.println("Total number of records deleted: " +updateCount);
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
