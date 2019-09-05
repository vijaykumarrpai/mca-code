import java.sql.DriverManager;
import java.sql.Connection;
import java.sql.CallableStatement;
import java.sql.ResultSet;
import java.sql.Statement;

class Callstatement {
	public static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";
	public static final String DATABASE_URL = "jdbc:mysql://localhost:3306/student";
	public static final String DATABASE_USERNAME = "root";
	public static final String DATABASE_PASSWORD = "Student@123";

	public static void main(String args[]) {
		try {
			Class.forName(JDBC_DRIVER);
			Connection con = DriverManager.getConnection(DATABASE_URL, DATABASE_USERNAME, DATABASE_PASSWORD);
			CallableStatement stmt = con.prepareCall("{call studentUpsert(51, \"kumar\", \"BCA\")}");
			stmt.executeQuery();
			Statement stmt_result = con.createStatement();
			ResultSet rs = stmt_result.executeQuery("select * from student");

			while (rs.next()) {
				System.out.println(String.format(rs.getInt("idstudent") + " " + rs.getString("Name") + " " + rs.getString("Branch")));
			}

		} catch (Exception e) {
			System.out.println(e);
		}
	}
}
