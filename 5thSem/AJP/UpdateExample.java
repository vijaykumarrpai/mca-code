import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class UpdateExample {

	public static void main(String args[]) {
		Connection con = null;
		PreparedStatement pstmt = null;
		// ResultSet rs = null;

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
		String query = "update student set firstname=?, lastname=? where usn=51";
		try {
			pstmt = con.prepareStatement(query);

			String strfname = args[0];
			String strlname = args[1];

			pstmt.setString(1, strfname);
			pstmt.setString(2, strlname);

			int count = pstmt.executeUpdate();

			// 4. Process the results returned by SQL Query
			System.out.println("Rows affected count: " + count);

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
