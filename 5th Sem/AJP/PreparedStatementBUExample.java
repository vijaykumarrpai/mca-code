import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class PreparedStatementBUExample {

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
		// String query = "select * from student where usn=?";
		String sql = "update student set firstname=?, lastname=? where usn=?";
		// PreparedStatement preparedStatement = null;
		try {
			pstmt = con.prepareStatement(sql);

			pstmt.setString(1, "Gary");
			pstmt.setString(2, "Larson");
			pstmt.setInt(3, 51);
			pstmt.addBatch();

			pstmt.setString(1, "Stan");
			pstmt.setString(2, "Lee");
			pstmt.setInt(3, 456);
			pstmt.addBatch();

			int[] affectedRecords = pstmt.executeBatch();
			int i,x;
			 for (i = 0; i < affectedRecords.length; i++) { 				  
		            // accessing each element of array 
		            x = affectedRecords[i]; 
		            System.out.print("Total number of records affected: " +x+ "\n"); 
		        } 
			//System.out.println("Total number of records affected: ");
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} finally {
			if (pstmt != null) {
				// pstmt.close();
			}
		}
	}
}
