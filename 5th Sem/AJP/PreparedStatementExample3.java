import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class PreparedStatementExample3 {
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
		String query = "insert into student values(?,?,?,?,?,?)";
		try {
			pstmt = con.prepareStatement(query);
			
			//Read the data from a file
			String fileLoc = "E:\\Java\\Unit1\\WebContent\\WEB-INF\\jdbcdatafile";
			FileReader reader=null;
			try {
				reader = new FileReader(fileLoc);
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			BufferedReader br = new BufferedReader(reader);
			
			//Read line by line data
			String lineData=null;
			String[] data=null;
			try {
				while((lineData=br.readLine())!=null) {
					data = lineData.split(" ");
				}
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			pstmt.setInt(1, Integer.parseInt(data[0]));
			pstmt.setString(2, data[1]);
			pstmt.setString(3, data[2]);
			pstmt.setString(4, data[3]);
			pstmt.setInt(5, Integer.parseInt(data[4]));
			pstmt.setInt(6, Integer.parseInt(data[5]));
			
		int count=pstmt.executeUpdate();

			// 4. Process the results returned by SQL Query			
			System.out.println("Rows affected count: " +count);
		
		} catch (SQLException e) {
			// TODO Auto-generated catch block
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
				if (pstmt != null) {
					pstmt.close();
				}
			} catch (SQLException e) {
				e.printStackTrace();
			}
		}
	}

}
