import java.sql.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class Department {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver").newInstance();
			Connection cn = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","student");
			Statement stmt = cn.createStatement();
			
			String query = "create table student.DEPARTMENT2(DeptId varchar(20) primary key, Name varchar(50), DeptStrength int)";
			
			stmt.executeUpdate(query);
			
			String sql = "Select * from student.department";
			
			ResultSet rs = stmt.executeQuery(sql);
			
			if(rs.next()) {
				do {
					String DeptId = rs.getString("DeptId");
					String Name = rs.getString("Name");
					int DeptStrength = rs.getInt("DeptStrength");
					
					System.out.format("%s, %s, %s\n", DeptId, Name, DeptStrength);
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
