import java.sql.CallableStatement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;

//CREATE DEFINER=`root`@`localhost` PROCEDURE `getEmpInfo`(IN FName char(15), IN LName char(15))
//BEGIN
//select * from Employee where FName = FName and LName = LName;
//END

public class GetEmpInfoStoreProcedure {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try 
		{
			Connection cn = null;
			//Statement stm = null;
			
			Class.forName("com.mysql.cj.jdbc.Driver").newInstance();
			cn=DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","Student@123");
			
			String query = "{CALL getEmpInfo(?,?)}";
			CallableStatement stmt = cn.prepareCall(query);
			
			stmt.setString(1, args[0]);
			stmt.setString(2, args[1]);
			ResultSet rs = stmt.executeQuery();
			while (rs.next()) {
				System.out.println("Employee ID :"+ rs.getString(1));
				System.out.println("Employee Name :" + rs.getString(2)+rs.getString(3));
				System.out.println("Employee Department :" + rs.getString(4));
				System.out.println("Employee Salary :"+rs.getString(5));
				}
			//stm.close();
			cn.close();
			
		}catch(Exception e)
		{
			System.out.println("SOMETHING WRONG"+e);
		}

	}

	}


