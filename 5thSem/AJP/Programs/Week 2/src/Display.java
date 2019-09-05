import java.sql.*;
import java.sql.Connection;
import java.sql.DriverManager;

public class Display {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver").newInstance();
			Connection cn = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","student");
			Statement stmt = cn.createStatement();
			
			String query = "Select * from student.EMPLOYEE";
			
			ResultSet rs = stmt.executeQuery(query);
			
			if(rs.next()) {
				do {
					System.out.println(rs.getString(1) + "," + rs.getString(2) + "," + rs.getString(3) + "," + rs.getString(4) + "," + rs.getString(5));
				}while(rs.next());
			} else {
				System.out.println("Record not found...");
			}
			cn.close();
		}
		catch(Exception e) {
			System.out.println(e);
		}
	}
}
