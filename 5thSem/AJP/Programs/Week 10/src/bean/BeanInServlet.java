package bean;

import java.io.IOException;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class BeanInServlet extends HttpServlet {
	protected void doGet(HttpServletRequest req, HttpServletResponse res)
			throws ServletException, IOException {
		Employee e = new Employee();
		e.setId("PES12131441");
		e.setName("James Bond");
		req.setAttribute("e", e);
		RequestDispatcher rd = req.getRequestDispatcher("beandata.jsp");
		rd.forward(req, res);
	}
}