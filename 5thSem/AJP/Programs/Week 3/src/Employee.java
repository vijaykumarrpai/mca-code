import java.sql.*;

public class Employee {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver").newInstance();
			Connection cn = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","Student@123");
			String query = "update student.Employee set Fname = ?, Lname = ? where Empid = 002";
			PreparedStatement pstmt = cn.prepareStatement(query);
			pstmt.setString(1, args[0]);
		    pstmt.setString(2, args[1]);
			pstmt.executeUpdate();
			
			System.out.println("Database updated successfully");
		} 
		catch(Exception e) {
			e.printStackTrace();
		}
	}
}
