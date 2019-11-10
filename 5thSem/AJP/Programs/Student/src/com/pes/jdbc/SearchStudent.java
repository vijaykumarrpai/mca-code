package com.pes.jdbc;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class SearchServlet
 */
@WebServlet("/SearchStudent")
public class SearchStudent extends HttpServlet {
	private static final long serialVersionUID = 1L;
	
	private void process(HttpServletRequest request,
			HttpServletResponse response) {
		String btn = request.getParameter("button");
		if(btn.equalsIgnoreCase("search")) {
			searchStudent(request,response);
		} else if(btn.equalsIgnoreCase("back")){
			try {
				response.sendRedirect("IndexStudent.html");
			} catch (IOException e) {
				e.printStackTrace();
			}
}
	}

	private void searchStudent(HttpServletRequest request,
			HttpServletResponse response) {
		PreparedStatement pstmt = null;
		 Connection conn = null;
		 ResultSet rs = null;
		 System.out.println("-------- MySQL JDBC Connection Testing ------------");
		
			try {
				Class.forName("com.mysql.cj.jdbc.Driver");
			} catch (ClassNotFoundException e) {
				System.out.println("Where is your MySQL JDBC Driver?");
				e.printStackTrace();
				return;
			}
		
			System.out.println("MySQL JDBC Driver Registered!");
			Connection connection = null;
		
			try {
				connection = DriverManager.getConnection("jdbc:mysql://localhost:3306","root", "Student@123");
		
			} catch (SQLException e) {
				System.out.println("Connection Failed! Check output console");
				e.printStackTrace();
				return;
			}
		
			if (connection != null) {
				System.out.println("You made it, take control your database now!");				
					
				
			      
			      String query = "select * from studenttab where usn=?";
			      try {
					pstmt = connection.prepareStatement(query);
					String usn = request.getParameter("");
					pstmt.setString(1, usn);
					rs = pstmt.executeQuery();
					
					if(rs.next()){
						String usno = rs.getString("usn");
					} else {
						System.out.println("No records found!");
					}
				} catch (SQLException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}				
			      System.out.println("Search successful...");
			} else {
				System.out.println("Failed to make connection!");
			}
		
	}
	
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		process(request, response);
	}
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		process(request, response);
	}
}
