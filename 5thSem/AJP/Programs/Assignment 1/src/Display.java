import java.sql.DriverManager;
import java.sql.Connection;
import java.sql.Statement;
import java.sql.ResultSet;
import java.util.Properties;

class Display {
	public static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";
	public static final String DATABASE_URL = "jdbc:mysql://localhost:3306/student";
	public static final String DATABASE_USERNAME = "root";
	public static final String DATABASE_PASSWORD = "Student@123";

	public static void main(String args[]) {
		
		Properties property = new Properties();
		property.put("user", DATABASE_USERNAME);
		property.put("password", DATABASE_PASSWORD);
		
		try {
			Class.forName(JDBC_DRIVER);
			Connection con = DriverManager.getConnection(DATABASE_URL, property);
			Statement stmt = con.createStatement();
			ResultSet rs = stmt.executeQuery("select * from student");
			while (rs.next())
				System.out.println(rs.getInt(1) + "  " + rs.getString(2) + "  " + rs.getString(3));
			con.close();
		} catch (Exception e) {
			System.out.println(e);
		}
	}
}