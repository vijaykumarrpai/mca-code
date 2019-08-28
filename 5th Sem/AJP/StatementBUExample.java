import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class StatementBUExample {

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
			con = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/student", "root", "system");

		} catch (SQLException e) {
			System.out.println("Connection Failed! Check output console");
			e.printStackTrace();
			return;
		}

		// 3. Issue SQL queries via Connection
		if (con != null) {
			// System.out.println("You made it, take control your database now!");
			try {
				stmt = con.createStatement();
				//stmt.addBatch("insert into student values(1000, 'Joe','Jones','ECE','18','50')");
				//stmt.addBatch("insert into student values(1001, 'Jack','Jim','CS','19','90')");
				//stmt.addBatch("insert into student values(1002, 'Tim','Mark','EEE','20','75')");
				//stmt.addBatch("insert into student values(1003, 'Rob','Fenny','ME','19','64')");

				// 4. Process the results returned by SQL Query
				int[] recordsaffected = stmt.executeBatch();
				System.out.println("Records inserted successfully");

				/*stmt.addBatch("update student set firstname='John' where usn=1000");
				stmt.addBatch("update student set firstname='Eric' where id=1001");
				stmt.addBatch("update student set firstname='May'  where id=1003");
				int[] recordsAffected = stmt.executeBatch();				
				System.out.println("Total number of records affected: " +recordsAffected);*/
 
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
