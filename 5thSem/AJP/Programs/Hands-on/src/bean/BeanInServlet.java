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
		Person p = new Person();
		p.setName("Mary");
		p.setEmail("lawrence@gmail.com");
		p.setPhoneNo(1111111111);
		req.setAttribute("p", p);
		RequestDispatcher rd = req.getRequestDispatcher("beandata.jsp");
		rd.forward(req, res);
	}
}