import java.sql.*;

public class Delete {
	public static void main(String[] args) {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver").newInstance();
			Connection cn = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","student");
			Statement stmt = cn.createStatement();
			
			String query = "delete from student.EMPLOYEE where employeeid = 002" ;
			
			stmt.executeUpdate(query);
			
			String sql = "Select * from student.EMPLOYEE";
			
			ResultSet rs = stmt.executeQuery(sql);
			
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
