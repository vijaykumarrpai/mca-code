package com.pes.jdbc;
import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class AddStudent
 */
@WebServlet("/AddStudent")
public class AddStudent extends HttpServlet {
	private static final long serialVersionUID = 1L;

	private Connection con = null;
	private PreparedStatement ps = null;
	private Student stud = new Student();
	private PrintWriter out = null;
	private static final String ADD_STUDENT = "insert into studenttab(usn,fname,lname,dept,age,percentage) values(?,?,?,?,?,?)";
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		process(request, response);
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		process(request, response);
	}
	
	private void process(HttpServletRequest request,
			HttpServletResponse response) {
		String btn = request.getParameter("button");
		if(btn.equalsIgnoreCase("add")) {
			addStudent(request, response);
		} else if(btn.equalsIgnoreCase("back")){
			try {
				response.sendRedirect("IndexStudent.html");
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
	}

	private void getConnection() {
		try {
			con = DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root", "Student@123");
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}
private void addStudent(HttpServletRequest request, HttpServletResponse response) {
		getValues(request, response);
		try {
			System.out.println("Inside AddStudent...");
			out = response.getWriter();
			Class.forName("com.mysql.cj.jdbc.Driver");
			getConnection();
			ps = con.prepareStatement(ADD_STUDENT);
			ps.setString(1, stud.getUsn());
			ps.setString(2, stud.getFname());
			ps.setString(3, stud.getLname());
			ps.setString(4, stud.getDept());
			ps.setInt(5, stud.getAge());
			ps.setDouble(6, stud.getPercentage());
			int flag = ps.executeUpdate();
out.print("<html><body><h3>");
			if(flag != -1){
				System.out.println("Successfully inserted");
				out.print("Data Inserted");
			} else {
				out.print("Failed to insert data");
			}
			out.print("</h3><a href=\"IndexStudent.html\">Back</a></body></html>");
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	private void getValues(HttpServletRequest request, HttpServletResponse response) {
		stud.setUsn(request.getParameter("usn"));
		stud.setFname(request.getParameter("fname"));
		stud.setLname(request.getParameter("lname"));
		stud.setDept(request.getParameter("dept"));
		stud.setAge(Integer.parseInt(request.getParameter("age")));
		stud.setPercentage(Double.parseDouble(request.getParameter("percentage")));
	}
}
