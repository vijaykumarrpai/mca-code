package com.pes.jdbc;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class StudentServlet
 */
@WebServlet("/StudentServlet")
public class StudentServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		process(request,response);
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		process(request,response);
	}

	private void process(HttpServletRequest request,
			HttpServletResponse response) {
		String btn = request.getParameter("button");
		try {
			if(btn.equalsIgnoreCase("add student")){
				response.sendRedirect("AddStudent.html");
			} else if(btn.equalsIgnoreCase("search student")){
				response.sendRedirect("SearchStudent.html");
			} else if(btn.equalsIgnoreCase("delete student")){
				response.sendRedirect("DeleteStudent.html");
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}
